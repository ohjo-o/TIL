#include <cstdio>
#include <string.h>
#ifndef min
#define min(a,b) a<b?a:b
#endif
char str[100001]={};

int solve(int m, int n){
	for(int i=m, j=n;i<=j;i++,j--){
		if(str[i] != str[j]) return 2;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%s", str);
		int len = strlen(str);
		int result = 0;
		for(int j=0, k=len-1; j <= k; j++, k--){
			if(str[j] != str[k]){
				result = min(solve(j+1, k), solve(j, k-1));
				break;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}