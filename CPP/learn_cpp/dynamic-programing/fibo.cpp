#include<iostream>
#include<vector>
using namespace std;
#define Nmax int(1e6)
vector<int> S(Nmax,-1);

int fibo(int n){
    if (S[n] == -1){
        if (n<=1) S[n] = n;
        else S[n] = fibo(n-1) + fibo(n-2);
    }
    return S[n];
}
int main(){    
    int n;
    cin>>n;
    for (int i = 1; i<=n;i++){
        cout<<fibo(i)<<" ";
    }
}