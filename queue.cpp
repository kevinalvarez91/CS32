#include <iostream>
#include <queue>
using namespace std;
//https://www.youtube.com/watch?v=jaK4pn1jXTo&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=6

void printQueue(queue<int> queue){
    while(queue.size() != 0){
        cout << queue.front();
        queue.pop();
    }


}

int main(){
    //push,size,front,back,pop, empty
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Size is " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;

    cout << "My queue: " << endl;
    printQueue(myQueue);


    return 0;

}