###### 2. Problem 2 (easy)

```
[English]
Given a positive integer n (n could be very big), you task is determine if that number is a power of 4.

Example:
    + Test case 1:
    For n = 4, the output should be isPowerOfFour(4) = true.
    4 is equal to 4 to the power of 1 so we return true.
---------------------
[VietNames]
Cho số nguyên dương n, nhiệm vụ của bạn là viết hàm xác định xem n có phải là luỹ thừa của 4 hay không.

Ví dụ:
    + Test mẫu 1:
    Với n = 16, đầu ra là isPowerOfFour(16) = true.
    Giải thích: 16 bằng 4^2 nên kết quả của hàm là true.

    + Test mẫu 2:
    Với n = 7, đầu ra là isPowerOfFour(4) = false.
    Giải thích: 7 không phải là lũy thừa của 4.
---------------------
@Nguồn: codelearn.io
```

<details><summary>Solution 1</summary>
<p>

```
Bài toán này chúng ta có thể giải quyết bằng 2 bước:
+ Bước 1: Lấy input chia 4.
        Điều kiện: input chia hết cho 4 và input lớn hơn 1.
+ Bước 2: Kiểm tra, nếu input lúc này đúng giá trị bằng 1 thì trả về true. Ngược lại trả về false.
-------------
Ví dụ:
    input: n = 234
    B1: n = n / 4 = 234 / 4 = 58.5; => không chia hết cho 4 => dừng.
    B2: n không bằng 1 => input không phải là lũy thừa của 4.

    input: n = 1.
    B1: n = 1 => Không lớn hơn 1 => dừng
    B2: n bằng 1 => là lũy thừa của 4. (4^0)

    intput: n = 256;
    B1: n = n / 4 = 256 / 4 = 64 / 4 = 16 / 4 = 4 / 4 = 1 => n = 1 => Không lớn hơn 1 => dừng
    B2: n bằng 1 => là lũy thừa của 4. (4^4)
```

- Giải pháp với [C++](../SourceCode/CPlusPlus/problem2.cpp)

</p>
</details>

---