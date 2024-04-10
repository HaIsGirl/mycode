//https://lqdoj.edu.vn/problem/adventureseries1
#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;

map<char, int> AB;
void chuyengu(){
    AB['A'] = 152;
    AB['B'] = 28;
    AB['C'] = 316;
    AB['D'] = 43;
    AB['E'] = 57;
    AB['F'] = 66;
    AB['G'] = 778;
    AB['H'] = 86;
    AB['I'] = 95;
    AB['J'] = 10647;
    AB['K'] = 346;
    AB['L'] = 34609;
    AB['M'] = 21;
    AB['N'] = 312;
    AB['O'] = 12503;
    AB['P'] = 25;
    AB['Q'] = 260;
    AB['R'] = 46246;
    AB['S'] = 12;
    AB['T'] = 105;
    AB['U'] = 69;
    AB['V'] = 420;
    AB['W'] = 10526;
    AB['X'] = 20;
    AB['Y'] = 15321;
    AB['Z'] = 155;
}
int tongso(int n){
    int sum = 0;
    while (n>0){
        sum += n%10;
        n = n / 10;
    }
    return sum;
}

string InHoa(string s){
    for (int i = 0; i<s.size();i++){
        if (s[i] >= 'a'&& s[i] <= 'z')
            s[i] = toupper(s[i]);
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin, s);
    s = InHoa(s);
    chuyengu();
    int sum;
    string all = "";
    stringstream ss;
    for (int i = 0; i<s.size(); i++){
        sum += tongso(AB[s[i]]);
        ss << AB[s[i]];
    }
    while (sum >= 10){
        sum = tongso(sum);
    }
    all = ss.str();
    for (int i = 0; i<sum;i++)
        cout<<all[i];
    
}