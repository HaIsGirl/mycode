#include<bits/stdc++.h>
using namespace std;

int uoc(int n){
    int sum = 0;
    for (int i = 1; i*i<=n; i++){
        if (n%i==0){
            sum+= i + n/i;
            if (i*i == n)
                sum-=i;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector <int> A(n);
    for (int i = 0; i<n;i++){
        cin>>A[i];
    }
    for (int i = 0; i<n; i++){
        cout<<uoc(A[i])<<" ";
    }
}