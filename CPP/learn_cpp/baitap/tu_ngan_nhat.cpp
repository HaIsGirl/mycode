#include<iostream>
#include<string>
#include<vector>
#define loop(i,n) for (int i = 0;i < n;i++)
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector <int> A,B,C;
    int i = 0;
    int d;
    while (i < s.size()){
        d = 0; 
        if (s[i] != ' ')
            A.push_back(i);
        while (s[i] != ' ' && i < s.size()){
            d++;
            i++;
        }
        if (d != 0) B.push_back(i-1);
        C.push_back(d);
        i++;
    }
    int m = C[0];
    int vt = 0;
    loop(i,C.size()){
        if (C[i] < m){
            m = C[i];
            vt = i;
        }
    }
    for (int i = A[vt]; i<= B[vt];i++)
        cout<<s[i];
    cout<<endl;
    return 0;
}