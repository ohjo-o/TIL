#include <cstdio>

int main(){
	int n, s, e;
	int arr[100001]={};
	int maxs = 0;
	int mine = 100000;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &s, &e);
		if(maxs < s) maxs = s;
		if(mine > e) mine = e;
	}
	printf("%d\n", maxs <= mine ? 0 : maxs-mine);
	return 0;
}