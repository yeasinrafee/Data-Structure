#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void revWords(string str){
	string s;
	for(int i = 0; i < str.length(); ++i){
		if(str[i] != ' '){
			s = str[i] + s;
		}
		else{
			cout<< s << " ";
			s = " ";
		}
	}	cout<<s;
}
int main(){
	string str = "My name is Rafee";
	
	revWords(str);
	return 0;
}