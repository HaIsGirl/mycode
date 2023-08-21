#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char p[1000];
    char temp;
    int l[127],k,m,n,x,y;
    scanf("%d%d",&m,&n);
    fgets(p, sizeof(p),stdin);
    fgets(p, sizeof(p),stdin);
    
    int check=m,check1=26,check2;
    if(m>26) 
    {
        check = 26; check1=m;
    }
    while (check>0)
    {
        check2=check1%check;
        check1=check;
        check=check2;
    } //gcd = check1 
    if(check1!=1)
    {
        printf("Can't Encrypted and Decrypted this Message");
        return 0;
    }
    
     for (int i = 0; i < (int)strlen(p) - 1; i++)
    {   
        x=(int)p[i];
        if (x==32) continue;
        else
        {
        x=x-97;
        x=(m*x+n)%26;
        x = x + 97;
        p[i]=(char)x;
        }
    }
    printf("Encrypted Message is : %s",p);
    // Hàm tìm kiếm số nghịch đảo bằng công thức 
    for (int j = 1; j<26; j++)
    {
        y=(m*j);
        y=y%26;
        if (y==1) 
        {
            y=j;
            break;
        }
        }
    for (int i = 0; i < (int)strlen(p) - 1; i++)
    {   
        x=(int)p[i];
        if (x==32) continue;
        else
        {
        x=x-97;
        x=y*(x-n)%26;
        x = x + 97;
        if (x<97)  x=x + 26;
        p[i]=(char)x;
        }
    }
    printf("Decrypted Message is : %s",p);
}