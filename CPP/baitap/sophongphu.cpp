#include<iostream>
using namespace std;

int sumuoc(int n){
    int sum = 0;
    for (int i = 2; i*i<=n;i++){
        if (n%i == 0){ 
            sum += i;
            if (i*i != n){
                sum+=n/i;
            }
        }
    }
    sum++;
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    int l,r;
    cin>>l>>r;
    int count = 0;
    for (int i = l; i<=r;i++){
        if (sumuoc(i) > i)
            count++;
    }
    cout<<count<<endl;
}