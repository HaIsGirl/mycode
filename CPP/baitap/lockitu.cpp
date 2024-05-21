#include<iostream>
#include<string>
using namespace std;
string lockituhoa(string s){
     cout<<"Ki tu hoa trong xau la: ";
     for (int i=0;i<=s.size();i++){
     if (s[i]>='A' && s[i]<='Z'){
          cout<<s[i]<<" ";
     }
   }
}
string lockituthuong(string s){
     cout<<"Ki tu thuong trong xau la: ";
     for (int i=0;i<=s.size();i++){
     if (s[i]>='a' && s[i]<='z'){
          cout<<s[i]<<" ";
     }
   }
}
string lockituso(string s){
     cout<<"Ki tu so trong xau la: ";
     for (int i=0;i<=s.size();i++){
     if (s[i]>='0' && s[i]<='9'){
          cout<<s[i]<<" ";
     }
   }
}
string lockituso(string s){
     cout<<"Ki tu so trong xau la: ";
     for (int i=0;i<=s.size();i++){
     if (s[i]>='0' && s[i]<='9'){
          cout<<s[i]<<" ";
     }
   }
}
int main(){
     string s;
     getline(cin,s);
     lockituhoa(s);
     cout<<endl;
     lockituthuong(s);
     cout<<endl;
     lockituso(s);
     return 0;
}