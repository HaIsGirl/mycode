#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n],B[1000];
    for (int &x:A){
        cin>>x;
    }
    int d=0;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            for (int k=j-1;k<n;k++){
                if (d<(2*A[i]) - (3*A[j]) + (5*A[k]))
                    d=(2*A[i]) - (3*A[j]) + (5*A[k]);

            }
        }
    }
    cout<<d<<" ";
    // int m=B[0];
    // for (int i=1;i<d;i++)
    //     m=max(B[i],m);
    // cout<<m<<endl;
    return 0;  
}