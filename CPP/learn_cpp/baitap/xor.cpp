#include <iostream>
using namespace std;
int main(){
    int a=5,b=9;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
}