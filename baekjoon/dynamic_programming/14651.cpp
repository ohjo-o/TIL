#include <cstdio>
#ifndef MOD
#define MOD 1000000009
#endif

int main(){
	int n;
	long long int dp[40000][4]={};
	scanf("%d", &n);
	dp[1][0]=0;
	dp[1][1]=0;
	dp[1][2]=0;
	dp[2][0]=2;
	dp[2][1]=2;
	dp[2][2]=2;
	for(int i=3;i<=n;i++){
		for(int j=0;j<3;j++){
			dp[i][j] = (dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%MOD;
		}
	}
	printf("%lld\n", dp[n][0]);
	return 0;
}