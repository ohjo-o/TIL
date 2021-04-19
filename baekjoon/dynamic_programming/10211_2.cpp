#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int t,n,mymax;
	int arr[1010]={};
	scanf("%d", &t);
	for(int j=0;j<t;j++){
		int dp[1010]={};
		scanf("%d", &n);
		for(int i=0;i<n;i++)
			scanf("%d", &arr[i]);
		dp[0] = arr[0];
		mymax = dp[0];
		for(int i=1;i<n;i++){
			dp[i] = max(arr[i], dp[i-1]+arr[i]);
			if(mymax < dp[i])
				mymax = dp[i];
		}
		printf("%d\n", mymax);
	}
	return 0;
}