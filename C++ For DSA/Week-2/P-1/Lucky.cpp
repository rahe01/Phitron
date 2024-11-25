#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;


    while(n--){
        

        string ticket;
        cin >> ticket;


        string first = ticket.substr(0,3);
        string last = ticket.substr(3,3);


        int sum = 0;

        for (char c : first)
        {
            sum += c - '0';
            /* code */
        }
        

        int sum2 = 0;
        for (char c : last){
            sum2 += c - '0';
            /* code */
        }

        if(sum == sum2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
        
     
        
        

      
        



    }
    












    return 0;
}