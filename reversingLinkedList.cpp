#include <iostream>
using namespace std;

class Node{
	public:
		int value;
		Node* next;
};

void printList(Node * head){
	while(head!= nullptr){
		cout << head->value << " ";
		head = head->next;
	}
}

void reverseLinkedList(Node* *head){
	Node* cur = *head;
	Node* prev = nullptr;
	Node* next = nullptr;

	//we are not moving anyof the elements we are simply traversing the list and changing every point
	//to be reversed
    while(cur != nullptr){
        //stores next value pointer
        next = cur->next;
		//reverses the pointer
        cur->next = prev;
        //moves up the pointers by 1
        prev = cur;
        cur = next;
    }
	//whatever is at the top of the "stack" is now the new head
	//after the while loop finishes 
    *head = prev;

}

void insertAfter(Node* previous, int value){
	if(previous == nullptr){
		cout << "Previous can not be null";
		return;
	}
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = previous->next;
	previous->next = newNode;
}

void insertAtEnd(Node * *head, int value){
	Node* newNode = new Node();
	Node* traversle = *head;
	newNode->value = value;
	newNode->next = nullptr;
	if(*head == nullptr){
		*head = newNode;
		return;
	}
	while(traversle != nullptr){
		traversle = traversle->next;
	}

	traversle->next = newNode;
}

void insertAtStart(Node* *head, int newValue){
	Node* newNode = new Node();
	newNode->value = newValue;
	newNode->next = *head;
	*head = newNode;
}


int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->value = 1;
	head->next = second;
	second->value = 2;
	second->next = third;
	third->value = 3;
	third->next = nullptr;

	printList(head);
    cout << endl << endl;
    reverseLinkedList(&head);
    printList(head);



	return 0;
}
