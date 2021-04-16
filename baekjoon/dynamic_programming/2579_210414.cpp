#include <cstdio>
#include <algorithm>
using namespace std;

int dp[310][3];
int arr[310];
int solve(int idx, int flag){
	if(idx <= 0) return 0;
	if(flag == 1) {
		if(dp[idx][0] != 0) return dp[idx][0];
		return dp[idx][0] = solve(idx-2,0)+arr[idx];
	}
	else{
		dp[idx][1] = solve(idx-1,1)+arr[idx];
		dp[idx][0] = solve(idx-2,0)+arr[idx];
		return max(dp[idx][0],dp[idx][1]);
		// dp[idx][2] = solve(idx-2,1)+arr[idx];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &arr[i]);
	}
	// flag:0 옆에 아무도 없어, flag:1 옆에 1명 있어
	int ans = max(solve(n-2,0)+arr[n],solve(n-3,0)+arr[n-1]+arr[n]);
	// for(int i=1;i<=n;i++){
	// 	printf("dp[%d]:%d\n", i,max(dp[i][0],dp[i][1]));
	// }
	printf("%d\n", ans);
	return 0;
}