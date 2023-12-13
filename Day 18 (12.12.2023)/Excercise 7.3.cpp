#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Truong
{
	int maTruong;
	string tenTruong;
	string diaChi;
	
	public:
	
	void nhap()
	{
		cout<<"Nhap ten truong: "<<endl;
		getline(cin,this -> tenTruong);
		cout<<"Nhap dia chi truong: "<<endl;
		getline(cin,this -> diaChi);
		cout<<"Nhap ma truong: "<<endl;
		cin>>maTruong;
	}
	
	void xuat()
	{
		cout<<"======================================="<<endl;
		cout<<"Ten truong la: "<<this -> tenTruong<<endl;
		cout<<"Dia chi truong la: "<<this -> diaChi<<endl;
		cout<<"Nhap ma truong: "<<this -> maTruong<<endl;
	}
	
	
	
};

class Khoa
{
	public:
	
	int maKhoa;
	string tenKhoa;
	string truongKhoa;
};

class Ban
{
	public:
	
	int maBan;
	string tenBan;
	string ngayThanhLap;
};

class TruongDH : public Truong
{
	vector <Khoa> x;
	vector <Ban> y;
	int n;
	int m;
	public:
	
	void nhap()
	{
	Khoa a;
	Ban b;
	Truong :: nhap();
	cout<<"Nhap so luong khoa cua truong: "<<endl;
	cin>> this -> n;
	cout<<"Nhap so luong ban cua truong: "<<endl;
	cin>> this -> m;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap thong tin khoa thu "<<i+1<<" la:"<<endl;
		cout<<"Nhap ma khoa la: "<<endl;
		cin>>a.maKhoa;
		cout<<"Nhap ten khoa la: "<<endl;
		cin.ignore();
		getline(cin,a.tenKhoa);
		cout<<"Nhap ten truong khoa la: "<<endl;
		getline(cin,a.truongKhoa);	
		this -> x.push_back(a);
	}
	for(int i = 0; i < m; i++)
	{
		cout<<"Nhap thong tin ban thu "<<i+1<<" la:"<<endl;
		cout<<"Nhap ma ban la: "<<endl;
		cin>>b.maBan;
		cout<<"Nhap ten ban la: "<<endl;
		cin.ignore();
		getline(cin,b.tenBan);
		cout<<"Nhap ngay thanh lap ban la: "<<endl;
		getline(cin,b.ngayThanhLap);	
		this -> y.push_back(b);
	}	
	}
	
	void xuat()
	{
	Truong :: xuat();
	for(int i = 0; i < n; i++)
	{	
		cout<<"Thong tin khoa thu: "<<i+1<<" la: "<<endl;
		cout<<"Ma khoa la: "<<x[i].maKhoa<<endl;
		cout<<"Ten khoa la: "<<x[i].tenKhoa<<endl; 
		cout<<"Ten truong khoa la: "<<x[i].truongKhoa<<endl; 
	}
	for(int i = 0; i < m; i++)
	{
		cout<<"Thong tin ban thu: "<<i+1<<" la: "<<endl;
		cout<<"Ma ban la: "<<y[i].maBan<<endl;
		cout<<"Ten ban la: "<<y[i].tenBan<<endl; 
		cout<<"Ngay thanh lap ban la: "<<y[i].ngayThanhLap<<endl; 
	}	
	}
	
};

int main()
{
	TruongDH y;
	y.nhap();
	y.xuat();
	return 0;	
}



