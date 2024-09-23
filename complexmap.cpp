#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

void printMap(map<string, list<string>> myMap){
    for(auto pair: myMap){
        cout << pair.first << " - ";

        for(auto attack : pair.second){
            cout << attack << ", ";
        }
        cout << endl;
    }
}


int main(){

    map<string, list<string>> pokedex;

    list<string> pikachuAttacks{"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks{"flame thrower", "scary face"};
    list<string> chikoritaAttacks{"razor leaf", "poison powder"};


    pokedex.insert(pair<string, list<string>>("pickachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("chikoritaAttacks", chikoritaAttacks));

    //this doesn't work because a list can not simply be printed
    /*for(auto pair : pokedex){
        cout << pair.first << " - " << pair.second << endl;
    }*/


    printMap(pokedex);

    return 0;
}