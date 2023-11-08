#include<iostream>
using namespace std;
const int MaxN = 1 + 1e6;
bool A[MaxN] = {false};
int main(){
    int n;
    cin>>n;
    for (int i=2;i*i<=n;i++){
            if (A[i]==false)
                for (int j=2;i*j<=n;j++){
                    if (A[i*j] == false) 
                        A[i*j] = true; 
                }
        }
    for (int i=2;i<=n;i++){
        if (A[i] == false)
            cout<<i<<" ";
    }
}
