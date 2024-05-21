#include<windows.h>
#include<iostream>
#define UTF_8
using namespace std;
int main(){
   SetConsoleOutputCP(65001);
   cout<<"Xin chào"<<endl;
   return 0; 
}
