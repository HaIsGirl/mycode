#include<iostream>
#include<string>
using namespace std;
//Tao 1 struct nhap ten, tuoi, dia chi, msv cua 1 sinh vien
struct sinhvien
{
    /* data */
    string msv;
    string ten;
    int tuoi;
    string diachi; 
   void nhap(int n){
    for (int i=1;i<=n;i++){
        system("cls");
        cout<<"Nhap thong tin sinh vien thu "<<i<<endl;
        cout<<"-----------------------------"<<endl;
        fflush(stdin);
        cout<<"Nhap ma sinh vien: ";
        getline(cin,msv);
        cout<<"Nhap ten sinh vien: ";
        fflush(stdin); 
        getline(cin,ten);
        cout<<"Nhap tuoi sinh vien: ";
        fflush(stdin);
        cin>>tuoi;
        fflush(stdin);
        cout<<"Nhap dia chi sinh vien: ";
        getline(cin,diachi);
    }
   } 
   void in(){
    cout<<msv<<" "<<ten<<" "<<tuoi<<" "<<diachi<<endl;
   }
};

int main(){
    sinhvien a;
    cout<<"Nhap danh sach sinh vien: ";
    int n;
    cin>>n;
    a.nhap(n);
    return 0;
}