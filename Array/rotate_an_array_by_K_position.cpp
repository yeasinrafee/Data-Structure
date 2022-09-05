#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void rotateElement(int arr[], int size, int k){
	while(k--){
		int temp = arr[size - 1];	

		for(int i = size-1; i > 0; i--){
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int k;
	cin>>k;
	int arr[5] = {1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

	rotateElement(arr, size, k);

	return 0;
}