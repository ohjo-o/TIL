#include <cstdio>

int main(){
	int n, s, r;
	int team[11]={};
	int kayak[11]={};
	scanf("%d %d %d", &n, &s, &r);
	for(int i=0;i<s;i++){
		scanf("%d", &team[i]);
	}
	for(int i=0;i<r;i++){
		scanf("%d", &kayak[i]);
	}
	int cnt = s;
	for(int i=0;i<r;i++){
		for(int j=0;j<s;j++){
			if(kayak[i] == team[j]){
				cnt--;
				break;
			}
			else if(kayak[i]-1 == team[j]){
				cnt--;
				break;
			}
			else if(kayak[i]+1 == team[j]){
				cnt--;
				break;
			}
		}
	}
	printf("%d\n", cnt > 0 ? cnt: 0);
	return 0;
}