#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<array<int, 5>, 3> a = {{
        {1, 2, 3, 4, 4},
        {4, 5, 6, 4, 4},
        {7, 8, 9, 4, 4}}};

    cout << "Rows: " << a.size() << endl;          // প্রথম ডাইমেনশনের সাইজ
    cout << "Columns: " << a[0].size() << endl;    // দ্বিতীয় ডাইমেনশনের সাইজ

    return 0;
}
