#include <iostream>
using namespace std;

int getNumber(){
    return 5;
}

int main(){
    //function point that returns int and does not recieve any parameters

    int(*funcPtr)() = getNumber;
    cout << funcPtr();

    return 0;
}