#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#ifndef INF
#define INF 987654321
#endif

// int main(){
// 	int n;
// 	int mymax = 0;
// 	int arr[1001]={};
// 	int dp[1001]={};
// 	scanf("%d", &n);
// 	for(int i=1;i<=n;i++){
// 		scanf("%d", &arr[i]);
// 	}
// 	for(int i=1;i<=n;i++){
// 		for(int j=i-1;j>=0;j--){
// 			if(arr[i] > arr[j]){
// 				dp[i] = max(dp[i],dp[j]+1);
// 			}
// 			if(mymax < dp[i])
// 				mymax = dp[i];
// 		}
// 	}
// 	printf("%d\n", mymax);
// 	return 0;
// }

// int main(){
// 	int n;
// 	int arr[1010]={};
// 	int dp[1010]={};
//	scanf("%d", &n);
// 	for(int i=1;i<=n;i++){
// 		scanf("%d", &arr[i]);
// 	}
// 	int cnt = 1;
// 	dp[1] = arr[1];
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=i;j++){
// 			if(dp[j] == 0){
// 				dp[j] = arr[i];
// 				cnt++;
// 				break;
// 			}
// 			else if(dp[j] > arr[i]){
// 				dp[j] = arr[i];
// 				cnt++;
// 				break;
// 			}
// 		}
// 		// for(int j=1;j<=n;j++){
// 		// 	printf("%d ", dp[j]);
// 		// }
// 		// printf("\n");
// 	}
// 	// for(int i=1;i<=n;i++){
// 	// 	printf("%d ", dp[i]);
// 	// 	if(i%10==0) printf("\n");
// 	// }
// 	return 0;
// }

int main(){
	int n,x,cnt=0;
	vector<int> v;
	int dp[1010]={};
	scanf("%d", &n);
	v.push_back(-INF);
	for(int i=0;i<n;i++){
		scanf("%d", &x);
		if(x > v.back()){
			v.push_back(x);
			cnt++;
		}
		else{
			auto it = lower_bound(v.begin(), v.end(), x);
			*it = x;
		}
	}
	printf("%d\n", cnt);
	return 0;
}