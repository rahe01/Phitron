#include <bits/stdc++.h>

using namespace std;

int main(){

    string name;

    getline(cin, name);
    
    

    stringstream ss(name);
    string word;

    bool find = false;

    while(ss >> word){
        if(word == "Jessica"){
            find = true;
            break;
        }
      
    }

    if(find){
        cout<< "YES"<< endl;

    }
    else{
        cout<< "NO"<< endl;
    }







    
    return 0;
}