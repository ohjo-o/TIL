#include <cstdio>
#ifndef MOD
#define MOD 1000000009
#endif

int main(){
	int t;
	long long int ret;
	long long int memo[100010][4]={{0,0,0},{0,0,1},{0,1,0},{1,1,1},{1,0,2},{1,2,1}};

	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int n;
		scanf("%d", &n);
		for(int j=4;j<=n;j++){
			memo[j][0] = memo[j-3][1]%MOD+memo[j-3][2]%MOD;
			memo[j][1] = memo[j-2][0]%MOD+memo[j-2][2]%MOD;
			memo[j][2] = memo[j-1][0]%MOD+memo[j-1][1]%MOD;
		}
		ret = ((memo[n][0]+memo[n][1])%MOD+memo[n][2])%MOD;
		printf("%lld\n", ret);
	}
	return 0;
}