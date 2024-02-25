#include<iostream>
using namespace std;
const int N_MAX =  int(1e6);
typedef long long ll;
int A[N_MAX];
ll m;
void factorial(int n){
    m = 1;
    A[0] = 1;
    unsigned long long int r=0, tich = 0;
    for (int i = 2; i<=n; i++){
        for (int j = 0; j<m; j++){
            tich = A[j]*i+r;
            A[j] = tich%10;
            r = tich / 10;
        }
        while (r>0){
            A[m++] = r%10;
            r = r/10;
        }
    }
}
int main(){
    int n;
    cin>>n;
    factorial(n);
    for(int i=m-1; i>=0;i--)
        cout<<A[i];
}