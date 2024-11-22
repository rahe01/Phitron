#include <bits/stdc++.h>

using namespace std;

int main(){
    string line;

    while(getline(cin, line)){
        istringstream iss(line);
        string Word;
        string Result;

    while (iss >> Word)
    {
        sort(Word.begin(), Word.end());
        Result += Word;
        /* code */
    }
    sort(Result.begin(), Result.end());
    cout << Result << endl;
    



    };










    return 0;
}