#include<iostream>
#include<deque>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n+5] ;
    for (int i = 0; i<n; i++){
        cin>>A[i];
    }
    deque<int> dq;
    for (int i = 0; i<n; i++){
        while (!dq.empty() && A[dq.back()] < A[i])
            dq.pop_back();
        dq.push_back(i);
    }
    cout<<A[dq.front()]<<endl;
}