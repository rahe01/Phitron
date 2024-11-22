#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int mark;
    
    Student(int id, string name, char section, int mark) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->mark = mark;
    }
    Student() {}  
};

int main() {
    int t;
    cin >> t; 

    while (t--) {
        Student students[3];  
        
        for (int i = 0; i < 3; i++) {
            int id, mark;
            string name;
            char section;
            
            cin >> id >> name >> section >> mark;
            students[i] = Student(id, name, section, mark); 
        }

      
        Student highest = students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].mark > highest.mark || 
                (students[i].mark == highest.mark && students[i].id < highest.id)) {
                highest = students[i];
            }
        }

      
        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.mark << endl;
    }

    return 0;
}
