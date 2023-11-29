// Xuat ra man hinh da thuc theo dang a*x^2+b*x+c.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,delta;
	double x1,x2;
	cout << "Nhap a = ";
	cin >> a;
	cout << "\nNhap b = ";
	cin >> b;
	cout << "\nNhap c = ";
	cin >> c;
	//cout << a << "*x^2+" <<b <<"*x+" <<c;
	delta = b*b - 4*a*c;
	if (delta == 0){
	x1 = -b / 2*a;	
	cout << "Phuong trinh co 1 nghiem kep x1 = x2 =" << x1;	
	}
	else if ( delta > 0){
	x1 = ((-b+sqrt(delta))/2*a);
	x2 = ((-b-sqrt(delta))/2*a);	
	cout << "Phuong trinh co 2 nghiem x1 =" << x1 <<"\t;" << "x2 ="<< x2;
	}
	else {
	cout << "Phuong trinh vo nghiem";
	}
	return 0;
		
}


