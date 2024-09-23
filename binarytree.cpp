//https://www.youtube.com/watch?v=UHxtjVsOTHc&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=9

#include <iostream>
using namespace std;
/*
   Node is each of the circles, the lines that connect nodes
   are called edges. 
   The children can not be connected together, if so then it is 
   another data structure
   -The first node is called the root(a node with no parent)
   -Leaf node is a node that has no children
   -A binary search tree, would be left node will always have a value
   that is less than the root, while right node will always have a value that
   is greater than the root, and you do this continuously
 */

class Node{
	public:
		int data;
		Node* left;
		Node* right;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

int main(){
    Node * root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);


	return 0;
}
