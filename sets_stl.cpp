/******************************************************************************

Sets:
A set is like a map except that it wont have value. So a set store a unique set of values.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string val: s)
        cout << val <<endl;
        
    // Another way of printing using iterator
    
    // set<string> :: iterator it;
    // for(it = s.begin(); it!=s.end();it++)
    //     cout << *(it) <<endl;
    
    // Another way of printing using auto keyword
    
    // for(auto it=s.begin(); it!=s.end(); it++)
    //     cout << *(it) <<endl;
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("efg");
    s.insert("hij");
    s.insert("abc");
    auto it = s.find("abc");
    // if(it!=s.end())
    //     s.erase(it);
    // Another way to erase is 
    // s.erase("abc");
    print(s);

    return 0;
}
