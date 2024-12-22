#include <bits/stdc++.h>

using namespace std;

int main(){
    list<int> l={1,3,4};
    // int a[] = {1,2,3,4,5};
    vector<int> a = {1,2,3,4,5};
    list<int> l2(a.begin(),a.end());



    // for(auto it= l.begin(); it!= l.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << l2.max_size() << endl;
    // l2.clear();

    // if(l2.empty()){
    //     cout << "List is empty" << endl;
    // }

    l2.resize(10, 9);

    for(int val : l2){
        cout << val << " ";
    }


    










    return 0;
}