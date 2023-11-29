def chia_tien_thuong(a):
  """
  Hàm chia tiền thưởng

  Args:
    a: Dãy các tờ tiền

  Returns:
    Tổng số tiền lớn nhất mà mỗi người nhận được
  """

  # Bước 1: Sắp xếp các tờ tiền theo thứ tự giảm dần
  a.sort(reverse=True)

  # Bước 2: Tìm ra hai số liền nhau trong dãy sắp xếp có tổng lớn nhất
  max_sum = 0
  for i in range(len(a) - 1):
    if a[i] + a[i + 1] > max_sum:
      max_sum = a[i] + a[i + 1]

  return max_sum / 2


a = [1, 2, 4, 5, 2]
print(chia_tien_thuong(a))