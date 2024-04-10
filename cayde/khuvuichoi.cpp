#include<iostream>
using namespace std;
int main(){
    int bd, kt;
    cin>>bd>>kt;
    if (bd > kt){
        return 0;
    }
    int rs = 0;
    if (kt <= 12){
        rs = kt - bd;
        if (rs < 4){
            rs = 4 * 6 + (rs - 4) * 3;
        }
     }
}
