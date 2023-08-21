#include<iostream> //Thư viện chuẩn của C++
#include<fstream> //Thư viện <fstream> để đọc, ghi file 
using namespace std; 
int main(){
    ifstream f; //biến f thuộc kiểu ifstream
    ofstream g; //biến g thuộc kiểu outstream
    f.open("D://code//CPP//learn_cpp//docghifile//tong.inp"); //f mở file tong.inp
    g.open("D://code//CPP//learn_cpp//docghifile//tong.out"); //g mở file tong.out
    int n,m;
    f>>n>>m; //Đọc giá trị trong file f cho n và m
    g<<"tong n va m la: "<<n+m<<endl; //ghi giá trị tổng n và m vô file g

    f.close(); //Đóng file f
    g.close(); //Đóng file g
}