#include <bits/stdc++.h>
#include <cstdint>

using namespace std;
typedef long long ll;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int currSum = 0;
	int maxSum = INT_MIN;
	for(int i = 0; i < n; i ++){
		currSum += arr[i];
		if(currSum < 0){
			currSum = 0;
		}
		maxSum = max(maxSum, currSum);
	}
	cout<<maxSum<<'\n';

	cout << endl << "__________________________" << endl;
}
