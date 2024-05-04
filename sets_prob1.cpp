/******************************************************************************

Given N strings, print unique strings in lexographical order
N <= 10^5
|S| <= 100000

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    long long int N;
    cin >> N;
    while(N--){
        string str;
        cin >> str;
        s.insert(str);
    }
    cout<< "Unique Set of Strings" <<endl;
    for(auto val: s)
        cout << val <<endl;

    return 0;
}