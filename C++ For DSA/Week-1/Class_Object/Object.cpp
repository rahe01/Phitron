#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    int roll;
    char name[100];
    double gpa;

    Student(int roll , char name[100], double gpa){
        this->roll = roll;
        strcpy(this->name, name);
        this->gpa = gpa;
    }


};



int main(){
 
    Student rahe(1, "John Doe", 3.5);
    cout << "Student Name: " << rahe.name << endl;
    cout << "Student Roll: " << rahe.roll << endl;
    cout << "Student GPA: " << rahe.gpa << endl;




    
    return 0;
}