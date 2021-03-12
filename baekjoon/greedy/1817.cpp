#include <cstdio>

int main(){
	int n, m, book;
	scanf("%d %d", &n, &m);
	int nm = m;
	int ans = n>0?1:0;
	for(int i=0;i<n;i++){
		scanf("%d", &book);
		if(nm < book){
			nm = m;
			ans++;
		}
		nm -= book;
	}
	printf("%d\n", ans);
	return 0;
}