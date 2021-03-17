#include <cstdio>

int main(){
	int n, k;
	int now = 0;
	int arr[5001]={};
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++) arr[i] = i+1;
	printf("<");
	for(int i=0;i<n;i++){
		now = (now + k - 1) % (n-i);
		if(i < n-1) printf("%d, ", arr[now]);
		else printf("%d>\n", arr[now]);
		for(int j=now;j<n;j++) arr[j] = arr[j+1];
	}
	return 0;
}