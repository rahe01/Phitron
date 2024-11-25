#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s = "rahat ahmed rahe";

    

    bool b = true;

    for (int i = 0; i < s.length(); i++)
    {
        if(isspace(s[i])){
            b= true;
        }

        else if(b && islower(s[i])){
            s[i] = toupper(s[i]);
            b= false;
        }
        else{
            b= false;
        }

        /* code */
    }

    cout << s << endl;
    








    return 0;
}