#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	bool flag = true;
	int key;
	cin>>key;
	int arr[5] = {3, 2, 5, 7, 9};
	int size = sizeof(arr)/sizeof(arr[0]);


	for(int i = 0; i < size; i++){
		if(arr[i] == key){
			cout<<"The key is in index of: "<<i<<endl;
			flag = false;
			break;
		}
	}
	if(flag){
		cout<<"The key is ont available"<<endl;
	}

	return 0;
}