#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    //2490
    string s;
    cin>>s;
    string s1;
    int n1 = 0;
    int ans = 0;

    int A[s.size() + 5] = {};
    for (int i = 0; i<s.size();i++){
        for (int j = i; j<s.size();j++){
            n1 = (n1*10 + (s[j] - '0')) % p;
            if (n1==0)
                ans++;
        }
    }
    cout<<ans<<endl;
}