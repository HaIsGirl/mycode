#include<iostream>
using namespace std;
struct value{
    int sum;
    int d;
};
value tongcacsochan(int n){
    int sum;
    int d = 0;
    value A;
    while (n > 0){
        if ((n % 10) % 2  == 0 )
            sum += n % 10;
        n = n / 10;
       d++; 
    }
    A.d = d;
    A.sum = sum;
    return A;
}
int main(){
   int n;
   cin>>n;
   value A = tongcacsochan(n);
   cout<<A.sum<<endl;
   cout<<A.d<<endl;
   return 0;
}