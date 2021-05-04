###### Problem 1 (easy)

```
Bạn được cho trước một số tự nhiên n, bạn có quyền tráo đổi các chữ số của số n.
- Số k được tạo thành bằng cách tráo các chữ số trong số n để thành số lớn nhất có thể.
- Số h được tạo thành bằng cách tráo các chữ số trong số n để thành số nhỏ nhất có thể.
=> Hãy đưa ra giá trị của k - h.

Ví dụ:
  + Test mẫu 1:
  
    |  input  |  output  |
    ----------------------
    |   312   |    198   |
    
    Giải thích: Số k được tạo thành là 321, số h được tạo thành là 123. k - h = 321 - 123 = 198.
    
  + Test mẫu 2:
  
    |  input  |  output  |
    ----------------------
    |   100   |    99    |
    
    Giải thích: Số k được tạo thành là 100, số h được tạo thành là 1. k - h = 100 - 1 = 99.
---------------------
@Nguồn: codelearn.io
```

<details><summary>Solution 1</summary>
<p>

```
Bài toán này chúng ta có thể giải quyết bằng 3 bước:
+ Bước 1: Tìm số lớn nhất mà các chữ số của input tạo thành. VD: 312 => 321
+ Bước 2: Tìm số nhỏ nhất mà các chữ số của input tạo thành. VD: 312 => 123
+ Bước 3: Trả về kết quả: max (Bước 1) - min (Bước 2). VD: 321 - 123 = 98.
-------------
=> Để tìm được số lớn nhất, hay nhỏ nhất mà các chữ số của input tạo thành, 
đơn giản ta chỉ việc sắp xếp các chữ số của input (lớn nhất (sắp xếp giảm dần), nhỏ nhất (sắp xếp tắng dần).
```

- Giải pháp với [C](../SourceCode/C/problem1.c)

</p>
</details>

---
