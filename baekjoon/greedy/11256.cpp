#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int t, j, n;
	int r, c;

	scanf("%d", &t);
	while(t--){
		int ans = 0;
		int mul[1001]={};
		scanf("%d %d", &j, &n);
		for(int i=0;i<n;i++){
			scanf("%d %d", &r, &c);
			mul[i] = r*c;
		}
		sort(mul, mul+n);
		for(int i=n-1;i>=0;i--){
			j -= mul[i];
			ans++;
			if(j <= 0) break;
		}
		printf("%d\n", ans);
	}
	return 0;
}