#include <iostream>
using namespace std;
//https://www.youtube.com/watch?v=lsuSwV1FBbA&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=17

class Student
{
public:
    // as soon as you add a virtual method the class now becomes
    // abstract which means you can not make a object of class Student
    string Name;
    int Age;
    char Gender;
    // each of the inherited class now has to provide their own implentation of
    // study, you can no longer create instances of the student class.
    // virtual void Study() {} is just a virtual function with implementation
    //
    // the following below is a pure virtual funtion
    virtual void Study() = 0;

    // virtual destructor
    virtual ~Student()
    {
        cout << "Student destructor called " << endl;
    }
};

class ProgrammingStudent : public Student
{
public:
    void Study() override
    {
        cout << "Learning programming" << endl;
    }
    //virtual destructor for deallocation
    ~ProgrammingStudent()
    {
        cout << "ProgrammingStudent destructor called " << endl;
    }
};

class ArtStudent : public Student
{
public:
    void Study() override
    {
        cout << "Learning to paint" << endl;
    }

    ~ArtStudent()
    {
        cout << "ArtStudent destructor called " << endl;
    }
};

class MusicStudent : public Student
{
public:
    void Study() override
    {
        cout << "Learing to play music" << endl;
    }

    ~MusicStudent()
    {
        cout << "MusicStudent destructor called " << endl;
    }
};

int main()
{
    // because it is Students then we can use any other class
    // that inherits class Student, because its a array of pointers
    Student *stundets[3];
    stundets[0] = new ProgrammingStudent();
    stundets[1] = new ArtStudent();
    stundets[2] = new MusicStudent();

    for (int i = 0; i < 3; i++)
    {
        stundets[i]->Study();
    }

    for (int i = 0; i < 3; i++)
    {
        delete stundets[i];
    }

    return 0;
}
