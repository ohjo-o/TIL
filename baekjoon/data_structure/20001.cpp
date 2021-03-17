#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

int main(){
	string str;
	stack<int> s;
	while(true){
		getline(cin, str);
		if(str == "문제"){
			s.push(1);
		}
		else if(str == "고무오리"){
			if(s.empty()){
				s.push(1);
				s.push(1);
			}
			else{
				s.pop();
			}
		}
		else if(str == "고무오리 디버깅 끝") break;
		// if(str == "고무 오리") printf("yes!\n");
		// else printf("no\n");
	}
	if(s.empty()) cout << "고무오리야 사랑해\n";
	else cout << "힝구\n";
	return 0;
}