#include<string>
#include<iostream>
using namespace std;
int main(){
    string s;
    string s1 = "8764";
    for (int i = 1; i<=4; i++){
        s+= to_string(i);
    }

    s[0] = s1[0];
    cout<<s<<endl;
}