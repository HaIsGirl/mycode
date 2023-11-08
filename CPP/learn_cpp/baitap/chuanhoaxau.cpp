#include<iostream>
#include<string>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    string s;
    getline(cin,s);
    while (s[0] == ' '){
        s.erase(0,1);
    }

    while (s[s.size()] == ' ')
        s.erase(s.size(),1);

    while (s.find("  ") != string::npos){
        s.erase(s.find("  "),1);
    }
    loop(i,s.size()){
        if (s[i] >= 'A' && s[i] < 'Z')
            s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    loop(i,s.size()){
        if (s[i] == ' ')
            s[i+1] = toupper(s[i+1]);
    }
    cout<<s<<" "<<s.size();
}