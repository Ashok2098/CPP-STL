/******************************************************************************

Stacks and Queues
-> Stack is a data structure in which elements follows an order of First in last out (FILO) or Last in first out (LIFO)
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "Stack Output" <<endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << "Queue Output" <<endl;
    queue<int> qu;
    qu.push(6);
    qu.push(7);
    qu.push(8);
    qu.push(9);
    qu.push(10);
    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}