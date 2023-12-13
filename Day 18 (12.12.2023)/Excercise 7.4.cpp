#include <iostream>
#include <string>
using namespace std;

class Hang
{
	string tenHang;
	double donGia;
	int soLuong;
	
	public:
	void nhap()
	{
		cout<<"Nhap ten hang la: "<<endl;
		cin.ignore();
		getline(cin,this -> tenHang);
		cout<<"Nhap don gia: "<<endl;
		cin>>donGia;
		cout<<"Nhap so luong: "<<endl;
		cin>>soLuong;
	}
	void xuat()
	{
		cout<<"|   "<<this ->tenHang<<"                 "<<this->donGia<<"                "<<this ->soLuong<<"                      "<<this -> donGia * this -> soLuong<<"         |"<<endl;
	}
	double thanhTien()
	{
		return 	this -> soLuong * this -> donGia;
	}
};

class Phieu
{
	string maPhieu;
	string date;
	Hang x[100];
	int n;
	
	public:
	void nhap()
	{
		cout<<"Nhap ma phieu mua hang: "<<endl;
		getline(cin,maPhieu);
		cout<<"Nhap ngay mua hang: "<<endl;
		getline(cin,date);
		cout<<"Nhap so luong mat hang: "<<endl;
		cin>>n;
		for (int i = 0; i < this -> n; i++)
		{
			x[i].nhap();
		}
	}

	
	void xuat()
	{
		double sumTT = 0;
		cout<<"=============================================================================="<<endl;
		cout<<"|                               PHIEU MUA HANG                               |"<<endl;
		cout<<"| Ma phieu:"<<this->maPhieu<<"                                   "<<"Ngay lap: "<<this->date<<"       |"<<endl;
		cout<<"| Ten hang       	Don gia     	So luong        	Thanh tien   |"<<endl;
		cout<<"|____________________________________________________________________________|"<<endl;
		for (int i = 0; i < this -> n; i++)
		{
		x[i].xuat();
		sumTT+= x[i].thanhTien();
		}
		cout<<"| 					               Cong thanh tien: "<<sumTT<<  "|"<<endl;
		cout<<"|============================================================================|"<<endl;
	}	

};

int main()
{
	Phieu a;
	a.nhap();
	a.xuat();
	return 0;
}
