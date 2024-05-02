/******************************************************************************

Given N strings, print unique strings in lexographical order with their frequency
N <= 10^5
|S| <= 100

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N;
    map <string,int> m;
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        m[s] = m[s] + 1;  // This will assign the value with m[s] if exists and if its then count ++
        // Can also write it as m[s]++;
    }
    // One way of printing is by using iterators but auto would suffice it in less code
    // map <string,int> :: iterator it;
    // for(it = m.begin(); it!= m.end();it++)
    //     cout << (*it).first << " " << (*it).second <<endl;
    for(auto &pr: m)
        cout << pr.first << " " << pr.second <<endl;

    return 0;
}