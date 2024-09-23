#include <iostream>
#include <stack>
//https://www.youtube.com/watch?v=GBST5uQ_yos&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=5

using namespace std;

void printStackElements(stack<int> stack){
while(stack.size() != 0){
    cout << stack.top();
    stack.pop();
}
}

int main(){
    //empty, size, push, pop, top
    stack<int> numbersStack;
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);

    if(numbersStack.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    printStackElements(numbersStack);

    return 0;
}