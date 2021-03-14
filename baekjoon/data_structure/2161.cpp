#include <cstdio>

int main(){
	int n;
	int queue[2000]={};
	scanf("%d", &n);
	int front = 0;
	int back = n-1;
	for(int i=0;i<n;i++){
		queue[i] = i+1;
	}
	while(front <= back){
		printf("%d ", queue[front++]);
		queue[++back] = queue[front++];
	}
	printf("\n");
	return 0;
}