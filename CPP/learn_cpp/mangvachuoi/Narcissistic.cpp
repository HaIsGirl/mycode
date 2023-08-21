#include<iostream>
using namespace std;
int lapphuong(int n){
    n=n*n*n;
    return n;
}
int nar(int temp){
    int Narcissistic=0;
    while (temp>0){
        Narcissistic=Narcissistic+lapphuong(temp%10);
        temp=temp / 10;    
    }
    return Narcissistic;
}
int main(){
    int n,check=0;
    cin>>n;
    int A[n-1];
    for (int i=0;i<n;i++){
        cin>>A[i];
        if (nar(A[i]) == A[i]){
            cout<<A[i]<<" ";
            check++;
        }
    }
    if (check == 0) {
        cout<<"NO"<<endl;
    }
    return 0;
}