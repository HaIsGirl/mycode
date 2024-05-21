#include<iostream>
#include<string>
using namespace std;
bool checknt(int s){
    if (s<=1)
        return false;
    bool check = true;
    for (int i=2;i<=s/2;i++){
        if (s%i==0){
            check = false;
            break;
        }
    }
    if (check == false)
        return false;
    return true;
}


int main(){
    int s;
    cin>>s;
    cout<<((checknt(s) == true) ? "YES" : "NO")<<endl;
    return 0;
}