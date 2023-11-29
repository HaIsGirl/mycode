#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int A[n+1][n+1];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            A[i][j] = i*j;
        }
    }
    int d = 0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
           if (A[i][j] == m)
        	 	d++;
        }
    }
    cout<<d<<endl;
}