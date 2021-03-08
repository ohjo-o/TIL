#include <cstdio>
#include <iostream>
using namespace std;
#ifndef min
#define min(a,b) a>b?b:a
#endif

int main(){
	string s;
	cin >> s;
	int len = s.length();
	int a = s[0]-'0';
	int cnt[3]={};
	cnt[a]++;
	for(int i=1;i<len;i++){
		if(a != s[i]-'0'){
			a = s[i]-'0';
			cnt[a]++;
		}
	}
	printf("%d\n", min(cnt[0], cnt[1]));
	return 0;
}