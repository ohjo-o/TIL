#include <cstdio>
#ifndef min
#define min(a,b) a>b?b:a
#endif

int memo[100010] = {0,1,1,2,2,1,2,1};

int dp(int n){
	if(n == 0) return 0;
	if(memo[n] != 0) return memo[n];
	memo[n] = min(dp(n-1)+1, dp(n-2)+1);
	memo[n] = min(memo[n], dp(n-5)+1);
	memo[n] = min(memo[n], dp(n-7)+1);
	return memo[n];
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", dp(n));
	return 0;
}