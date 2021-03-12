#include <cstdio>

int main(){
	int n, idx;
	int s[16]={};
	long long int w = 0;
	scanf("%d %lld", &n, &w);
	for(int i=0;i<n;i++){
		scanf("%d", &s[i]);
	}
	for(int i=0;i<n-1;i++){
		int origin = s[i];
		for(int j=i+1;j<=n;j++){
			if(s[i] < s[j]) i++;
			else{
				idx = j-1;
				break;
			}
		}
		w = (w/origin)*s[idx]+w%origin;
	}
	printf("%lld\n", w);
	return 0;
}