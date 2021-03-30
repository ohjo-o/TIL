#include <cstdio>
#include <vector>
using namespace std;

int n, m;
vector<int> arr;
bool check[10];

void printArr(vector<int> arr){
	for(int i=0;i<arr.size();i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void permutation(int depth){
	if(depth == m){
		printArr(arr);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!check[i]){
			check[i] = true;
			arr[depth] = i;
			permutation(depth+1);
			check[i] = false;
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++)
		arr.push_back(0);
	permutation(0);
	return 0;
}