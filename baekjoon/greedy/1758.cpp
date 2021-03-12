#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int tip[100001]={};
	long long ans = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &tip[i]);
	}
	sort(tip, tip+n);
	for(int i=n-1, j=0;i>=0;i--,j++){
		int t = tip[i]-j;
		if(t > 0) ans += t;
	}
	printf("%lld\n", ans);
	return 0;
}