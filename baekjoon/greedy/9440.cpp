#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int num[15]={};
	while(true){
		int cnt = 0;
		int unitA = 1;
		int unitB = 1;
		int a, b;
		a = b = 0;
		scanf("%d", &n);
		if(n == 0) break;
		for(int i=0;i<n;i++){
			scanf("%d", &num[i]);
			if(num[i] == 0) cnt++;
		}
		sort(num, num+n);
		num[0] = num[cnt];
		num[1] = num[cnt+1];
		for(int i=2;i<2+cnt;i++) num[i] = 0;
		for(int i=n-1;i>=0;i--){
			if(unitA > unitB){
				b += unitB*num[i];
				unitB *= 10;
			}
			else{
				a += unitA*num[i];
				unitA *= 10;
			}
		}
		printf("%d\n", a+b);
	}
	return 0;
}