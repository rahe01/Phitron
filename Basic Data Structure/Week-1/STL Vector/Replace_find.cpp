#include <bits/stdc++.h>

using namespace std;

int main(){
    

    vector <int> v = {1,2,3,2,5,2};


   // replace(v.begin(), v.end()-1,2,100);


 auto it =    find(v.begin(), v.end(), 5);

    if(it == v.end()){
        cout << "Element not found in vector" << endl;
    }
    else{
     
        cout << "Element found   100" << endl;
    }



    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";  
        /* code */
    }
    










    return 0;
}