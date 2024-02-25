#include<bits/stdc++.h>
using namespace std;
#define Nmax int(1e6)

bool A[Nmax] = {false};
int main(){
    int n;
    cin>>n;
    for (int i = 2; i*i<=n;i++){
        for (int j = 2; i*j<=n; j++){
            if (A[i] == 0)
                A[i*j] = 1;       
        }
    }
    int l = 2, r = n;
    for (int i=2; i<=n;i++){
        for (int j = 2; j<=n;j++){
            if (A[i] == 0 && A[j] == 0){
                if (i + j == n){
                    cout<<i<<" "<<j<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}