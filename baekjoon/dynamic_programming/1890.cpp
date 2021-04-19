#include <cstdio>

int main(){
	int n;
	int arr[120][120]={};
	long long int dp[120][120]={};
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int right = arr[1][1];
	int down = arr[1][1];
	dp[1][1+right] = 1;
	dp[1+down][1] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==n && j==n) continue;
			if(dp[i][j] != 0){
				// printf("i:%d, j:%d\n", i, j);
				right = arr[i][j];
				down = arr[i][j];
				// printf("right:%d\n", right);
				if(j+right <= n){
					// printf("1 dp[%d][%d]:%d\n", i,j,dp[i][j]);
					// printf("i:%d j+right:%d\n", i, j+right);
					dp[i][j+right] += dp[i][j];
				}
				if(i+down <= n){
					// printf("2 dp[%d][%d]:%d\n", i,j,dp[i][j]);
					// printf("i+down:%d j:%d\n", i+down, j);
					dp[i+down][j] += dp[i][j];
				}
			}
		}
		// for(int j=1;j<=n;j++){
		// 	for(int k=1;k<=n;k++){
		// 		printf("%d ", dp[j][k]);
		// 	}
		// 	printf("\n");
		// }
		// printf("\n");
	}
	printf("%lld\n", dp[n][n]);
	return 0;
}