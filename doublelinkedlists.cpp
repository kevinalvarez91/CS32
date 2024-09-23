#include <iostream>

//https://www.youtube.com/watch?v=-StYr9wILqo&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=8


using namespace std;

class Node{
	public:
		int value;
		Node* next;
		Node* previous;

};

void printForward(Node* head){
	Node* traverser = head;
	while(traverser != nullptr){
		cout << traverser->value << endl;
		traverser = traverser->next;
	}
}


void printBackward(Node* tail){
	Node* traverser = tail;
	while(traverser != nullptr){
		cout << traverser->value << endl;
		traverser = traverser->previous;
	}
}

void addNodeAtEnd(Node** head, Node** tail, int value) {
	Node* node = new Node();
	node->value = value;
	node->next = nullptr;
	node->previous = *tail;

	if (*tail != nullptr) {
		(*tail)->next = node;
	}

	*tail = node;

	if (*head == nullptr) {
		*head = node;
	}
}


void addNodeAtStart(Node* *head, Node* *tail, int value){
	Node * node = new Node();
	node->value = value;
	node->previous = nullptr;
	node->next = *head;

	if(*head != nullptr){
		(*head)->previous = node;
	}
	else{
		*tail = node;
	}
	*head = node;
}


int main(){
	Node* head = nullptr;
	Node* tail = nullptr;

	addNodeAtEnd(&head, &tail, 4);  // Adding the first node
	addNodeAtEnd(&head, &tail, 5);  // Adding the second node
	addNodeAtEnd(&head, &tail, 6);  // Adding the third node
	addNodeAtEnd(&head, &tail, 7);  // Adding the fourth node
	addNodeAtStart(&head, &tail, 8); // Adding new first node



	printForward(head);
	//printBackward(tail);
	/*

	//add first node
	Node* node = new Node();
	node->value = 4;
	node->next = nullptr;
	node->previous = nullptr;
	head = node;
	tail = node;
	//add 2nd node
	//reusing old variable in order to delete everything we did with it at the start
	node = new Node();
	node->value = 5;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;
	// add 3rd node
	node = new Node();
	node->value = 6;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;
	//add 4th node
	node = new Node();
	node->value = 7;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	 */

	return 0;
}
