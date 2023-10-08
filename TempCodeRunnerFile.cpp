#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    string s, s1="abC", s2, ss;
    s = toupper(s1[0]);
    cout << s <<" co ma ky tu: " << toupper(s1[0]) << '\n';
    s = tolower(s1[0]);
    cout << s <<" co ma ky tu: " << tolower(s1[0]) << '\n';
    s2 = toupper(s1[1]);
    cout << s2 <<" la ky tu HOA: " << s1[1] << '\n';
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout << "Xau HOA: " << s1 << '\n';
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    cout << "Xau thuong: " << s1 << '\n';
    reverse(s1.begin(),s1.end());
    cout << "Xau dao nguoc: " << s1 << '\n';
    return 0;
}