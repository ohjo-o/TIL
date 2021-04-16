#include <cstdio>

int main(){
	int n;
	int arr[100010]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	int updp[100010]={1,};
	int downdp[100010]={1,};
	int front = arr[0];
	for(int i=1;i<n;i++){
		if(front <= arr[i])
			updp[i] = updp[i-1]+1;
		else
			updp[i] = 1;
		if(front >= arr[i])
			downdp[i] = downdp[i-1]+1;
		else
			downdp[i] = 1;
		front = arr[i];
	}
	int max = 0;
	for(int i=0;i<n;i++){
		if(max < updp[i]) max = updp[i];
		if(max < downdp[i]) max = downdp[i];
	}
	printf("%d\n", max);
	return 0;
}