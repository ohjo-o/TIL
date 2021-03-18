#include <cstdio>

int main(){
	int h, n;
	long long int arr[31][31]={};
	scanf("%d %d", &h, &n);
	if(h == n){
		printf("1\n");
		return 0;
	}
	int dis = h>n?h-n:n-h;
	arr[1][0] = arr[1][1] = 1;
	for(int i=2;i<=dis;i++){
		arr[i][0] = 1;
		for(int j=1;j<i;j++){
			arr[i][j] = arr[i][j-1]+arr[i-1][j];
		}
		arr[i][i] = arr[i][i-1];
	}
	printf("%lld\n", arr[dis][dis]);
	// for(int i=1;i<=dis;i++){
	// 	for(int j=0;j<=i;j++){
	// 		printf("%lld ", arr[i][j]);
	// 	}
	// 	printf("\n");
	// }
	return 0;
}