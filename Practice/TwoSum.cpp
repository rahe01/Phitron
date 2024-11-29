#include <bits/stdc++.h>

using namespace std;

int main(){
    
   
    int a[] = {2,6,5,8,11};

    int target = 14;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++){
            if( i == j ) continue;
            else if(a[i] + a[j] == target){
                cout<< "[" << i <<" , "<< j << "]";
            }
        }

        /* code */
    }
    





  

    return 0;
}