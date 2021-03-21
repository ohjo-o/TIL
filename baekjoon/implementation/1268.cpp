#include <cstdio>

int main(){
	int n;
	int ans = 1;
	int arr[1010][7]={};
	int same[1010][1010]={};
	int sum[1010]={};
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=5;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=5;j++){
			for(int k=i+1;k<=n;k++){
				if(arr[i][j] == arr[k][j]){
					same[i][k]=1;
					same[k][i]=1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			sum[i] += same[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		if(sum[i] > sum[ans]){
			ans = i;
		}
		// printf("%d\n", sum[i]);
	}
	printf("%d\n", ans);
	return 0;
}