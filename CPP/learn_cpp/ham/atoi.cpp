#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  /* Chuỗi chứa số nguyên int*/ 
    char str0[] = "123";

  /* Chuỗi chứa số thực có một phần số nguyên*/ 
    char str1[] = "123";
    
    /* Chuỗi chứa cả phần có thể và không thể chuyển sang int*/
    char str2[] = "-123ab";
    
    /* Chuỗi chứa ký tự trắng đầu chuỗi*/
    char str3[] = "    \n\t123ab";
    
    /* Chuỗi không thể chuyển sang số nguyên*/
    char str4[] = "a123b";
    
    int num0 = atoi(str0);
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);

    cout << str0<< " => " << num0 <<endl;
    cout << str1<< " => " << num1 <<endl;
    cout << str2<< " => " << num2 <<endl;
    cout << str3<< " => " << num3 <<endl;
    cout << str4<< " => " << num4 <<endl;

    return 0;
}
