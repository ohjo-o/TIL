#include <cstdio>
#ifndef min
#define min(a,b) a>b?b:a
#endif

int main(){
	int n;
	int ans = 5000;
	scanf("%d", &n);
	for(int i=0;i<=n/5;i++){
		int tmp = n;
		tmp -= 5*i;
		if(tmp%3 == 0){
			ans = min(ans, i+tmp/3);
		}
	}
	if(ans == 5000) printf("-1\n");
	else printf("%d\n", ans);
	return 0;
}