#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int mx = -999999;
	int n;

	cin>>n;
	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i < n; i++){
		mx = max(mx, arr[i]);
		cout<<mx<<endl;
	}

	

	cout << endl << "__________________________" << endl;
}
