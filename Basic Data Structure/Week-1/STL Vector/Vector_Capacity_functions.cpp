#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;


    v.push_back(89);
    v.push_back(89);
    v.push_back(89);
    v.push_back(89);
   // cout << v.capacity() << endl;
//    cout << v.size() <<endl;
//     v.clear();
//     cout << v.size() <<endl;
//     cout << v[0] <<endl;

    v.resize(2);
    for (int i = 0; i < v.size();i++)
    
    {
        cout << v[i] << " ";
    }






    return 0;
}