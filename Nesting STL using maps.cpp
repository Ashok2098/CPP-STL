/******************************************************************************
Nesting in STL is a way of storing different data types with in a stl

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  map < pair < string, string >, vector < int >>m;	// This is an example of nesting. pair of string string as  key and vector of int is a value.
  int N;
  cin >> N;
  while (N--)
	{
	  string fn, ln;
	  int cnt;
	  cin >> fn >> ln >> cnt;
	  for (int i = 0; i < cnt; i++)
		{
		  int x;
		  cin >> x;
		  m[
			 {
			 fn, ln}].push_back (x);	// This will take a pair as its key by m[{fn,ln}] and insert the vector as it's value to the respective pair.
		}
	}
for (auto & pr:m)
	{							// In map, here 'm', we have key and value in it. m.first is the pair and m.second is the value which is vector in this case.
	  auto & fullname = pr.first;	// This will be the pair<stirng, string> which is pair.
	  auto & list = pr.second;	// This will fetch the vector. The value in map.
	  cout << fullname.first << " " << fullname.second << " ";
	for (auto & val:list)
		cout << val << " ";
	  cout << endl;
	}


  return 0;
}


/**
Output:
3
a b 4
1 2 3 4
c d 3
5 9 8
i j 2
6 1
a b 1 2 3 4 
c d 5 9 8 
i j 6 1 

**/
