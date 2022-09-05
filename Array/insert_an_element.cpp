#include<bits/stdc++.h>
using namespace std;

const int N = 7;

void printArray(int arr[]){
	for(int i = 0; i <= N; ++i){
		cout << arr[i] << " ";
	}
}

int main(){
	int pos, ele;
	int arr[N] = {34, 23, 78, 54, 46, 77, 56};
	cout<<"Enter your position: "<<'\n';
	cin>>pos;
	cout<<"Enter the element: "<<'\n';
	cin>>ele;

	for(int i = N; i > pos; i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = ele;

	printArray(arr);
	return 0;
}