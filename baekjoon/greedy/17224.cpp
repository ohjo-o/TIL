#include <cstdio>

int main(){
	int n, l, k;
	int ans = 0;
	int sub1[101]={};
	int sub2[101]={};
	scanf("%d %d %d", &n, &l, &k);
	for(int i=0;i<n;i++){
		scanf("%d %d", &sub1[i], &sub2[i]);
	}
	for(int i=0;i<n;i++){
		if(k == 0) break;
		if(sub2[i] <= l){
			sub1[i] = 51;
			k--;
			ans += 140;
		}
	}
	for(int i=0;i<n;i++){
		if(k == 0) break;
		if(sub1[i] <= l){
			k--;
			ans += 100;
		}
	}
	printf("%d\n", ans);
	return 0;
}