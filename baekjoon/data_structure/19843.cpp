#include <cstdio>
#include <map>
#include <iostream>
using namespace std;

int main(){
	int t, n, t1, t2;
	string d1, d2;
	int sleep = 0;
	map<string, int> m;
	m.insert(pair<string, int> ("Mon", 0));
	m.insert(pair<string, int> ("Tue", 1));
	m.insert(pair<string, int> ("Wed", 2));
	m.insert(pair<string, int> ("Thu", 3));
	m.insert(pair<string, int> ("Fri", 4));
	// cout << m.size();
	scanf("%d %d", &t, &n);
	// for(map<string, int>::iterator iter=m.begin();iter!=m.end();iter++){
	// 	cout << iter->first << endl;
	// }
	for(int i=0;i<n;i++){
		cin >> d1 >> t1 >> d2 >> t2;
		// d1, d2에 해당하는 날 차이 만큼 *24 해줄거야...
		int d1i = m.find(d1)->second;
		int d2i = m.find(d2)->second;
		int gap = d2i-d1i;
		t2 += 24*gap;
		sleep += t2-t1;
		// printf("sleep:%d\n", sleep);
	}
	int ans = t-sleep;
	if(ans < 0) printf("0\n");
	else if(ans > 48) printf("-1\n");
	else printf("%d\n", ans);
	return 0;
}