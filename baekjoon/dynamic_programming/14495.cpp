#include <cstdio>

int main(){
	int n;
	long long dp[120]={0,1,1,1};
	scanf("%d", &n);
	for(int i=4;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-3];
	}
	printf("%lld\n", dp[n]);
	return 0;
}