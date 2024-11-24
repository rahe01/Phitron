#include <bits/stdc++.h>

using namespace std;


class Student{
    public:
    string name;
    int roll;

    Student(string n, int r){
        name = n;
        roll = r;
    }
    void hello(){
        cout << "Hello, my name is " << name << endl;
    }
};




int main(){
    Student s("Rahe raeeeeee" , 45);
    cout << s.name << " " << s.roll << endl;
    s.hello();
    
    Student s1("M", 10);
    cout << s1.name << " " << s1.roll << endl;
    s1.hello();
    
    return 0;
}