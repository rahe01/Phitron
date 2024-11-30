#include <bits/stdc++.h>

using namespace std;


class Teacher{
    public:
    string name;
    int age;
    int id;
    
};



int main(){


    int n;
    cin>> n;

    Teacher t[n];

    for (int i = 0; i < n; i++)
    {
        cin>> t[i].name >> t[i].age >> t[i].id;
        
    }

    sort(t, t+n, [](Teacher a, Teacher b){
        return a.id < b.id;
    });

    for (int i = 0; i < n; i++){
        cout<< t[i].name << " " << t[i].age << " " << t[i].id << endl;
    }
    return 0;
}