#include <iostream>
#include <vector>
//https://www.youtube.com/watch?v=VNb3VLIu1PA&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=11


using namespace std;

int main(){
    vector<int> numbers;

    numbers.push_back(0);

    for(int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    /*   for(size_t i = 0; i < numbers.size(); i++){
        cout << numbers[i] << endl;
    }*/

   //iterator is a pointer
   /*for(auto it = numbers.begin(); it!= numbers.end(); it++){
    cout << *it <<" " << &(*it) << endl;
   }*/


  //cbegin(), cend() means constant iterators(kinda when you only need to print the 
  //data and not modifiy it)

    for(auto it = numbers.begin(); it!= numbers.end(); it++){
        *it = 20;
        cout << *it << endl;
    }
    /*
    numbers.size()
    numbers.max_size() memory 
    numbers.capacity()
    numbers.rezize(5)
    numbers.empty()
    numbers[0] or numbers.at(0)
    numbers.front()
    numbers.back()
    numbers.clear() erases entire vector    
    */





    return 0;
}