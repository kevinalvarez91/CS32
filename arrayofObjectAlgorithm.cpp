#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public:
		string name;
		int Age;
		char Gender;
		float ProgrammingGrade;

		Student(string _name, int _Age, char _Gender, float _ProgrammingGrade){
			name = _name;
			Age = _Age;
			Gender = _Gender;
			ProgrammingGrade = _ProgrammingGrade;
		}

};
//from lowest to highest
//if you want highest to lowest change to >
bool compareByGrade(const Student & s1,const Student &s2){
	return s1.ProgrammingGrade < s2.ProgrammingGrade;
}

//alphabetalically
bool compareByName(const Student&s1, const Student & s2){
	if(s1.name[0] < s2.name[0]){
		return true;
	}
	else{
		return false;
	}
}


int main(){

	Student students[5] = {
		{"John", 20, 'm', 9}, {"Bob", 21, 'm', 8}, 
		{"Alice", 19, 'm', 9.2}, {"Eve", 20, 'm', 8.5}, {"Saldine", 22, 'm', 7.2}};


	for(int i = 0; i < 5; i++){
		if(students[i].name == "Alice"){
			students[i].ProgrammingGrade = 10;
			break;
		}
	}


	sort(students, students + 5, compareByGrade);
	for(int i = 0; i < 5; i++){
		cout << students[i].ProgrammingGrade << endl;
	}
	sort(students, students + 5, compareByName);

	//just reverses the array
	reverse(students, students +5 );
	//compareByGrade must be smallest to bestest
	Student * maxGradeStudent = max_element(students, students + 5, compareByGrade);
	Student * minGradeStudent = min_element(students, students + 5, compareByGrade);

	cout << maxGradeStudent->name << endl;
	cout << minGradeStudent->name;

	return 0;
}
