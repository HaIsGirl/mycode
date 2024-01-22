#include<iostream>
#include<stack>
using namespace std;

const int MaxN = 1 + 1e6;
int n, A[MaxN];
stack <int> st;
int main(){
    cin>>n;
    for (int i = 0; i< n ; i++)
        cin>>A[i];
    for (int i=0; i<n; i++){
        while (!st.empty() && A[st.top()] < A[i])
            st.pop();
        if (!st.empty())
            cout<<st.top() + 1 <<" ";
        else 
            cout<<-1<<" ";
       st.push(i); 
    }
}