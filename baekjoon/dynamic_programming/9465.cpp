#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int arr[2][100010]={};
		int dp[2][10010]={};
		scanf("%d", &n);
		for(int i=0;i<2;i++){
			for(int j=0;j<n;j++){
				scanf("%d", &arr[i][j]);
			}
		}
		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];
		for(int j=1;j<n;j++){
			for(int i=0;i<2;i++){
				int flag = i==0? 1:-1;
				dp[i][j] = max(dp[i+flag][j-1]+arr[i][j], dp[i][j-1]);
			}
		}
		// for(int i=0;i<2;i++){
		// 	for(int j=0;j<n;j++){
		// 		printf("%d ", dp[i][j]);
		// 	}
		// 	printf("\n");
		// }
		printf("%d\n", max(dp[0][n-1],dp[1][n-1]));
	}
	return 0;
}