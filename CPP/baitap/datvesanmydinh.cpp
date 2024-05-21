#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int t;
    int A[11] = {};
    for (int i=0 ;i<m;i++){
        cin>>t;
        A[t] = 1;
    }
    for (int i=1;i<=n;i++)
        if (A[i] == 0) 
            cout<<i<<" ";
}