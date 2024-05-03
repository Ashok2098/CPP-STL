/******************************************************************************

-> Unordered maps use Hash in background unlike trees in maps
-> They will be not printed in order unlike maps
-> unordered_map<pair<int, int>, string> m;  - this will produce an error bcz hash can not store pair but
this will work in case of map because it uses tree data structure in the background
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m){
    cout << m.size() <<endl;
    for(auto &pr: m)
        cout << pr.first << " " << pr.second <<endl;
}
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc"; // O(1)
    m[5] = "cdc";
    m[3] = "abe";
    m[5] = "cde";
    print(m);

    return 0;
}
