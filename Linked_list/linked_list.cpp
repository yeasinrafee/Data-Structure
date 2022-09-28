#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

class Node{
public:
	int value;
	Node *next;
};

void printList(Node *n){
	while(n != NULL){
		cout << n->value << endl;
		n = n->next;
	}
}

int32_t main() 
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->value = 1;
	head->next = second;
	second->value = 2;
	second->next = third;
	third->value = 3;
	third->next = NULL;

	printList(head);

	return 0;
}
