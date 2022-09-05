#include<bits/stdc++.h>
using namespace std;

const int N = 7;

void printArray(int arr[]){
	for(int i = 0; i < N-1; ++i){
		cout << arr[i] << " ";
	}
}

int main(){
	int pos, size;
	int arr[N] = {34, 23, 78, 54, 46, 77, 56};
	cout<<"Enter your position: "<<'\n';
	cin>>pos;
	cout<<"Enter the size: "<<'\n';
	cin>>size;

	for(int i = pos; i < size; i++){
		arr[i] = arr[i+1];
	}
	size--;

	printArray(arr);
	return 0;
}
	
