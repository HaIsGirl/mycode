#include<iostream>
#include<string> //Khai báo thư viện string

using namespace std;
int main(){

    //Khai báo 1 biến thuộc kiểu string
    std::string strSring  ; 
    //Khởi tạo 1 chuỗi theo nhiều cách
    string strString0(""); //Khởi tạo chuỗi strString rỗng;
    string strString1("Ha Thai");
    string strString2{"Hadeptrai"};
    string strString3 = "Thai Doan Ha";
    //Xuất chuỗi
    cout<<strString0<<endl; //Do strString0 là chuỗi rỗng nên khi in ra sẽ không có gì
    cout<<strString1<<endl;
    cout<<strString2<<endl;
    cout<<strString3<<endl;



    //Nhập chuỗi
    cout<<"Enter your name: ";
    string name;
    getline(cin, name);
    cout<<"Enter your Age: ";
    string age;
    getline(cin, age);
    cout<<"Your name is "<<name<<endl;
    cout<<"Your age is "<<age<<endl;
    //Do dai chuoi

    string len{"xin_chao"};
    cout<<len.size()<<endl;
    cout<<len.length()<<endl;
    
}