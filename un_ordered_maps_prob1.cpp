/******************************************************************************

Unorderd sets has no specific order 
Given N strings and Q queries
In each query you are given a string
print Yes if the string is present
printy No if the string is not present 

We use unordered sets since we do not rquire any specific order 

N < 10^6 
|S| <= 100

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <string> s;
    long long int N;
    cin >> N; 
    while(N--){
        string str;
        cin >> str;
        s.insert(str);  // O(1)
    }
    long long int q;
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        if(s.find(str)!=s.end())
            cout << "Yes" <<endl;
        else
            cout << "No" <<endl;
    }

    return 0;
}