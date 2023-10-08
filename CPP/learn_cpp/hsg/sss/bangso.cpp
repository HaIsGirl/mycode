#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream f;
    ofstream g;
    f.open("bai1.inp");
    g.open("bai1.out");
    int n;
    f>>n;
    int A[n][n];
    int i=1;
    int j=0,l=n-1; 
    while (i<=n*n){ 
        for (int d=0;d<n;d++){
            A[j][d]=i;
            i++;
        }
        j++;
        for (int d=0;d<n;d++){
            A[l][d]=i;
            i++;
        }
        l--;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
           g<<A[i][j]<<" "; 
        }
        g<<endl;
    }
    f.close();
    g.close();
}