#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){
    //list is a dynamic container
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(30);
    myList.erase(myList.begin());


    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it << endl;
    }





	return 0;
}
