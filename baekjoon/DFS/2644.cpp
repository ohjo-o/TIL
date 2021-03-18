#include <cstdio>

int n, ty;
int matrix[110][110];
int check[110];
int ret;

void dfs(int x, int cnt){
	if(x == ty){
		ret = cnt;
	}
	check[x] = 1;
	for(int i=1;i<=n;i++){
		if(check[i] == 0 && matrix[x][i] == 1){
			check[i] = 1;
			dfs(i, cnt+1);
		}
	}
}
int main(){
	int tx, x,y,m;
	scanf("%d %d %d %d", &n, &tx, &ty, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d", &x, &y);
		matrix[x][y] = 1;
		matrix[y][x] = 1;
	}
	dfs(tx, 0);
	printf("%d\n", ret>0?ret:-1);
	return 0;
}