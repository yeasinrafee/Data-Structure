#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int arr[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sum += arr[j];
			cout<<sum<<endl;
		}
	}

	cout << endl << "__________________________" << endl;
}
