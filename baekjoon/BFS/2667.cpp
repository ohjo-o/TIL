#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int n, retcnt;
int matrix[30][30];
int check[30][30];
int dir[5][5]={{-1,0}, {1,0}, {0,-1}, {0,1}};

int bfs(int cnt, int x, int y){
	int tcnt;
	queue<pair<int, pair<int, int> > > q;
	q.push(make_pair(cnt, make_pair(x, y)));
	// printf("x:%d y:%d\n", x,y);
	retcnt=cnt;
	while(!q.empty()){
		tcnt = q.front().first;
		int tx = q.front().second.first;
		int ty = q.front().second.second;
		// printf("tcnt: %d, tx: %d, ty: %d\n", tcnt, tx, ty);
		q.pop();
		for(int i=0;i<4;i++){
			int ncnt = tcnt+1;
			// printf("ncnt:%d\n", ncnt);
			int nx = tx+dir[i][0];
			int ny = ty+dir[i][1];
			if(nx < 0 || nx > n-1 || ny < 0 || ny > n-1) continue;
			if(matrix[nx][ny] == 1 && check[nx][ny] == 0){
				// printf("nx, ny (%d, %d)\n", nx, ny);
				check[nx][ny] = 1;
				retcnt++;
				q.push(make_pair(ncnt, make_pair(nx, ny)));
			}
		}
	}
	return retcnt;
}

int main(){
	int ans[600]={};
	int total = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d", &matrix[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j] == 1 && check[i][j] == 0){
				retcnt = 1;
				// printf("i:%d, j:%d\n", i,j);
				check[i][j] = 1;
				ans[total] = bfs(1,i,j);
				total++;
			}
		}
	}
	printf("%d\n", total);
	sort(ans, ans+total);
	for(int i=0;i<total;i++){
		printf("%d\n", ans[i]);
	}
	return 0;
}