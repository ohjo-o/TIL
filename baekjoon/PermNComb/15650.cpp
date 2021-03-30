#include <cstdio>
#include <vector>
using namespace std;

int n,m;
vector<int> arr;

// void printArr(vector<int> arr){
// 	for(int i=0;i<arr.size();i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// }

// void combination(int depth, int next){
// 	if(depth == m){
// 		printArr(arr);
// 		return ;
// 	}
// 	for(int i=next;i<=n;i++){
// 		arr[depth] = i;
// 		combination(depth+1, i+1);
// 	}
// }
char c[18]="             ";
void combination(int depth, int next){
	if(depth == m) {
		printf("%s\n", c);
		return;
	}
	for(int i=next;i<=n;i++){
		c[depth] = i;
		printf("i: %d\n", i);
		combination(depth+1, i+1);
	}
}

int main(){
	scanf("%d %d", &n, &m);
	c[m+m] = 0;
	combination(0, 1);
	return 0;
}
