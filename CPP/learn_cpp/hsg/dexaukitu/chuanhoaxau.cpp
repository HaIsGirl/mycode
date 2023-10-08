#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
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
    for (int i=0;i<s.size();i++){
        if (isupper(s[i]))
        s[i] = tolower(s[i]);
    }
     s[0] = toupper(s[0]); 
     for (int i=0;i<s.size();i++){
         if (s[i]==' '){
            s[i+1] = toupper(s[i+1]);
         }
    }
    cout<<s<<endl;
    return 0;
}