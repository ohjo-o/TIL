#include <cstdio>
#include <queue>
using namespace std;

int n, m, v;
int matrix[1010][1010];
int checkDFS[1010];
int checkBFS[1010];

void dfs(int x){
	checkDFS[x] = 1;
	printf("%d ", x);
	for(int i=1;i<=n;i++){
		if(matrix[x][i] == 1 && checkDFS[i] == 0){
			dfs(i);
		}
	}
}

void bfs(int x){
	queue<int> q;
	q.push(x);
	checkBFS[x] = 1;
	while(!q.empty()){
		int front = q.front();
		q.pop();
		printf("%d ", front);

		for(int i=1;i<=n;i++){
			if(matrix[front][i] == 1 && checkBFS[i] == 0){
				q.push(i);
				checkBFS[i] = 1;
			}
		}
	}
}

int main(){
	int from, to;
	scanf("%d %d %d", &n, &m, &v);
	for(int i=0;i<m;i++){
		scanf("%d %d", &from , &to);
		matrix[from][to] = 1;
		matrix[to][from] = 1;
	}
	dfs(v);
	printf("\n");
	bfs(v);
	printf("\n");
	return 0;
}