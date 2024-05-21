#include<bits/stdc++.h>
using namespace std;
const long long Nmax = int(1e12);

int main(){
    string s;
    cin>>s;
    int l;
    cin>>l;
    int r;
    cin>>r;
    for(int i = 0; i<s.size(); i++){
        if (s[i] >= '1' && s[i]<='9'){
           char s1 = s[i];
           int num = s[i] - 48;
           A[num] = s[i+1];
        }
    }

    
}