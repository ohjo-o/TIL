#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	string str;
	string output;
	getline(cin, str);
	for(int i=0;str[i];i++){
		if(output.length() == 0 && str[i] == 'U'){
			output += 'U';
		}
		else if(output.length() == 1 && str[i] == 'C'){
			output += 'C';
		}
		else if(output.length() == 2 && str[i] == 'P'){
			output += str[i];
		}
		else if(output.length() == 3 && str[i] == 'C'){
			output += str[i];
			break;
		}
	}
	if(output == "UCPC") printf("I love UCPC\n");
	else printf("I hate UCPC\n");
	return 0;
}