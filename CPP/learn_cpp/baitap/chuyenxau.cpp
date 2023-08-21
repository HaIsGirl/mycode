#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int hamstoi(string s){
    int num = stoi(s);
    return num;    
}

int sstring(string s){
    string s1 = s[0];
    stringstream str2num(s1);
    int x = 0;
    str2num >> x;
    return x;
}
int main(){
    string s = "123";
    cout<<sstring(s)<<endl;
    return 0;
}
