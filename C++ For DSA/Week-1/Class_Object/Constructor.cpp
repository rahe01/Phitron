#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r , int c , double g){
        
        roll = r;
        cls = c;
        gpa = g;
    }

};

int main(){
   

    Student rahim(23,10,45.7);
    cout << "Roll: " << rahim.roll << endl;
    cout << "Class: " << rahim.cls << endl;
    cout << "GPA: " << rahim.gpa << endl;








    return 0;
}