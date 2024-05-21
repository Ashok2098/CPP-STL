/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    int min = *min_element(v.begin(),v.end());  // This func will return address of min ele and to extract value, we use pointer
    cout << min <<endl; 
    int max = *max_element(v.begin(),v.end());  // This func will return address of max ele and to extract value, we use pointer
    cout << max <<endl; 
    int sum = accumulate(v.begin(),v.end(),0); // This will return the sum of all elements in the vector or array. 0 is the initial value 
    cout << sum <<endl;
    int cnt = count(v.begin(),v.end(),6); // This will return the count of element in the vector or array. 6 is the ele which you wnat to find the count for 
    cout << cnt <<endl;
    auto it = find(v.begin(),v.end(),2); // This will return the pointer of element 2
    if(it != v.end())
        cout << (*it) <<endl;
    else
        cout << "Element not found" <<endl;
    reverse(v.begin(),v.end()); // This will reverse the entire vector
    for(int val: v)
        cout << val << " ";
    cout <<endl;
    return 0;
}
