#include <bits/stdc++.h>

using namespace std;

int main(){

    list<int> l={10,20,30,90,80,60 ,90,90,90};
     list<int> l1 = {100 ,200};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());
    // l.push_front(199);
    // l.push_back(299);

    // l.pop_back();
    // l.pop_front();


    // cout << *next(l.begin(), 1)<<endl;

    // l.insert(next(l.begin(),2),l1.begin() , l1.end());
    // l.erase(next(l.begin(),2) ,next(l.begin(),4));

    // replace(l.begin(), l.end(), 90, 100);

    auto it = find(l.begin(), l.end(), 9000);

    if(it!= l.end()){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }


    for(int val : l){
        cout << val << " ";
    }
    
    return 0;
}