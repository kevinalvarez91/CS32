#include <iostream>
//https://www.youtube.com/watch?v=RNMIDj62o_o&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=4


using namespace std;

class Node{
	public:
		int Value;
		//pointer to the next node which is why it must be of type node
		Node * Next;

};

void printList(Node* n){
	while(n != NULL){
		cout << n->Value << endl;
		n = n->Next;
	}
}

void insertAtTheFront(Node* *head, int newValue){

	//Prepare a newNode
	Node * newNode = new Node();
	newNode->Value = newValue;
	//Put it in front of current head, has to be dereference because its a pointer to a pointer
	newNode->Next = *head;
	//Move head of the list to point to the newNode
	*head = newNode;
}


void insertAtTheEnd(Node* *head, int newValue){
	//Prepare a newNode
	Node * newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;
	//If linked list is empty, newNode will be head node
	if(*head == NULL){
		*head = newNode;
		return;
	}
	//Find the last node
	Node * last = *head;
	while(last->Next != NULL){
		last = last->Next;
	}
	//Insert the newNode after last node
	last->Next = newNode;
}

void insertAfter(Node* previous, int newValue){
	//check if previous node is null
	if(previous == NULL){
		cout << "Previous can not be NULL";
		return;  
	}
	//prepare new node
	Node* newNode = new Node();
	newNode->Value = newValue; 
	//insert newNode after previous
	newNode->Next = previous->Next;
	previous->Next = newNode;



}


int main(){
	//the start of the linked list, this is just allocating the memory(new)

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	//value of the first node, you can also do (*head).Value = 1
	head->Value = 1; 
	head->Next = second;
	second->Value = 2;
	second->Next = third;
	third->Value = 3;
	//this is the last element so it must point to NULL
	third->Next = NULL;
	//all of the above has only assigned the values of each node, not linked them

	//the adress of a pointer
	insertAtTheFront(&head, -1);
	insertAtTheEnd(&head, -2);
	insertAfter(second, 8);

	printList(head);



	return 0;
}
