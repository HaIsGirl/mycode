#include<bits/stdc++.h>
using namespace std;

deque<int> dq;

int main(){
    // Thêm 3, 6 vào cuối deque
    dq.push_back(3);
    dq.push_back(6);
    // Lúc này deque là [3, 6]
    // Thêm 4 vào đầu deque
    dq.push_front(4);
    // Lúc này deque là [4, 3, 6]
    // Thêm 1 vào đầu deque
    dq.push_front(1);
    // Lúc này deque là [1, 4, 3, 6]

    cout << "Kich thuoc cua deque la: " << dq.size() << endl;
    cout << "Phan tu dau tien trong deque la: " << dq.front() << endl;
    cout << "Phan tu cuoi cung trong deque la: " << dq.back() << endl;

    cout << "Xoa bo phan tu cuoi deque" << endl;
    dq.pop_back();
    // Lúc này deque là [1, 4, 3]

    cout << "Kich thuoc cua deque la: " << dq.size() << endl;
    cout << "Phan tu dau tien trong deque la: " << dq.front() << endl;
    cout << "Phan tu cuoi cung trong deque la: " << dq.back() << endl;

    cout << "Xoa bo phan tu dau deque" << endl;
    dq.pop_front();
    // Lúc này deque là [4, 3]

    cout << "Kich thuoc cua deque la: " << dq.size() << endl;
    cout << "Phan tu dau tien trong deque la: " << dq.front() << endl;
    cout << "Phan tu cuoi cung trong deque la: " << dq.back() << endl;
}