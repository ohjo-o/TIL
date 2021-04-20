#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int arr[1010]={};
	int dp[1010]={};
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &arr[i]);
	}
	int ret = arr[0];
	for(int i=1;i<=n;i++){
		for(int j=i-1;j>=0;j--){
			if(arr[i] > arr[j]){
				dp[i] = max(dp[i],dp[j]+arr[i]);
			}
		}
		if(dp[i] == 0) dp[i] = arr[i];
		if(ret < dp[i]) ret = dp[i];
	}
	// for(int i=1;i<=n;i++){
	// 	printf("%d ", dp[i]);
	// }
	printf("%d\n", ret);
	return 0;
}