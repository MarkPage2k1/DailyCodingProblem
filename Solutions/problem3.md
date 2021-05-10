###### 3. Problem 3 (easy)

```
[English]
Consecutive numbers come when two adjacent digits are 1 unit apart and the following number
is larger than the previous number (one-digit number can be accepted).
Example: 1, 1234, 2345 ....... Wrong cases are: 012, 8910, 890. Give 2 positive integers l, r.
Find types of consecutive numbers sorted in ascending order in consequence [l, r].

Example:
    + Test case 1:
    For l = 100, r = 300. The output should be sequenceNumber(l, r) = [123, 234].
    
    + Test case 2:
    For l = 1, r = 100. The output should be sequenceNumber(l, r) = [1, 2, 3, 4, 5, 6, 
    7, 8, 9, 12, 23, 34, 45, 56, 67, 78, 89].
---------------------
[VietNames]
Một chữ số gọi là liên tiếp nếu như hai chữ số liền kề cách nhau 1 đơn vị và số sau lớn hơn 
số trước đó(có thể chấp nhận số có một chữ số).
Ví dụ: 1, 1234, 2345......, trường hợp sai: 012, 8910, 890. Cho 2 số nguyên dương l, r. Hãy tìm 
các loại số liên tiếp được sắp xếp theo thứ tự tăng dần trong đoạn [l, r].

Ví dụ:
    + Test mẫu 1:
    Với l = 100, r = 300. Đầu ra sequenceNumber(l, r) = [123, 234].

    + Test mẫu 2:
    Với l = 1, r = 100. Đầu ra sequenceNumber(l, r) = [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 
    34, 45, 56, 67, 78, 89].
---------------------
@Nguồn: codelearn.io
```

<details><summary>Solution 1</summary>
<p>

```
Bài toán này chúng ta có thể giải quyết bằng nhiều hướng khác nhau, ở đây mình sẽ sử dụng 
phương pháp sinh (Generation) kết hợp với hàng đợi (Queue).
+ Bước 1: Khởi tạo giá trị cho Queue. [1, 2, 3, 4, 5, 6, 7, 8, 9]
+ Bước 2: Tạo hàm sinh (Điều kiện: queue khác rỗng)
    + B1: Lấy 1 phần tử trong queue ra, kiểm tra nếu phần tử này lớn hơn left và nhỏ hơn right 
    thì thêm vào mảng kết quả.
    + B1.1: Sinh => kiểm tra phần tử vừa được lấy ra ở trên xem có nhỏ hơn right và chữ số 
    hàng đơn vị của phần tử đó có khác 9 hay không?
        => Nếu có => Sinh = phần tử * 10 + chữ số hàng đơn vị của phần tử + 1;
        => Add Sinh vào hàng đợi.
        (Nên xem Code và ví dụ bên dưới để rõ hơn! @_@)
    + B2: Sinh => kiểm tra phần tử vừa được lấy ra ở trên xem có nhỏ hơn left và chữ số hàng 
    đơn vị của phần tử đó có khác 9 hay không?
        => Nếu có => Sinh = phần tử * 10 + chữ số hàng đơn vị của phần tử + 1;
        => Add Sinh vào hàng đợi.
    + B3: Xóa phần tử được lấy từ hàng đợi ban đầu đó khỏi hàng đợi.
+ Bước 3: Trả về mảng kết quả thu được.
-------------
Ví dụ:
    input: l = 100, r = 300.
    Bước 1: Queue = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    Bước 2: 
        vì Queue khác rỗng =>
        Phần tử được lấy ra là 1  (Theo qui tắc first in first out của queue)
        B1: không thỏa => bỏ qua
        B2: Thỏa => Sinh = 1 * 10 + 1 + 1 = 12 => add vào queue
        Queue = [1, 2, 3, 4, 5, 6, 7, 8, 9, 12]
        B3: Queue = [2, 3, 4, 5, 6, 7, 8, 9, 12]
    (Lặp ...) => Queue = [123, 234, 345, 456, 567, 789]
        Phần tử được lấy ra 123
        B1: Thỏa => kết quả [123]
        B1.1: Thỏa => Queue = [123, 234, 345, 456, 567, 789, 1234]
    (Lặp ...) => Queue = []; 
    Bước 3: Kết quả [123, 234]
```

- Giải pháp với [C++](../SourceCode/CPlusPlus/problem3.cpp)

</p>
</details>

---