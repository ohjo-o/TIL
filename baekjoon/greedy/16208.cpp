#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int arr[500001]={};
	long long int front = 0;
	long long int ans = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		front += arr[i];
	}
	sort(arr, arr+n);
	for(int i=n-1;i>0;i--){
		front -= arr[i];
		ans += front*arr[i];
	}
	printf("%lld\n", ans);
	return 0;
}