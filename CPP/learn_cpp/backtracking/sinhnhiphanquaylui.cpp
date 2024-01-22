#include<iostream>
using namespace std;
const int NMAX = 1e6 + 1;
int n, A[NMAX];
void Inkq(){
   for (int i = 1;i<=n;i++)
        cout<<A[i];
    cout<<endl;
}

void sinh_nhi_phan(int i){
    for (int j = 0; j<=1; j++ ){
        A[i] = j;
        if (i == n)
            Inkq();
        else sinh_nhi_phan(i+1);
    }
}
int main(){
    cin>>n;
sinh_nhi_phan(0);
}