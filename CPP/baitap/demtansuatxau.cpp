#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i=0;
    while (i<s.size()){
        char temp = s[i];
        int count = 0;
        int j=i;
        while (j<s.size()){
            if (s[j]==temp){
                s.erase(j,1);
                count++;
            }
            else
                j++;
        }
        cout<<temp<<count<<" ";
    }
    return 0;
}
