#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int &x : A){
        cin>>x;
    }
    for (int i = 0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if (A[i]>A[j]){
                A[i] = A[i] ^ A[j];
                A[j] = A[i] ^ A[j];
                A[i] = A[i] ^ A[j];
            }
        }
    }
    int i=0;
    int d=0;
    while (i<n){
        d=1;
        cout<<A[i]<<" co so phan tu la: ";
        while (A[i]==A[i+1]){
            d++;
            i++;
        }
        i++;
        cout<<d<<endl;
    }
}