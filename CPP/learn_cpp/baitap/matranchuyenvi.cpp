//Ma Tran chuyen vi
//Chuyen hang sang cot, cot sang hang

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int A[n][m];
    for (int i=0;i < n; i++){
        for (int j=0; j < m;j++){
            cin>>A[i][j];
        }
    }
    for (int j=0; j < m ; j++){
        for (int i = 0 ; i < n; i++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }   
}