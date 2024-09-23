#include <iostream>
// https://www.youtube.com/watch?v=igSuiwB7pBU&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=15

using namespace std;

/*
   Dynamic memory and arrays of object:

   -Difference between static and dynamic arrays
   -How to allocate memory for dynamic arrays
   -How to deallocate memory for dynamic arrays

 */

class Student
{
public:
    string Name;
    int Age;
    char Gender;
    float ProgrammingGrade;
};

void printStudents(Student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "STUDENT " << i + 1 << "\t";
        cout << students[i].Name << "\t";
        cout << students[i].Age << "\t";
        cout << students[i].Gender << "\t";
        cout << students[i].ProgrammingGrade << "\n";
    }
}

void resizingArray(Student *&oldArray, int oldSize, int newSize)
{
    Student *newArray = new Student[newSize];
    for (int i = 0; i < oldSize; i++)
    {
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;
    oldArray = newArray;
}

// existing array adding students at existiing position
void insertStudents(Student *&pos, int position, int Size)
{
    for (int i = position; i < Size; i++)
    {
        cout << "STUDENT " << i + 1 << endl;
        Student s;
        cout << "Name: ";
        cin >> s.Name;
        cout << "Age: ";
        cin >> s.Age;
        cout << "Gender";
        cin >> s.Gender;
        cout << "Programming grade: ";
        cin >> s.ProgrammingGrade;

        pos[i] = s;
    }
}

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    // creating a dynamic array, so the name of the array is students
    // and its a pointer that points to a new array that stores type Student
    // of size varible size
    // allocating new memory for array
    Student *students = new Student[size];

    // just to insert elements starting at position 0(1)
    insertStudents(students, 0, size);

    char choice;
    cout << "Do you want a bigger array? ";
    cin >> choice;

    if (choice == 'n' || choice == 'N')
    {
        delete[] students;
        return 0;
    }

    int newSize;
    cout << "Enter new size";
    cin >> newSize;

    resizingArray(students, size, newSize);

    insertStudents(students, size, newSize);

    int counterMale = 0, counterFemale = 0;

    for (int i = 0; i < newSize; i++)
    {
        if (students[i].Gender == 'm' || students[i].Gender == 'M')
        {
            counterMale++;
        }
        else if (students[i].Gender == 'f' || students[i].Gender == 'F')
        {
            counterFemale++;
        }
    }
    Student *males = new Student[counterMale];
    Student *females = new Student[counterFemale];
    int maleIndex = 0, femaleIndex = 0;

    for (int i = 0; i < newSize; i++)
    {
        if (students[i].Gender == 'm' || students[i].Gender == 'M')
        {
            males[maleIndex++] = students[i];
        }
        else if (students[i].Gender == 'f' || students[i].Gender == 'F')
        {
            females[femaleIndex++] = students[i];
        }
    }

    printStudents(students, newSize);
    cout << endl;
    printStudents(males, counterMale);
    cout << endl;
    printStudents(females, counterFemale);

    delete[] males;
    delete[] females;
    delete[] students;
    // deallocate memory [] is necessary in order to deallocate the
    // while array

    return 0;
}
