#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t;
	string n;
	string m;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		int ans, cnt, n1, n0, m1, m0;
		ans = cnt = n1 = n0 = m1 = m0 = 0;
		cin >> n >> m;
		int len = m.length();
		for(int j=0;j<len;j++){
			if(n[j] != m[j]) cnt++;
			if(n[j] == '1') n1++;
			else if(n[j] == '0') n0++;
			if(m[j] == '1') m1++;
			else if(m[j] == '0') m0++;
		}
		ans += n0-m0 > n1-m1 ? n0-m0: n1-m1;
		cnt -= ans;
		ans += cnt/2;
		printf("%d\n", ans);
	}
	return 0;
}