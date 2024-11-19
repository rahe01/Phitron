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


Student fun(){
    Student korim(12,34,45.6);
    return korim;
}


int main(){
   

   
   Student obj =  fun();


    cout << "Roll: " << obj.roll << endl;
    cout << "Class: " << obj.cls << endl;
    cout << "GPA: " << obj.gpa << endl;










    return 0;
}