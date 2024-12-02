#include <bits/stdc++.h>

using namespace std;


class student{
    public:
    string name;
    int cls;
    string s;
    long long id;
    int math_mask;
    int english_mask;
  
   
};



    bool cmp(student l, student r){

        if (l.english_mask != r.english_mask) {
        return l.english_mask > r.english_mask; 
    }
    if (l.math_mask != r.math_mask) {
        return l.math_mask > r.math_mask;
    }
    return l.id < r.id; 
        
     



    }






int main(){

    int n;
    cin >> n;

    student a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mask >> a[i].english_mask;
       
    }

    sort(a,a+n, cmp);

    for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mask << " " << a[i].english_mask  << endl;
    }

    








    return 0;
}