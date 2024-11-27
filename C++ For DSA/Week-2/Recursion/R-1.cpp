#include <bits/stdc++.h>

using namespace std;


void printNum(int num){
    if(num ==1){
        cout <<1;
        return;
    }
    cout << num <<" ";
    printNum( num -1);
}



int main(){

    printNum(100);

    




    
    return 0;
}