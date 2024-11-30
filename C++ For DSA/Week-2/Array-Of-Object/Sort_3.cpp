#include <bits/stdc++.h>

using namespace std;


class student{
    public:
    string name;
    int roll;
    int marks;
};



bool cmp(student l , student r){
/*   if(l.marks > r.marks) {
        return true;
    }

    else if(l.marks < r.marks) {
        return false;
    }
    else{
        if(l.roll < r.roll) {
            return true;
        }
        else{
            return false;
        }
    }
    */
    

   //return l.roll < r.roll;



   return (l.marks == r.marks) ? l.roll < r.roll : l.marks > l.marks;

}



int main(){
     int n;
    cin>> n;
   

    student a[n];

    for (int i = 0; i < n; i++)
    {

        cin.ignore();
        getline(cin, a[i].name);
        cin  >> a[i].roll >> a[i].marks;
        
    }







    sort(a , a+n,cmp);
    
    cout << "Sorted Students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }


  
    
    return 0;                      
}