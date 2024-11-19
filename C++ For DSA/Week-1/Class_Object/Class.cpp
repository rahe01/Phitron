#include <bits/stdc++.h>

using namespace std;


class Student {
    public:
    char name[100];
    int roll;
    float gpa;

};





int main(){
    
    Student a;
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa ;
    cin.ignore();
   
  
    
    cout << "Student Name: " << a.name << endl;
    cout << "Roll Number: " << a.roll << endl;
    cout << "GPA: " << a.gpa << endl;




    return 0;
}