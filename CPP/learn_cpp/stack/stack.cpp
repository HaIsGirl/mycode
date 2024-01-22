#include<stack> 
#include<iostream>
using namespace std;
const int MaxN = 1 +1e6;
int n,A[MaxN];
stack <int> st;
int main(){
    cin>>n; //Nhập gá trị cho n
    for (int i =0; i<n;i++){
        cin >> A[i]; // Nhap gia tri mang A
    }
    for (int i = 0; i< n;i++){
        while (!st.empty() && A[st.top()] < A[i]) { //Trong khi st khác rỗng và A[st.top()] bé hơn A[i] thì 
            st.pop(); //Xóa phần tử st cuối cùng
        }
        if (!st.empty()) // Nếu stack khác rỗng
            cout<< st.top() + 1 << " "; //In vị trí phần tử st cuối cùng
        else cout<<-1<<" ";  //Ngược lại in ra -1
            st.push(i); //Thêm vị trí i vào stack
    }
    return 0;
}