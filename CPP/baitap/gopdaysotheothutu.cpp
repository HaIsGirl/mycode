#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int &x : A)
        cin>>x;
    int m;
    cin>>m;
    int B[m];
    for (int &x : B)
        cin>>x;
    int j=0,i=0;
    while (i<n && j<m){
        if (A[i]<=B[j]){
            cout<<A[i]<<" ";
            i++;
        }
        else {
            cout<<B[j]<<" ";
            j++;
        }
    }
    while (i<n){
        cout<<A[i]<<" ";
        i++;   
    }
    while (j<m){
        cout<<B[j]<<" ";
        j++;
    }
}