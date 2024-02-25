#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int n;
   cin>>n;
   int s = 0;
   int gt = 1;
   for (int i = 1; i<=min(n,20240130);i++){
        gt = (gt*i) % 20240130;
        s = (s+gt) % 20240130;
   }    
   cout<<s<<endl;

   return 0;
}