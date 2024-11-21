#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    int roll;
    string name;
    string section;
    int math_mark;
    int cls;
    Student(int roll, string name, string section , int math_mark , int cls){
        this->roll = roll;
        this->name = name;
        this->section = section;
        this->math_mark = math_mark;
        this->cls = cls;
    }
};




int main(){
    
    Student rah = Student(10, "Rhe" , "A" , 5450, 10);
    Student john = Student(20, "John" , "B" , 70, 11);
    Student tom = Student(30, "Tom" , "C" , 604, 12);

    int rah_mark = rah.math_mark;
    int john_mark = john.math_mark;
    int tom_mark = tom.math_mark;

    int max_mark = max(rah_mark, max(john_mark, tom_mark));

    cout << "The maximum math mark is: " << max_mark << endl;
    cout << "The student with the maximum math mark is: ";
    if(rah_mark == max_mark)
        cout << rah.name << " from Roll No. " << rah.roll << endl;
    else if(john_mark == max_mark)
        cout << john.name << " from Roll No. " << john.roll << endl;

    else if(tom_mark == max_mark) 
    cout << tom.name << " from Roll No. " << tom.roll << endl;







    return 0;
}