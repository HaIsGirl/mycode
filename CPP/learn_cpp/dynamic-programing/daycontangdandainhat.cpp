#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vt;
typedef long long ll;
#define loop(i,n) for (int i = 0; i<n;i++)
int main(){
    int n;
    cin>>n;
    vt A(n);
    for (auto &it:A){
        cin>>it;
    }
    vt L(n,1);
    for (int i = 0; i<n;i++){
       for (int j = 0; j<i; j++){
            if (A[i] > A[j])
                L[i] = max(L[i], L[j] + 1);           
       } 
    }

    cout<<*max_element(L.begin(), L.end())<<endl;
}