#include <cstdio>

int main(){
	int n;
	int s, l;
	char str[51]={};
	s = l = 0;
	scanf("%d\n", &n);
	for(int i=0;i<n;i++){
		scanf("%c", &str[i]);
		if(str[i] == 'S') s++;
		else l++;
	}
	int cup = s+(l/2)+1;
	if(s+l > cup) printf("%d\n", cup);
	else printf("%d\n", s+l);
	return 0;
}