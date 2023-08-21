#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    if (s[0] == ' '){ //Xoa khoang trang dau
        while (s[0] == ' '){ 
            s.erase(0,1);
        }
    }


    if (s[s.size()-1] == ' '){ //Xoa khoang trang cuoi
        if (s[s.size()-1] == ' '){
        while (s[s.size()-1] == ' '){
            s.erase(s.size()-1,1);
        }    
    }
}


    while (s.find("  ") != string::npos) { //Xoa khoang trang o giua
        s.erase(s.find("  "),1);
    }
    cout<<s<<s.size()<<endl;
}