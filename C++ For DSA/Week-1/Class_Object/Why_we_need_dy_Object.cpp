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


Student* fun(){
    Student korim(12,34,45.6);
    Student* p = &korim;
    return p;
}


int main(){
   

   
   Student* p =  fun();


    cout << "Roll: " << p->cls << endl;
    cout << "Class: " << p->roll << endl;
    cout << "GPA: " << p->gpa << endl;





    return 0;
}