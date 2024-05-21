#include<iostream>
#include<string>
using namespace std;
bool sobacthang(int n){
    int A[1000],d=0;
    while (n>0){
        A[d] = n%10;
        n = n/10;
        d++;
    }
    bool check=true;
    for (int i=d-1;i>=0;i--){
        if (A[i]>A[i-1]){
            check = false;
        }
    }
    if (check == false)
        return false;
    return true;
}
int main(){
    // freopen("STEP.INP","r",stdin);
    // freopen("STEP.OUT","w",stdout);
    int n,d=0,t;
    cin>>n;
    int B[n];
    for (int i=0;i<n;i++){
        cin>>B  [i];
        if (B[i]>10 && sobacthang(B[i])==true){
            d++;
        }
    }
     cout<<d<<endl;   
   return 0;
}
