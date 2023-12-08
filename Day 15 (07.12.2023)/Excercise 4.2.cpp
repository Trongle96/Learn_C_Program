//Van dung kien thuc lop friend Hang de lay dc thong tin private cung nhu cac phuong thuc ham tao cua class Nsx de class Hang co the show thong tin Nsx.
#include <iostream>
#include<string>
using namespace std;

class Hang;

class Nsx
{
	private:
	int maNSX;
	string tenNSX;
	string dcNSX;
	public:
	Nsx()	{}	
	Nsx(int a, string b, string c) : maNSX(a) , tenNSX(b) , dcNSX (c) {	}
	
	friend class Hang;
};

class Hang
{	
	private:
		
	int maHang;
	string tenHang;
	int donGia;
	int trongLuong;
	
		
	public: 
	
	Nsx nhap()
	{
		int a;
		string b;
		string c;
		Nsx d;
		cout<<"Nhap thong tin mat hang: "<<endl;
		cout<<"Nhap ma hang: "<<endl;
		cin>>this -> maHang;
		cout<<"Nhap ten hang: "<<endl;
		cin.ignore();
		getline(cin,this -> tenHang);
		cout<<"Nhap don gia: "<<endl;
		cin>> this -> donGia;
		cout<<"Nhap trong luong: "<<endl;
		cin>> this -> trongLuong;	
		cout<<"Nhap ma nha san xuat: "<<endl;
		cin>>a;
		cout<<"Nhap ten nha san xuat: "<<endl;
		cin.ignore();
		getline(cin,b);
		cout<<"Nhap dia chi nha san xuat: "<<endl;
		cin.ignore();
		getline(cin, c);
		d = Nsx(a,b,c);
		return d;
	}
	
	void xuat( Nsx a)
	{
		cout<<"=============================="<<endl;
		cout<<"Ma hang la: "<<this -> maHang<<endl;
		cout<<"Ten hang la: "<<this -> tenHang<<endl;
		cout<<"Don gia la: "<< this -> donGia<<endl;
		cout<<"Trong luong la: "<<this -> trongLuong<<endl;
		cout<<"Ma nha san xuat la: "<<a.maNSX<<endl;
		cout<<"Ten nha san xuat la: "<<a.tenNSX<<endl;
		cout<<"Dia chi nha san xuat la: "<<a.dcNSX<<endl;		
	}
	
};

int main()
{
	Hang a;
	Nsx b;
	b = a.nhap();
	a.xuat(b);
	
return 0;	
}

