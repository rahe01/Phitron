#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    queue<string> name;

    for(int i=0;i<n;i++){
        int n;
        cin >> n;

        if(n == 0){
            string s;
            cin >> s;
            name.push(s);
        }
        else if(n == 1){
            if(name.empty()){
                cout << "Invalid" << endl;
            }else{
                cout << name.front() << endl;
                name.pop();
            }
        }
        
    }
    
    return 0;
}