/******************************************************************************

This program is to understand Comparator function in C++

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
// bool should_i_swap(int a, int b){
//     if(a < b) return true;
//     else return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
    
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(should_i_swap(v[i],v[j]))
//                 swap(v[i],v[j]);
//         }
//     }
//     for(int i = 0; i < n; i++)
//         cout << v[i] << " ";
//     cout << endl;

//     return 0;
// }
// bool should_i_swap(pair<int,int> a, pair<int,int> b){
//     if(a.first !=b.first){
//         if(a.first > b.first) return true;
//         else return false;
//     }
//     else{
//         if(a.second < b.second) return true;
//         else return false;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
    
//     vector<pair<int,int> > v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i].first >> v[i].second;
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(should_i_swap(v[i],v[j]))
//                 swap(v[i],v[j]);
//         }
//     }
//     cout << endl;
//     for(int i = 0; i < n; i++)
//         cout << v[i].first << " " << v[i].second << endl;
//     cout << endl;

//     return 0;
// }

bool should_i_swap(pair<int,int> a, pair<int,int> b){
    // if(a.first !=b.first){
    //     if(a.first > b.first) return false;
    //     else return true;
    // }
    // else{
    //     if(a.second < b.second) return false;
    //     else return true;
    // }
    if(a.first!=b.first)
        return a.first < b.first; // If first is less than other first then it will return true and make it swap
    else
        return a.second > b.second;  // If second is less than other second then it will return true and make it swap
}
int main()
{
    int n;
    cin >> n;
    
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(),v.end(),should_i_swap);
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;

    return 0;
}

