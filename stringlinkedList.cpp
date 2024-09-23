//string linked list
#include <iostream>
using namespace std;

class Node{
	public:
		string value;
		Node * next;

};

//works
void print(Node * n){
	while(n != NULL){
		cout << n->value << " ";
		n = n->next;
	}
}

void insertFirst(Node* *head, string input){
	Node* newNode = new Node();
	newNode->value = input;
	newNode->next = *head;
	*head = newNode;

}

void insertLast(Node* *head, string input){
	Node* newNode = new Node();
	newNode->value = input;
	newNode->next = NULL;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	Node* last = *head;
	while(last->next != NULL){
		last = last->next;
	}
	last->next = newNode;

}

void insertAfter(Node * previous, string input){
	Node* newNode = new Node();
	newNode->value = input;
	newNode->next = previous->next;
	previous->next = newNode;



}



int main(){
	Node * head = new Node();
	Node * second = new Node();
	Node * third = new Node();


	head->value = "Hello";
	head->next = second;
	second->value = "World";
	second->next = third;
	third->value = "Kevin";
	third->next = NULL;

	insertFirst(&head, "My");
	insertLast(&head, "End");
	insertAfter(second, "SECOND");

	print(head);




	return 0;
}
