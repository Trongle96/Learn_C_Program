# Learn_C_Program
## C++ OPP  
***
#### * Lớp và đối tượng là hai khía cạnh chính của lập trình hướng đối tượng.
#### * Một lớp là một khuôn mẫu cho các đối tượng và một đối tượng là một thể hiện của một lớp, khi các đối tượng riêng lẻ được tạo, chúng kế thừa tất cả các biến và hàm từ lớp
## C++ Classes/Objects  
***
#### * Ví dụ tạo 1 lớp Class trong C++ như sau:
```
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
## C++ Class Methods 
***
#### * Một ví dụ về phương thức trong C++ như sau:
```
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
```
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
```
Car carObj1 = Car("BMW", "X5", 1999);
Car carObj2 = Car("Ford", "Mustang", 1969);
```
