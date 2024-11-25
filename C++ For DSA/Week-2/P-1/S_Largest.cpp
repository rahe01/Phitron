#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s = "Rahatsdfdfsdfsdf ahmed rahessss";
    
    stringstream ss(s);

    string word;

    string longestWord;
    
    int maxLen = 0;





    while( ss>>word ){
        if( word.length() > maxLen ){
            maxLen = word.length();
            longestWord = word;
            
        }
        
    }
    
    cout << longestWord << endl;





    return 0;
}