#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
	int id;
	string manufacturer;
	int year;
	int price;
	string color;
	
	public:
		
	void input()
	{
		cout<<"<<Nhap thong tin phuong tien>>"<<endl;
		cout<<"Nhap ID: "<<endl;
		cin>>this -> id;
		cout<<"Nhap hang san xuat: "<<endl;
		cin.ignore();
		cin>>this -> manufacturer;
		cout<<"Nhap nam san xuat: "<<endl;
		cin>>this -> year;
		cout<<"Nhap gia ban: "<<endl;
		cin>>this -> price;
		cout<<"Nhap mau xe: "<<endl;
		cin>>this -> color;		
	}
	
	void output()
	{
		cout<<"ID la: "<<this -> id<<endl;
		cout<<"Nhap hang san xuat: "<<this -> manufacturer<<endl;
		cout<<"Nhap nam san xuat: "<<this -> year<<endl;
		cout<<"Nhap gia ban: "<<this -> price<<endl;
		cout<<"Nhap mau xe: "<<this -> color<<endl;
	}
}
