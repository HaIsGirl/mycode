#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s1;
    for(int i=0; i<s.size();i++){
       if (s[i]>='0' && s[i] <= '9'){
        s1 += s[i];
       } 
    }
    for (int i=0;i<s1.size();i++){
        for(int j=i+1; j<s1.size();j++){
            if (s1[i]>s1[j]){
                char temp;
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
    cout<<s1<<endl;
    int A[10] = {},d=0,i=0;
    while (i<s1.size()){
        d=1;
        while (s1[i] == s1[i + 1]){
            d++;
            i++;
        }
        
        int t = (int) s1[i] - 48;
        A[t] = d;
        i++;
    }
    for (int &x : A)
        cout<<x<<" ";
}