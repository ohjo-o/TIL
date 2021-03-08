#include <cstdio>

int main(){
	int n, m;
	int visit;
	scanf("%d %d", &n, &m);
	if(n == 1 || m == 1){
		visit = 0;
	}
	else if(n == 2){
		if(m == 2) visit = 0;
		else if(m < 5) visit = 1;
		else if(m < 7) visit = 2;
		else visit = 3;
	}
	else {
		if(m < 3) visit = 1;
		else if(m < 4) visit = 2;
		else if(m < 7) visit = 3;
		else visit = 4+m-7;
	}
	printf("%d\n", 1+visit);
	return 0;
}