#include<iostream>
using namespace std;
const int Nmax = 1 + 1e6;
bool A[Nmax] = {false};
int main(){
    int n,h;
    cin>>n>>h;
    int s;
    int d = 0;
    for (int i=2; i*i<=n; i++){
        for (int j = 2; j*i <= n; j++){
            if (A[i] == 0){
                A[i*j] = 1;
            }
        }
    }

    for (int i = 2;i<=n;i++){
        s = 0;
        if (A[i] == 0){
            int temp = i;
            while (temp > 0){
                s += temp % 10;
                temp = temp /10;
            }
            if (s == h){
                cout<<i<<endl;
                d++;
            }
        }
    }
    cout<<d<<endl;
}
