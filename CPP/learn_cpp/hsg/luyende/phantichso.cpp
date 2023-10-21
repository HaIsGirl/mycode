#include<iostream>
using namespace std;
bool sont(int n){
    bool check=true;
    for (int i=2;i<=n/2;i++){
        if (n%i==0){
            check=false;
            break;
        }
    }
    if (check == false || n<2 ) return false;

    return true;
}

int main(){
    int n;
    cin>>n;
    bool check=false;
    for (int i=2;i<=n;i++){
        if (check == true) break;
        for (int j=2;j<=n;j++){
            if (check == true) break;
            if (sont(i) == true && sont(j)==true && i+j==n){
                cout<<i<<" "<<j<<endl;
                check = true;
            }
        }
    }
    return 0;

}