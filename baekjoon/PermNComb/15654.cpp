#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
vector<int> input;
vector<int> arr;
bool check[10010];

void permutation(int depth){
	if(depth == m) {
		for(int i=0;i<arr.size();i++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for(int i=0;i<n;i++){
		if(!check[i]){
			check[i] = true;
			arr[depth] = input[i];
			permutation(depth+1);
			check[i] = false;
		}
	}
}

int main(){
	int num;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%d", &num);
		input.push_back(num);
	}
	sort(input.begin(), input.end());
	for(int i=0;i<m;i++)
		arr.push_back(0);
	permutation(0);
	return 0;
}