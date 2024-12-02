#include <bits/stdc++.h>

using namespace std;


class student{
    public:
    string name;
    int cls;
    string s;
    int id;
    int math_mask;
    int english_mask;
    int allMark;
    void calculateTotal() {
        allMark = math_mask + english_mask;
    }
};



    bool cmp(student l, student r){
        if(l.allMark == r.allMark){
            return l.id < r.id;
        }
           
        else if(l.allMark > r.allMark)
        {
            return true;
        }
           
           
         else{
            return false;

         }  




    }






int main(){

    int n;
    cin >> n;

    student a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mask >> a[i].english_mask;
        a[i].calculateTotal();
    }

    sort(a,a+n, cmp);

    for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mask << " " << a[i].english_mask  << endl;
    }

    








    return 0;
}