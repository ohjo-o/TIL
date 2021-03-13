#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string, string> map1;
	int n, m;
	string s1, s2;

	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> s1 >> s2;
		map1.insert(make_pair(s1, s2));
	}
	for(int i=0;i<m;i++){
		string target;
		cin >> target;
		cout << map1.find(target)->second << '\n';
	}
	return 0;
}