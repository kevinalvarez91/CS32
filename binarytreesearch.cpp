//https://www.youtube.com/watch?v=_IhTp8q0Mm0&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=10

#include <iostream>
using namespace std;
/*
Depth First search 
1. preorder(data,left,right)
2. inorder(left,data,right)
3. postorder(postorder(left,right,data))
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
//recursion(preorder)data,left,right
void printTreePre(Node * root){
    //base case moves it back a node
    if (root == nullptr) return;
    cout << root->data << endl;
    printTreePre(root->left);
    printTreePre(root->right);
}

//left,data,right
void printTreein(Node* root){
    if(root == nullptr) return;
    printTreein(root->left);
    cout << root->data << endl;
    printTreein(root->right);
}
//left right data
void printTreePost(Node* root){
    if(root == nullptr) return;
    printTreePost(root->left);
    printTreePost(root->right);
    cout << root->data << endl;
}

int main(){
    Node * root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printTreePre(root);
    cout << endl << endl;
    printTreein(root);
    cout << endl << endl;
    printTreePost(root);


	return 0;
}
