#include <cstdio>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	int n;
	set<string> s;
	string name, state;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		cin >> name >> state;
		// cout << name << ' ' << state << endl;
		if(state == "enter"){
			s.insert(name);
		}
		else if(state == "leave"){
			s.erase(name);
		}
	}
	for_each(s.rbegin(), s.rend(), [](string it){
		printf("%s\n", it.c_str());
	});
	// for(set<string>::iterator it = s.rbegin(); it != s.rend(); it++){
	// 	printf("%s\n", it);
	// }
	// for(auto i : s){
	// 	cout << i << endl;
	// }
	return 0;
}