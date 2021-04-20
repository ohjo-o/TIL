#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#ifndef INF
#define INF 987654321
#endif

int main(){
	int n,x,ret=0;
	vector<int> v;
	scanf("%d", &n);
	v.push_back(-INF);
	for(int i=0;i<n;i++){
		scanf("%d", &x);
		if(x > v.back()){
			v.push_back(x);
			ret++;
		}
		else{
			auto it = lower_bound(v.begin(), v.end(), x);
			*it = x;
		}
	}
	printf("%d\n", ret);
	return 0;
}