#include<iostream>
using namespace std;
#define oo  1e9 +7;
int A[100+1][100+1];
long x[111], d[111] = {};
long n, sum;
void greedy(){
   x[1] = 1;
   d[1] = 1;
   int i = 1;
   while (i < n){
        i++;
        long best = oo;
        long xi;
        for (int j = 1; j<=n;j++){
            if (d[j] == 0 && A[x[i-1]][j] < best){
                best = A[x[i-1]][j];
                xi = j;
            }
        }
        x[i] = xi;
        d[xi] = 1;
        sum = sum + A[x[i-1]][x[i]];
   } 
   sum += A[n][x[1]];
}
int main(){
    cin>>n;
    for (int i = 1; i<=n; i++)
        for (int j = 1; j<=n;j++)
            cin>>A[i][j];
    greedy();
    cout<<sum<<" ";
    for (int i = 1; i<=n;i++){
        cout<<x[i]<<"-->";
    cout<<1;
    }
}

