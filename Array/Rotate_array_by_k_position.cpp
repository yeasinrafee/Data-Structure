#include<bits/stdc++.h>
using namespace std;

const int N = 0;


void reverse(int arr[], int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = temp;
	}
}
void arrayRotate(int arr[], int n, int k){
	reverse(arr, 0, n-k-1);
	reverse(arr, n-k, n-1);
	reverse(arr, 0, n-1);


	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int k;
	cin>>k;
	int arr[5] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);

	arrayRotate(arr, n, k);

	return 0;
}