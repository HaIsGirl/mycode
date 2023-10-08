#include<iostream>
#include<string>
using namespace std;

int main(){
    char str;
    cin>>str;
    cin.ignore();
    string s;
    int d=0;
    int A[100],count=0;
    getline(cin,s);
    int n=s.size();
    for (int i=0;i<n;i++){
        if (s[i]==str){
            count++;
            A[d] = i;
            d++;
        }
    }
    cout<<count<<endl;
    for (int i=0;i<d;i++){
        cout<<A[i]<<" ";
    }  
}