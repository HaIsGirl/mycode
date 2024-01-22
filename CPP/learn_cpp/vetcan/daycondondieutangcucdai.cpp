#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i = 0;i<n;i++){
        cin>>A[i];
    }
    int i=0;
    int l=0,r=0;
    int d=0;
    int lt,rt;
    int Maxlen = 0;
    int j = 0;
    while (i<n){
        d = 1;
        j = i;
        lt = i;
        while (j<n  && A[j] < A[j+1]){
            d++;
            j++;
            rt = j+1;
        }
        if (Maxlen < d){
            Maxlen = d;
            l = lt;
            r = rt;
        }
        i++;
    }
    cout<<Maxlen<<endl;
    for (int i = l; i < r; i++){
        cout<<A[i]<<" ";
    }
}