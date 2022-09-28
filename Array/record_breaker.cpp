#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int arr[n+1];
	arr[n] = -1;
	for(int i = 0; i < n; i ++){
		cin>>arr[i];
	}
	if(n == 1){
		cout<<"1"<<endl;
		return 0;
	}
	
	int ans = 0;
	int mx = -1;
	for(int i = 0; i < n; i ++){
		if(arr[i] > mx && arr[i] > arr[i+1]){
			ans++;
		}
		mx = max(mx, arr[i]);
	}
	cout<<ans;
	cout << endl << "__________________________" << endl;
}
