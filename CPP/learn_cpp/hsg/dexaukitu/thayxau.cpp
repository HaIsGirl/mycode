#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    int i=0;
    while (i<s3.size()){
        if (s3.substr(i,s1.size()) == s1){
            s3.erase(i,s1.size());
            s3.insert(i,s2);
        }
        i++;
    }
    cout<<s3<<endl;
}