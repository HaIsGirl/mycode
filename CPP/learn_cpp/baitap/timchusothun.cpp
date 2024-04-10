#include<iostream>
#include<string>
using namespace std;

char chanle(int a, int b){
//    cout.rdbuf()->pubsetbuf(0, 0);
    string s = "", s1 = "";
    int i = a;
    while (s.size() <= b){
        s1 = to_string(i);
        s += s1;
        i+=2;
    }
    return s[b - 1];
}


int main(){
   string s = "" ;
   int a,n;
   cin>>a>>n;
   cout<<chanle(a,n)<<endl;
   return 0; 
}