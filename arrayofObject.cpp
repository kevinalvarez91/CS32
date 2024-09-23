#include <iostream>
using namespace std;
// https://www.youtube.com/watch?v=KoxzCeTAqw4&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=14

class Student
{
public:
	string Name;
	int Age;
	char Gender;
	float ProgrammingGrade;

	Student() {}

	Student(string _Name, int _Age, char _Gender, float _ProgrammingGrade)
	{
		Name = _Name;
		Age = _Age;
		Gender = _Gender;
		ProgrammingGrade = _ProgrammingGrade;
	}
};

int main()
{

	Student students[3] = {
		{"Saldina", 28, 'f', 9}, {"Elon", 50, 'm', 10}, {"Bill", 60, 'm', 7}};

	float sumofGrades = 0;
	for (int i = 0; i < 3; i++)
	{
		sumofGrades += students[i].ProgrammingGrade;
	}

	cout << "Average grade is " << sumofGrades / 3;
	/*for(int i = 0; i < 3; i++){
	  cout << "STUDENT " << i+1 << endl;

	  Student s;
	  cout << "Name: ";
	  cin >> s.Name;
	  cout << "Age: ";
	  cin >> s.Age;
	  cout << "Gender: ";
	  cin >> s.Gender;
	  cout << "Programming grade: ";
	  cin >> s.ProgrammingGrade;

	  students[i] = s;
	  }*/

	return 0;
}
