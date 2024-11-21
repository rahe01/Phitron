#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x, y;
    char c;
 
    cin >> x >> c >> y;

   

    if(c == '<'){
        if(x < y){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
     if(c == '>'){
        if(x > y){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
     if(c == '='){
        if(x == y){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }










    return 0;
}