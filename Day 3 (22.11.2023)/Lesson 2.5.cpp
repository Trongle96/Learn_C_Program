// Xuat ra man hinh da thuc theo dang a*x^2+b*x+c.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a1,b1,c1,a2,b2,c2,a3,b3,c3,delta;
	double x1,x2;
	cout << "Nhap a1 = ";
	cin >> a1;
	cout << "\nNhap b1 = ";
	cin >> b1;
	cout << "\nNhap c1 = ";
	cin >> c1;
	cout << "\nNhap a2 = ";
	cin >> a2;
	cout << "\nNhap b2 = ";
	cin >> b2;
	cout << "\nNhap c2 = ";
	cin >> c2;
	cout << "\n";
	cout << "Da thuc 1 la: "<<a1 << "*x^2+" << b1 <<"*x+" <<c1;
	cout << "\n";
	cout << "Da thuc 2 la: "<<a2 << "*x^2+" << b2 <<"*x+" <<c2;
	cout << "\n";
	a3 = a1 - a2;
	b3 = b1 - b2;
	c3 = c1 - c2;
	cout << "Hieu hai da thuc la: " <<a3 << "*x^2+" << b3 <<"*x+" <<c3;
	return 0;
}


