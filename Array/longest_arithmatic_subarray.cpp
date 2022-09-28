#include <bits/stdc++.h>

using namespace std;
typedef longlong ll;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	int prev = arr[1] - arr[0];
	int curr = 2;
	int ans = 2;
	int i = 2;

	while(i<n){
		if(prev == arr[i] - arr[i-1]){
			curr++;
		}else{
			prev = arr[i] - arr[i-1];
			curr = 2;
		}
		ans = max(ans, curr);
		i++;
	}

	cout<<ans<<"\n";

	cout << endl << "__________________________" << endl;
}
