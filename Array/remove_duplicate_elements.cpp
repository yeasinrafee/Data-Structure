#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int rmDuplicate(int arr[], int size){
	int len = 0;
	if(size == 0 || size == 1){
		return size;
	}
	for(int i = 0; i < size - 1; i++){
		if(arr[i] != arr[i + 1]){
			arr[len++] = arr[i];
		}
	}
	arr[len++] = arr[size - 1];
	return len;
}

int main(){
	int arr[7] = {1, 1, 2, 2, 3, 3, 4};
	int size = (sizeof(arr) / sizeof(arr[0]));
	
	cout<<rmDuplicate(arr, size)<<endl;

	return 0;
}