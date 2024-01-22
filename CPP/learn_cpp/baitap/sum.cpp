#include<iostream>
using namespace std;            
int main(){
    int n;
    cin>>n;
    int A[n+1];
    for (int i = 1;i<=n;i++)
        cin>>A[i];
    int B[n+1] = {};
    for (int i = 1; i<=n;i++){
       B[i] = B[i-1] + A[i]; 
    }
    int dem = 0;
    int d;
    int x,y;
    cin>>d;
    for (int i = 0 ;i<d;i++){
        cin>>x>>y;
        A[dem] = B[y] - B[x-1];
        dem++;
    }
    for (int i = 0; i<dem;i++)
        cout<<A[i]<<" ";
}