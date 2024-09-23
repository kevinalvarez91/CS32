#include <iostream>
#include <map>
#include <string>

//https://www.youtube.com/watch?v=aEgG4pidcKU&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=7
//Map in c++, but it is called a dictionary in other languages



using namespace std;

void printMap(map<string, string> myMap){
    for(auto pair: myMap){
        cout << pair.first << " - " << pair.second << endl;
    }
}

int main(){
    //the first variable type is the key, and the second is value data type
    //a map stores the elements in accending order, if you don't want it to do so
    //use unordered_map
    map<string, string>  myDictionary;
    myDictionary.insert(pair<string,string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string,string>("strawberry", "die Erdbeere"));
    myDictionary.insert(pair<string,string>("apple", "der Aphfel"));
    myDictionary.insert(pair<string,string>("banana", "die Banane"));

    //accessing and changing elements
    myDictionary["strawberry"] = "Die Erdbeere";

    //other functions
    //myDictionary.clear();
    //myDictionary.erase();

    //size
    cout << myDictionary.size() << endl;
    printMap(myDictionary);

    return 0;
}