#include <cstdio>
#include <algorithm>
using namespace std;

int dp[1001]={0,1,2,1,1};

int solve(int n){
	if(dp[n] != 0) return dp[n];
	if(solve(n-1)*solve(n-3)*solve(n-4) == 1) return dp[n] = 2;
	return dp[n] = 1;
}

int main(){
	int n;
	char name[3][3] = {"SK", "CY"};
	scanf("%d", &n);
	int win = solve(n);
	printf("%s\n", name[win-1]);
	return 0;
}