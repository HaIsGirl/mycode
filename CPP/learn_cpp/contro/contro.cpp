#include<iostream>
#include<string>
struct con_nguoi{
    std::string ho_va_ten;
    int tuoi;
    float vong_mot;
    float chieu_cao;
    bool con_zin=true;
    con_nguoi(std::string hvt,int t,float v1,float cc ){
        ho_va_ten=hvt;
        tuoi=t;
        vong_mot=v1;
        chieu_cao=cc;
}
    
};
void pha_zin(con_nguoi *nguoi){
       std::cout<<"Thuc hien pha zin em "<< (*nguoi).ho_va_ten << std::endl;
       (*nguoi).con_zin=false;
    }
int main()
{
    con_nguoi hoi_phu_nu[5]
    {
    con_nguoi ("thao",22, 23.5,1.70),
    con_nguoi ("lan",17, 50, 1.50),
    con_nguoi ("Huong",20, 34.34,1.80),
    con_nguoi ("Nhung",20, 100,1.50),
    con_nguoi ("Huong",15,234,1.80)
    };
    con_nguoi *bonhi = nullptr;
   std::cout<<"truoc khi pha zin, em "<< hoi_phu_nu[3].ho_va_ten << " "<< (hoi_phu_nu[3].con_zin ? "con zin" : "mat zin")<<std::endl;
   pha_zin(&hoi_phu_nu[3]);
   std::cout<<"sau khi pha zin, em "<< hoi_phu_nu[3].ho_va_ten << " "<< (hoi_phu_nu[3].con_zin ? "con zin" : "mat zin")<<std::endl;
    return 0;
}