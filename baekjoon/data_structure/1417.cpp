#include <cstdio>
#include <queue>
using namespace std;

int main(){
	int n, score;
	priority_queue<int> pq;
	int dasom;
	bool flag = true;
	scanf("%d", &n);
	scanf("%d", &dasom);
	if(n == 1) {
		printf("0\n");
		return 0;
	}
	int origin = dasom;
	for(int i=0;i<n-1;i++){
		scanf("%d", &score);
		pq.push(score);
	}
	int top = pq.top();
	pq.pop();
	while(true){
		if(top < pq.top()){
			pq.push(top);
			top = pq.top();
			pq.pop();
		}
		if(dasom > top) break;
		else if(dasom <= top){
			dasom++;
			top--;
			// printf("top:%d\n", top);
		}
	}
	printf("%d\n", dasom-origin);
	return 0;
}