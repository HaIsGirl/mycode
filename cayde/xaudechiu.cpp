//https://lqdoj.edu.vn/problem/lovelystr
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(string s){
    vector<char> chr;
    for (char i : s){
        chr.push_back(i);
        int size = chr.size() - 1;
        if(size + 1 >= 3 && chr[size] == chr[size-1] && chr[size-1] == chr[size-2])
            chr.pop_back();
        if(size + 1>=4 && chr[size] == chr[size-1] && chr[size-2] == chr[size-3])
            chr.pop_back();
    }

    for(auto i:chr)
        cout<<i;
}
int main(){
    string s;
    cin>>s;
    solve(s);
}