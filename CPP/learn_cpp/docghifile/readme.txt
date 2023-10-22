//---------------------------------------------ĐỌC FILE TRONG C++------------------------------------------------//

Kiểu 1:

-Sử dụng thư viện <fstream> để đọc, ghi file

- ifstream để đọc file
vd: ifstream f;
- ofstream để ghi file 
vd: ofstream g;
//Xem ví dụ ở kieu1.cpp

Kiểu 2:
- freopen("file.inp","r",stdin) để đọc file
vd: freopen("BAI1.inp","r",stdin);
- freopen("file.out","w",stdout) để ghi file
vd: freopen("BAI1.out","w",stdout);

- Để code có thể chạy nhanh hơn khi dùng cách này hãy sử dụng 
    ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
//Xem ví dụ ở kieu2.cpp
