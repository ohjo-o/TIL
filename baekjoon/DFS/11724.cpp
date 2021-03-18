#include <cstdio>

int n, m;
int matrix[1010][1010];
int check[1010];

void dfs(int from, int to){
	for(int i=1;i<=n;i++){
		if(matrix[to][i] == 1 && check[i] == 0){
			check[i] = 1;
			dfs(to, i);
		}
	}
}

int main(){
	int ans = 0;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		int a, b;
		scanf("%d %d", &a, &b);
		matrix[a][b] = 1;
		matrix[b][a] = 1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(matrix[i][j] == 1 && check[j] == 0){
				ans++;
				dfs(i, j);
			}
		}
		if(check[i] != 1) ans++;
	}
	printf("%d\n", ans);
	return 0;
}