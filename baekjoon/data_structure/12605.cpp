#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	vector<string> v;
	stack<string> s;
	int n;
	scanf("%d\n", &n);
	// cin >> n;
	for(int i=1;i<=n;i++){
		string str;
		string tstr;
		getline(cin, str);
		for(int j=0;j<str.length();j++){
			if(str[j] == ' '){
				// cout << "tstr: " << tstr << '\n';
				s.push(tstr);
				tstr = "";
			}
			else{
				tstr += str[j];
			}
		}
		s.push(tstr);
		cout << "Case #" << i << ": " ;
		for(;!s.empty();){
			// cout << j << '\n';
			cout << s.top() << " ";
			s.pop();
		}
		cout << '\n';
	}
	return 0;
}