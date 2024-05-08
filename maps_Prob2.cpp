/******************************************************************************

Problem
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Sample Input
3
Eve 78
Bob 99
Alice 78

Sample Output
Bob 99
Alice 78
Eve 78

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,multiset<string>> mp;
    int n;
    cin >> n;
    while(n--){
        int marks;
        string name;
        cin >> name >> marks;
        mp[marks].insert(name);   // -1 mul willl make sure the larger numbers are sorted first since it is smaller
    }
    // for(auto res: mp){
    //     auto &mrk = res.first;  // This will get the key (int)
    //     auto &lis = res.second; // This will get the value which is a multiset
    //     for(auto val: lis) 
    //         cout <<val << " " << -1*mrk<<endl; // while prinitn we can mul with -1 again to get the positive output
    // }
    auto cur_it = --mp.end();
    while(true){
        auto &stu = (*cur_it).second;
        auto &mar = (*cur_it).first;
        for(auto stds : stu)
            cout << stds << " " << mar << endl; 
        if(cur_it != mp.begin())
            cur_it--;
        else
            break;
    }
    
    return 0;
}
