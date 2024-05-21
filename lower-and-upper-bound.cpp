/******************************************************************************
* Array or Vector should get sorted to perform below operation
* lower_bound -> It will return the first element which you want to find else return the next greater ele
* upper_bound -> It will return the next greater of the element which you want to find
* This will return the iterator incase of vectors or pointer in case of arrrays
* When using in sets or maps make sure you call these functions using set_name.lower_bound(ele), map_name.lower_bound(ele)
  or set_name.upper_bound(ele), map_name.upper_bound(ele)
4 5 5 25 7 8
4 5 5 7 8 25 
4 -> lower_bound(a,a+n,3);  -> 3 is not found hence returning the ele 4.
26 -> upper_bound(a,a+n,26) -> Returns the pointr of the ele. here 26 is not found so it will return the 
address of next of ele 25.
Example for finding 26 in the array which does not exist
4 5 5 25 7 8
4 5 5 7 8 25 
-834780567

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    int *ptr = lower_bound(a,a+n,26);  // This will return a pointer poining to the ele if found else point to the ele point to some garbage
    if(ptr == (a+n))  // This check will make sure to notify user that the ele you are searching for is not present in the array or vector
        cout << "Not found"<<endl;
    else
        cout << *ptr;
    ptr = upper_bound(a,a+n,5); // This will point to the next ele of the ele which you are searching. In this case the next ele of 5 is 7. So it will point to address of 7
    if(ptr == (a+n))  // This check will make sure to notify user that the ele you are searching for is not present in the array or vector
        cout << "Not found"<<endl;
    else
        cout << *ptr;
    return 0;
}
