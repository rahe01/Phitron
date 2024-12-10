#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11};
    vector<int> v2;
    v2 = v;
    
    // for(int i=0; i<v2.size(); i++){
    //     cout << v2[i] << " ";
    // }
   // v2.pop_back();
   vector<int> v3 = {100,200,233};

   v2.insert(v2.begin() +2 , v3.begin() , v3.end());
   v2.erase(v2.begin()+1 , v2.begin() +7);

    for(int x : v2){
        cout << x << " ";
    }








    return 0;
}