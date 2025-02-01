#include <bits/stdc++.h>
using namespace std;

void FrequentWord(string sentence) {
    unordered_map<string, int> wordCount;
    stringstream ss(sentence);
    string word, FrequentWord;
    int maxCount = 0;

    while (ss >> word) {
        wordCount[word]++;

    
        if (wordCount[word] > maxCount) {
            maxCount = wordCount[word];
            FrequentWord = word;
        }
    }

    cout <<FrequentWord << " " << maxCount << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  
    while (t--) {
        string sentence;
        getline(cin, sentence);
        FrequentWord(sentence);
    }

    return 0;
}
