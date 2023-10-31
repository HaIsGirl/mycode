------------------------------------------------CON TRỎ--------------------------------------------------------------


?Con trỏ là gì
    -Con trỏ là một biến đặc biệt nhằm ám chỉ 1 biến x nào đó thông qua địa chỉ của biến x đó (&x)
        Hay nói cách khác: Con trỏ là 1 biến mà giá trị của nó là địa chỉ của 1 biến x  
?Làm sao để khai báo con trỏ
    Cấu trúc: <kiểu dữ liệu> *<tên biến>
Ví dụ: int *tenbien hoặc int * tenbien

?Cách gán 1 địa chỉ của 1 biến x vào biến con trỏ
    <tên biến con trỏ> = &<biến x>
Ví dụ: 
    int *tenbien;
    tenbien = &x; (Gán địa chỉ của biến x vào biến con trỏ tenbien)
?Ứng dụng như thế nào

Giả sử có 1 bài tình huống: 
Có 3 em Lan, Thảo, Hương và biết Lan chính là 1 cô bồ nhí

Thông thường người chưa học con trỏ sẽ ám chỉ Lan là bồ nhí như sau

                    #include<iostream>
                    using namespace std;
                    struct con_nguoi{
                        int tuoi;
                        int vong_mot;
                        int chieu_cao;
                        con_nguoi(int t,float v1,float cc ){
                            tuoi=t;
                            vong_mot=v1;
                            chieu_cao=cc;
                        }
                    };

                    int main(){
                        con_nguoi thao(22, 23.5,1.70);
                        con_nguoi lan(17, 50, 1.50);
                        con_nguoi huong(20, 34.34,1.80);
                        con_nguoi bo_nhi=thao;
                        
                    }

Có 1 vấn đề là khi ta đổi 1 thông số của Thảo thì thông số của bồ nhí không thay đổi. Lý do là đoạn code trên ta chỉ coppy dữ liệu Tuổi, Chiều Cao, Vòng 1 của Thảo cho Bồ nhí nên theo thực tế Thảo và bồ nhí là hai con người khác nhau

?Khi đó con trỏ sẽ phát huy tác dụng để ám chỉ rằng bồ nhí chính là Thảo
   


 #include<iostream>
    using namespace std;
    struct con_nguoi{
        int tuoi;
        float vong_mot;
        float chieu_cao;
        con_nguoi(int t,float v1,float cc ){
            tuoi=t;
            vong_mot=v1;
            chieu_cao=cc;
        }
    };

    int main(){
        con_nguoi thao(22, 23.5,1.70);
        con_nguoi lan(17, 50, 1.50);
        con_nguoi huong(20, 34.34,1.80);
        con_nguoi *bonhi = nullptr;
        bonhi= &thao;
        thao.tuoi = 23;
        cout<<bonhi -> vong_mot<<endl;
        return 0;
    }
Hiểu đơn giản biến bonhi hiện tại đang lưu địa chỉ của Thảo hay nói cách khác Bồ Nhí và Thảo đang ở chung 1 địa chỉ
Đặc biệt hơn hết khi ta đổi tuổi của Thảo là 23 thì khi in ra tuổi của bồ nhí cũng ra 23 từ đó => Thảo chính là bồ nhí (Nếu ta thay đổi thông số về chiều cao hay vòng 1 của Thảo thì Bồ Nhí cũng sẽ thay đổi theo)