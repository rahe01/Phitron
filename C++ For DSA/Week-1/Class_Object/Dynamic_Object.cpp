#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll , int cls , double gpa){
        
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

int main(){
   

    Student rahim(23,10,45.7);
   Student* karim =  new Student(23,10,34.5);
    cout << "Roll: " << rahim.roll << endl;
    cout << "Class: " << rahim.cls << endl;
    cout << "GPA: " << rahim.gpa << endl;

    cout << "Roll: " << karim->roll << endl;
    cout << "Class: " << karim->cls << endl;
    cout << "GPA: " << karim->gpa << endl;
   








    return 0;
}