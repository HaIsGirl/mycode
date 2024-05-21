#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int MAXN = 1e9;
vector <bool> A(MAXN, false);
vector <int> B;
bool chinhphuong(int n){
   int canbachai = trunc(sqrt(n)) ;
   if (canbachai * canbachai == n)
        return true;
   return false;
}
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=2; i*i<=b;i++){
        if (A[i] == false)
        for (int j=2; i*j<=b;j++){
            if (A[i*j] == false)
                A[i*j] = true;
        }
    } 
    int d = 0;
    for (int i = a;i<=b;i++){
       if (chinhphuong(i) == true)
            B.push_back(i); 
    } 
    for (int i=0;i<=B.size();i++){
        for(int j=2;j<=b;j++)
            if (A[j] == 0){
                if (j*j == B[i]){
                    cout<<B[i]<<" = "<<j<<" * "<<j<<endl;
                    break;
                }
            }
    }
    return 0;
}
