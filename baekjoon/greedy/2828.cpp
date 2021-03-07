#include <cstdio>

int main(){
	int n, m;
	int j, b;
	int mv;
	int ans = 0;
	scanf("%d %d", &n, &m);
	scanf("%d", &j);
	int ms=0;
	int me=m;
	for(int i=0;i<j;i++){
		scanf("%d", &b);
		if(b-1 < ms){
			mv = ms-(b-1);
			ms -= mv;
			me -= mv;
			ans += mv;
		}
		else if(me < b){
			mv = b - me;
			ms += mv;
			me += mv;
			ans += mv;
		}
	}
	printf("%d\n", ans);
	return 0;
}