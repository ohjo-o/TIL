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

void permutation(int depth, int next){
	if(depth == m){
		printArr(arr);
		return;
	}
	for(int i=next;i<=n;i++){
		arr[depth] = i;
		permutation(depth+1, i);
	}
}

int main(){
	scanf("%d%d", &n, &m);
	for(int i=0;i<m;i++){
		arr.push_back(0);
	}
	permutation(0,1);
	return 0;
}