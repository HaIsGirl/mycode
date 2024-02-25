#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define oo int(1e9)
//#define loop(i,n) for(int i = 0; i<n;i++)
int n;
int main(){
    cin>>n;
    int A[n], B[n];
    for (int i = 0; i<n;i++){   
        cin>>A[i];
    }
    for (int i = 0; i<n;i++){
        cin>>B[i];
    }
    sort(A, A+n);
    sort(B, B+n);
    cout<<endl;
    int l = 0,r = n-1;
    int ans = oo;
    while (l<n && r>0){
        ans = min(ans, abs(A[l] + B[r]));
        if (ans == 0)
            break;
        else{
            if (A[l] + B[r] <= 0){
                l++;
            }
            else
                r--;
        }
    }
    cout<<ans<<endl;
    return 0; 
}