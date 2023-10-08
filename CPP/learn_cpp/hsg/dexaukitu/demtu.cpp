#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string A[1000];
    int d=0;

    if (s[0] == ' '){
        while (s[0] == ' '){
            s.erase(0,1);
        }
    }
    if (s[s.length()-1] == ' '){
        while (s[s.length()-1] == ' '){
            s.erase(s.size()-1,1);
        }
    }
    while (s.find("  ") != string::npos) {        
        s.erase(s.find("  "),1);
    } 

    for (int i=0;i<s.length();i++){
        if (s[i]!=' '){
            A[d] += s[i];
        }
        else d++;
    }
    for (int i=0;i<=d;i++){
            cout<<A[i]<<endl;
}
}