#include <cstdio>
#include <math.h>
#ifndef min
#define min(a,b) a>b?b:a
#endif
#ifndef INF
#define INF 100000
#endif

int dp[100001]={0,1,2,3};

int solve(int n){
	if(dp[n] != INF) return dp[n];
	if(n < 4) return dp[n];
	for(int i=2;i<=sqrt(n);i++){
		if(n >= i*i){
			// printf("solve(%d-1)+1: %d\n", n, solve(n-1)+1);
			// printf("solve(%d-%d*%d)+1: %d\n",n, i, i, solve(n-i*i)+1);
			dp[n] = min(dp[n], solve(n-1)+1);
			dp[n] = min(dp[n], solve(n-i*i)+1);
			// printf("dp[n]:%d\n", dp[n]);
		}
	}
	return dp[n];
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=4;i<100000;i++){
		dp[i] = INF;
	}
	printf("%d\n", solve(n));
	return 0;
}