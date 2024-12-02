#include <bits/stdc++.h>

using namespace std;



class Student{

    public:
    
        string name;
        int cls;
        string section;
        int id;




};






int main(){

    int n;

    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {

        /* code */
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }

    

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        swap(a[left].section, a[right].section);
        left++;
        right--;
        /* code */
    }
    







    for (int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }
    









    
    return 0;
}