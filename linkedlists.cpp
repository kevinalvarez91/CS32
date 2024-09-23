#include <iostream>
//https://www.youtube.com/watch?v=HKfj0l7ndbc&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=3
//linked list is not a continous memory 
//so the memory is not one after the other
//the first element is called head, it stores the value, and the address of 
//the next element(aka a pointer to the next element)
//the second element stores its own value, and then a pointer to the 
//third element and so on and so forth
//the last element in the linked list stores its own value, and instead of
//a pointer it just stores null because there is no more
//node is a element of a linked list

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
 
    printList(head);



    return 0;
}