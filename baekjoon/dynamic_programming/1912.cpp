#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int arr[100001]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int dp[100001]={arr[0],};
	int ret = arr[0];
	for(int i=1;i<n;i++){
		dp[i] = max(dp[i-1]+arr[i],arr[i]);
		if(ret < dp[i]) ret = dp[i];
	}
	printf("%d\n", ret);
	return 0;
}