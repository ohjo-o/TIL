#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int rope[100001]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &rope[i]);
	}
	sort(rope, rope+n);
	int max = rope[n-1];
	for(int i=n-2;i>=0;i--){
		int parallel = rope[i]*(n-i);
		if(max < parallel) max = parallel;
	}
	printf("%d\n", max);
	return 0;
}