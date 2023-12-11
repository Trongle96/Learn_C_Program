#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
	string nhanHieu;
	int namSx;
	string hang;
	
	public:
	
	void nhap()
	{
		cout<<"Nhap nhan hieu cua xe: "<<endl;
		cin.ignore();
		getline(cin,this -> nhanHieu);
		cout<<"Nhap nam san xuat xe: "<<endl;
		cin>>namSx;
		cout<<"Nhap hang xe: "<<endl;
		cin.ignore();
		getline(cin,this -> hang);
	}
	
	void xuat()
	{
		cout<<"-----------------------------------"<<endl;
		cout<<"Thong tin ve xe la: "<<endl;
		cout<<"Nhan hieu xe: "<<this -> nhanHieu<<endl;
		cout<<"Nam san xuat: "<<this -> namSx<<endl;
		cout<<"Hang xe: "<<this -> hang<<endl;
	}
		
};

class Oto : public Vehicle
{
	int soChoNgoi;
	int dungTich;
	
	public:
	
	void nhap()
	{
		cout<<"Nhap thong tin cua xe o to: "<<endl;
		Vehicle :: nhap();
		cout<<"Nhap so cho ngoi: "<<endl;
		cin>>this -> soChoNgoi;
		cout<<"Nhap dung tich cua xe: "<<endl;
		cin>>this -> dungTich;
	}
	
	void xuat()
	{
		Vehicle :: xuat();
		cout<<"So cho ngoi : "<< this -> soChoNgoi << endl;
		cout<<"Dung tich xe: "<< this -> dungTich << endl;
	}
};

class Moto : public Vehicle
{
	int phanKhoi;

	public:
	void nhap()
	{
		cout<<"Nhap thong tin cua xe mo to: "<<endl;
		Vehicle :: nhap();
		cout<<"Nhap phan khoi xe: "<<endl;
		cin>>this -> phanKhoi;
	}
	
	void xuat()
	{
		Vehicle :: xuat();
		cout<<"Phan khoi xe la: "<< this -> phanKhoi << endl;
	}
};

int main()
{
	Oto a;
	Moto b;
	
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	
	return 0;
}
