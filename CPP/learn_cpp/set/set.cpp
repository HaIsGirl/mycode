#include<iostream>
#include<set>
using namespace std;
struct cmp{
    bool operator() (int a, int b) const {return a>b;}
};

int main(){
    set<int/*,cmp*/> set; //cmp được dùng khi muốn đảo chiều sắp xếp của set
    
    set.insert(6); //Them phan tu
    set.insert(2);
    set.insert(3); 
    cout<<set.size()<<endl;
    if(set.empty())
        cout<<"Set is empty";
    std::set<int>::iterator it; //Khai bao iterator de duyet bien set
    //Duyet bang iterator
    for(it = set.begin(); it != set.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //Duyet bang auto
    for(auto it : set)
        cout<<it<<" ";
    cout<<endl;
    int x = 6;
    it  = set.find(x);
    std::cout<<*it<<endl; //Neu tim duoc thi tro den x, nguoc lai tro den set.end()
    x = 4;
    it = set.find(3);
    if (it != set.end())
        cout<<*it<<endl;
    else
        cout<<"khong co phan tu nay"<<endl;
    set.clear(); //Xoa moi phan tu trong set
}