#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a , b ,c ;
    char s , q ;

    cin >> a >> s >> b >> q >> c;

    if(s == '+'){
        int sum = a + b;
        if(sum == c){
            cout << "Yes" << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    else if(s == '-'){
        int diff = a - b;
        if(diff == c){
            cout << "Yes" << endl;
        }
        else{
            cout << diff << endl;
        }
    }

    else if(s == '*'){
        int prod = a * b;
        if(prod == c){
            cout << "Yes" << endl;
        }
        else{
            cout << prod << endl;
        }
    }
    











    return 0;
}