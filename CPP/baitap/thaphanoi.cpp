#include<iostream>
using namespace std;
void Thap_Ha_Noi(int n, char a, char b, char c){
    if (n == 1)
        cout<<a<<"------>"<<c<<endl;
    else{
        Thap_Ha_Noi(n-1,a,c,b);
        Thap_Ha_Noi(1,a,b,c);
        Thap_Ha_Noi(n-1,b,a,c);
    }
}

int main(){
    int n;
    cin>>n;
    char a='A', b='B', c= 'C';
    Thap_Ha_Noi(n,a,b,c);
}