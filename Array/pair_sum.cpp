#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool pairSum(int arr[], int n, int k){
	int low = 0;
	int high = n - 1;

	while(low<high){
		if(arr[low] + arr[high] == k){
			cout<<low<<" "<<high<<endl;
			return true;
		}
		else if(arr[low] + arr[high] < k){
			low++;
		}else if(arr[low] + arr[high] > k){
			high--;
		}
	}
	return false;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	pairSum(arr, n, k);

	cout << endl << "__________________________" << endl;
}
