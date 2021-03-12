#include <cstdio>
#ifndef MOD
#define MOD 1000000007
#endif

int main(){
	int n;
	long long dp[1000001]={0, 1, 1};
	scanf("%d", &n);
	for(int i=3;i<=n;i++){
		dp[i] = (dp[i-1]%MOD+dp[i-2]%MOD)%MOD;
	}
	printf("%lld\n", dp[n]);
	return 0;
}