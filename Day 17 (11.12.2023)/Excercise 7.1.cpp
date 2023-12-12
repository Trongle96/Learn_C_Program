#include <iostream>
#include <string>
using namespace std;

class Nsx
{
	string tenNsx;
	string diaChi;
	public:
	
	void nhap()
	{
		cout<<"Nhap ten nha san xuat: "<<endl;
		cin.ignore();
		getline(cin,this -> tenNsx);
		cout<<"Nhap dia chi nha san xuat: "<<endl;
		getline(cin,this -> diaChi);
	}
	
	void xuat()
	{
		cout<<"Ten nha san xuat la: "<<this -> tenNsx<<endl;
		cout<<"Nhap dia chi nha san xuat: "<<this -> diaChi<<endl;
	}
};

class Hang
{
	string tenHang;
	Nsx x;
	int donGia;
	public:
	
	void nhap()
	{
		cout<<"Nhap ten hàng: "<<endl;
		getline(cin,this -> tenHang);
		cout<<"Nhap don gia: "<<endl;
		cin>> this -> donGia;
		this -> x.nhap();
	}
	
	void xuat()
	{
		cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"Ten hang la: "<<this -> tenHang<<endl;
		cout<<"Don gia la: "<<this -> donGia<<endl;
		this -> x.xuat();
	}
};

class Date
{
	int ngay,thang,nam;
	public:
	void nhap()
	{
		cout<<"Nhap ngay thang nam san xuat: "<<endl;
		cin>>ngay>>thang>>nam;
	}
	void xuat()
	{
		cout<<"Ngay thang nam san xuat la: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
	}
	
};

class Tivi : public Hang
{
	int kichThuoc;
	Date y;
	public:
	void nhap()
	{
		Hang :: nhap();
		cout<<"Nhap kich thuoc Ti vi: "<<endl;
		cin>> kichThuoc;
		this -> y.nhap();
	}
	
	void xuat()
	{
		Hang :: xuat();
		cout<<"Kich thuoc Ti vi la: "<<this -> kichThuoc<<endl;
		this -> y.xuat();
   }  
};

int main()
{
	Tivi a;
	a.nhap();
	a.xuat();
	return 0;
}
