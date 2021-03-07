#include <cstdio>

int main(){
	int n, m;
	int bi, idx;
	int ans;
	int box[51] = {};
	int book[51] = {};
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%d", &box[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d", &book[i]);
	}
	ans = idx = bi = 0;
	while(true){
		if(idx > m) break;
		if(book[idx] <= box[bi]){
			box[bi] -= book[idx];
			idx++;
		}
		else bi++;
	}
	for(int i=0;i<n;i++){
		ans += box[i];
	}
	printf("%d\n", ans);
	return 0;
}