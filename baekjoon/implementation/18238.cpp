#include <cstdio>
#include <string.h>

int main(){
	char str[101]={};
	scanf("%s", str);
	int len = strlen(str);
	int ans = str[0]-'A';
	if(ans > 13) ans = 26-ans;
	for(int i=1;i<len;i++){
		int t = str[i]-str[i-1];
		if(t < 0) t = -t;
		if(t > 13) ans += 26-t;
		else ans += t;
	}
	printf("%d\n", ans);
	return 0;
}