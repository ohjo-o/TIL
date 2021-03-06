#include <cstdio>
#include <string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		bool flag = true;
		char str[10001]={};
		scanf("%s", str);
		char a = str[0];
		char b = str[2];
		if(strlen(str) > 7) flag = false;
		if(a == b) flag = false;
		else if(a != str[1] || a != str[4]) flag = false;
		else if(b != str[3] || b != str[5] || b != str[6]) flag = false;
		if(flag) printf("1\n");
		else printf("0\n");
	}
	return 0;
}