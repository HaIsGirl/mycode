#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    s[0] = s[0] + 32;
    for (int i=1;i<s.length();i++){
        if (s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
            s.insert(i," ");
            i++;
        };
    }
 
    cout<<s<<endl;
}