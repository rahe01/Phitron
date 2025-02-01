#include <bits/stdc++.h>

using namespace std;


class student{
    public:
    string name;
    int roll;
    int marks;
    student(string n, int r, int m){
        name = n;
        roll = r;
        marks = m;
    }
};

class cmp{
    public:
    bool operator()(student l, student r){
        if(l.marks != r.marks){
            return l.marks < r.marks;
        }
        return l.roll > r.roll;
       
    }
};

int main(){
    priority_queue<student , vector<student>, cmp> pq;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student s(name, roll, marks);
        pq.push(s);
        
    }
    return 0;
}