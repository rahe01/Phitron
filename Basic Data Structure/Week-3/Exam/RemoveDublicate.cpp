#include <bits/stdc++.h>

using namespace std;



int main()
{
   list<int> l;


   while(true){
        int n;
        cin>>n;
        if(n==-1){
            break;
        }
        l.push_back(n);
   }


   
    l.sort();
    l.unique();
    for(auto i:l){
        cout<<i<<" ";
    }




    return 0;
}
