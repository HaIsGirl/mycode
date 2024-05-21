#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int inhoa = 0;
    int thuong = 0;
    int so = 0;
    int kitudacbiet = 0;
    if (s.size() >= 6){
        for (int i=0;i<s.size();i++){
            if (s[i] >= 'A' && s[i]<='Z')
                inhoa++;
            else if (s[i] >= 'a' && s[i]<='z') 
                thuong++;
            else if (s[i] >= '0' && s[i]<='9')
                so++;
            else 
                kitudacbiet++;
        }
    }
    if (inhoa > 0 && thuong > 0 && so > 0 && kitudacbiet > 0)
        cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;
    return 0;
}