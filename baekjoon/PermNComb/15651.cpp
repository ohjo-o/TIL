#include <cstdio>
#include <vector>
using namespace std;

int n, m;
vector<int> arr;

void printArr(vector<int> arr){
	for(int i=0;i<arr.size();i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void duplicatePermutation(int depth){
	if(depth == m){
		printArr(arr);
		return;
	}
	for(int i=1;i<=n;i++){
		arr[depth] = i;
		duplicatePermutation(depth+1);
	}
}

int main(){
	scanf("%d %d", &n,&m);
	for(int i=0;i<m;i++)
		arr.push_back(0);
	duplicatePermutation(0);
	return 0;
}