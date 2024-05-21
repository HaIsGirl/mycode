#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int t=0;
    for (int &x : A){
        cin>>x;
        t+=x;
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if ((t-(A[i]+A[j]))%2==0){
                cout<<"("<<A[i]<<" "<<A[j]<<")";
            }
        }
    }
}