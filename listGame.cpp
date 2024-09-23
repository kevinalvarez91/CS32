#include <iostream>
#include <list>
//https://www.youtube.com/watch?v=dXI9_9WoTVw&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=18


using namespace std;

void displayRatings(const list<int> & input){
    cout << "Players ratings: ";
    for(auto it = input.begin(); it != input.end(); it++){
        cout <<  *it << " ";
    }
    cout << endl;
}


void insetPlayerIntoOrderedList(int newValue, list<int> &input){
for(auto it = input.begin(); it!= input.end();it++){
    if(newValue < *it){
        //insert the current position of it
        input.insert(it, newValue);
        return;
    }
}
//put it at the end because the value is bigger than everything else in 
//the list already
input.push_back(newValue);
}

int main(){
    list<int> allPlayers ={2, 9, 6, 7, 3, 1, 4, 8, 3, 2, 9};

    list<int> begineers; // rating 1-5
    list<int> pros; //rating 6 -10

    for(auto it = allPlayers.begin(); it!= allPlayers.end(); it++){
        if(*it < 6){
            insetPlayerIntoOrderedList(*it, begineers);
        }
        else{
            insetPlayerIntoOrderedList(*it, pros);
        }
    }



    displayRatings(begineers);
    displayRatings(pros);




    return 0;
}