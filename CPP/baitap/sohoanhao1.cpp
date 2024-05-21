#include<iostream>
using namespace std;
int tongso(int n){
    int t=0;
    while (n>0){
        t+=n%10;
        n=n/10;
    }
    return t;
}
bool check(int n){
    int t=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            t+=i;
        }
    }
    if (t!=n)
        return false;
    return true;
}

int main(){
    int n;
    cin>>n;
    int t=0;
    int A[1000];
    for (int i=0;i<n;i++){
        cin>>A[i];
        }
    for (int i=0;i<n;i++){
        if (check(tongso(A[i]))==true){
            t++;   
        }
    }   
    cout<<t<<endl;
}
