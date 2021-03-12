#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", x+y+min(x,y)/10);
	return 0;
}