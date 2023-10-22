//Ma Tran chuyen vi
//Chuyen hang sang cot, cot sang hang

#include<iostream>
#define loop(i,n) for (int i=0;i<n;i++)
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>m>>n;
    ll A[n][m];
    loop(i,n){
        loop(j,m){
            cin>>A[i][j];
        }
    }
    loop(j,m){
        loop(i,n){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }   
}