# Learn_C_Program
## C++ OPP  
***
#### * Lớp và đối tượng là hai khía cạnh chính của lập trình hướng đối tượng.
#### * Một lớp là một khuôn mẫu cho các đối tượng và một đối tượng là một thể hiện của một lớp, khi các đối tượng riêng lẻ được tạo, chúng kế thừa tất cả các biến và hàm từ lớp
## C++ Classes/Objects  
***
#### * Ví dụ tạo 1 lớp Class trong C++ như sau:
```C++
 class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
```
#### * MyClass là tên của lớp khởi tạo (Lưu ý viết hoa chữ cái đầu tiên).
#### * Từ khóa "public:" là access specifier (công cụ xác định truy cập) những thuộc tính và phương thức trong public sẽ được truy cập từ các thành viên của lớp, ngược lại vs public là "private:" thì các thành viên của lớp sẽ không thể truy cập các thuộc tính khai báo trong private.
#### * Nếu khi khởi tạo 1 class mà ko chỉ định cụ thể access specifier là public hay private thì các thuộc tính và phương thức trong lớp mặc định là private.
#### * Biến int myNum và biến string myString là thành viên của lớp và cụ thể là thuộc tính của lớp.
#### * Khai báo 1 đối tượng thuộc lớp MyClass bằng cách [Tên lớp][tên đối tượng].; và truy cập các thành viên của lớp bằng cách [tên đối tượng].[tên thành viên].
#### * Một Class trong C++ thực chất là 1 kiểu dữ liệu do người dùng định nghĩa với trong đó là các thuộc tính và phương thức. Việc khai báo 1 class thực chất sẽ ko cấp phát bất kỳ bộ nhớ nào mà chỉ đang định nghĩa class đó là như thế nào. Lưu ý khi đặt tên cho 1 class thì chữ cái đầu tiên phải in hoa.
## C++ Class Methods 
***
#### * Một ví dụ về phương thức trong C++ như sau:
```C++
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
```
#### * Phương thức là thành viên của lớp và cụ thể chính là 1 hàm được khai báo trong lớp, trong ví dụ là hàm myMethod.
#### * Tương tự như cách truy cập thuộc tính thì truy cập phương thức của lớp bằng cú pháp : [tên đối tượng].[tên phương thức];
#### * Ví dụ trên hàm myMethod đang được định nghĩa trong lớp còn 1 cách khác để định nghĩa hàm meMethod đó là khai báo trong lớp nhưng định nghĩa ngoài lớp bằng cú pháp: `void MyClass::myMethod()` sử dụng tên lớp và toán tử tham chiếu "::" đến tên phương thức đã được khai báo trong lớp.\
## C++ Constructor
***
#### * Là hàm tạo trong C++ là 1 phương thức đặc biệt luôn được gọi tự động mỗi khi 1 đối tượng của lớp được tạo. Thường được dùng để khởi tạo giá trị cho các đối tượng của class 
```C++
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
```
#### * Đối tượng carobj1 và carobj2 được khởi tạo bằng hàm tạo constructor với các tham số là từng thuộc tính trong lớp. Ngoài ra còn có thể khởi tạo giá trị như sau:
```C++
Car carObj1 = Car("BMW", "X5", 1999);
Car carObj2 = Car("Ford", "Mustang", 1969);
```
## C++ Access Specifier
***
#### * Trong C++ có 3 bộ xác định truy cập:
     - Public: Các thành viên trong lớp có thể được truy cập từ ngoài lớp.
     - Private: Các thành viên trong lớp không thể được truy cập từ ngoài lớp
     - Protected: Các thành viên trong lớp không thể được truy cập từ bên ngoài lớp, nhưng có thể được truy cập từ lớp kế thừa.
## C++ Encapsulation (Tính đóng gói) 
***     
#### * Tính đóng gói là khả năng bảo mật dữ liệu "nhạy cảm" không được truy cập và để làm được thì phải khai báo các thành viên của lớp dưới dạng private.
#### * Khi muốn đọc và sửa đổi giá trị của thành viên được set private thì ta có thể dùng phương thức **get** và **set** công khai như sau:
```C++
#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
```
#### * Trong đoạn code trên thì ta đã dùng hai bước, bước đầu là dùng phương thức set (hàm setSalary hàm để gán giá trị cho thuộc tính salary (đang ở private)) sau đó là phương thức get (hàm getSalary để return giá trị của thuộc tính salary mà ta đã set ở bước trên).

 ## C++ Inheritance (tính kế thừa)
#### * Có thể kế thừa các thuộc tính và phương thức từ lớp này sang lớp khác đó chính là tính kế thừa trong C++. 
##### * Lớp dẫn xuất (Lớp con) : Lớp kế thừa từ lớp khác.
##### * Lớp cơ sở (Lớp cha): Lớp được kế thừa từ.
#### * Để lớp con kế thừa từ lớp cha , thực hiện bằng [lớp con] : [lớp cha].

 
