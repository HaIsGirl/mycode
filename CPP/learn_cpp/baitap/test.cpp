// Chương trình tính tổng của 10 số nguyên đầu tiên

#include <iostream>

int main() {
  // Mảng lưu trữ 10 số nguyên đầu tiên
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Biến lưu trữ tổng của 10 số nguyên đầu tiên
  int sum = 0;

  // Duyệt qua mảng để cộng tất cả các phần tử
  for (int i = 0; i < 10; i++) {
    sum += numbers[i];
  }

  // In ra tổng của 10 số nguyên đầu tiên
  std::cout << "Tổng của 10 số nguyên đầu tiên là: " << sum << std::endl;

  return 0;
}

// Comment giải thích ý nghĩa của từng dòng code

// Mục tiêu của chương trình là tính tổng của 10 số nguyên đầu tiên
// Khai báo mảng numbers để lưu trữ 10 số nguyên đầu tiên
// Khởi tạo mảng numbers bằng 10 số nguyên đầu tiên
// Khai báo biến sum để lưu trữ tổng của 10 số nguyên đầu tiên
// Duyệt qua mảng numbers để cộng tất cả các phần tử
// In ra tổng của 10 số nguyên đầu tiên

