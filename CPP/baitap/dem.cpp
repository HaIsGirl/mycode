#include<iostream>

int main(){
    int dem = 0;
    int B[10];
    for (int i = 1; i<=10; i++){
        B[++dem] = i;
    }
    std::cout<<dem;
}