#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n],B[n];
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    bool check=true,check1=true;
    for (int i=0; i<n-1;i++){
        if (A[i]>A[i+1]){
            check = false;
        }
        if (A[i]<A[i+1])
            check1=false;
    };
   cout<<((check!=check1) ? "YES" : "NO")<<endl;
    system.pause()
    return 0;
    
}