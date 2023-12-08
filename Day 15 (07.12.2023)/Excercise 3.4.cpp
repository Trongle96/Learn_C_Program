//Bai tap nay van dung tinh ke thua va da hinh trong C++;

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class QuanLy{
	  public:
	  int maQl;
	  string hoTen;
	  
	  QuanLy()	{}
//	  QuanLy(int a, string b) : maQl(a) , hoTen(b) {} 
	  	   
	  void nhap()
	  {
	  cout<<"Nhap ma nguoi quan ly: "<<endl;
	  cin >> this -> maQl;
	  cout<<"Nhap Ho va ten nguoi quan ly: "<<endl;
	  cin.ignore();
	  getline(cin, this -> hoTen);
	  }
	  
	  void xuat()
	  {
	  cout<<"======================================"<<endl;
	  cout<<"Ma nguoi quan ly la: "<<this -> maQl<<endl;
	  cout<<"Ho va ten quan ly la: "<<this -> hoTen<<endl;
	  cout<<"======================================"<<endl;
	  }
};


class May 
{
	  public:
	  int maMay;
	  string kieuMay;
	  string tinhtrangMay;
	  
	  vector <May> dataMay;
		  
	  May() {}
//	  QuanLy(int a, string b) : maQl(a) , hoTen(b) {} 
	  	   
	  void nhap()
	  {
	  May a;	
	  cout<<"Nhap Ma cua may tinh: "<<endl;
	  cin >> this -> maMay;
	  cout<<"Nhap Kieu may tinh: "<<endl;
	  cin.ignore();
	  getline(cin, this -> kieuMay);
	  cout<<"Nhap Tinh trang may: "<<endl;
	  cin >> this -> tinhtrangMay;
	  cin.ignore();
	  
	  a.maMay = this -> maMay;
	  a.kieuMay = this -> kieuMay;
	  a.tinhtrangMay = this -> tinhtrangMay;
	  
	  this -> dataMay.push_back(a);
	  }
	  
	  void xuat()
	  {
	  cout<<"======================================"<<endl;
	  cout<<"Ma cua may tinh la: "<<this -> maMay<<endl;
	  cout<<"Kieu cua may tinh la: "<<this -> kieuMay<<endl;	 
	  cout<<"Tinh trang may la: "<<this -> tinhtrangMay<<endl; 
	  }
};

class PhongMay : public QuanLy , public May
{
	  public:
	  int maPhong;
	  int dienTich;
	  string tenPhong;
		  
	  PhongMay() {}
//	  QuanLy(int a, string b) : maQl(a) , hoTen(b) {} 
	  	   
	  void nhap()
	  {
	  cout<<"Nhap Ma phong may: "<<endl;
	  cin >> this -> maPhong;
	  cout<<"Nhap Ten phong may: "<<endl;
	  cin.ignore();
	  getline(cin, this -> tenPhong);
	  cout<<"Nhap Dien tich phong may: "<<endl;
	  cin >> this -> dienTich;
	  }
	  
	  void xuat()
	  {
	  cout<<"======================================"<<endl;
	  cout<<"Ma phong may la: "<<this -> maPhong<<endl;
	  cout<<"Ten phong may la: "<<this -> tenPhong<<endl;	 
	  cout<<"Dien tich cua phong may la: "<<this -> dienTich<<endl; 
	  }
};

int main()
{
	int slMay;
	QuanLy a;
	PhongMay b;
	May c;
	a.nhap();
	b.nhap();
	
	cout<<"Nhap so luong may tinh cua phong may: "<<endl;
	
	cin>>slMay;
	
	for(int i = 0; i < slMay; i++)
	{
		c.nhap();
	}
	
	b.xuat();
	a.xuat();
	
	cout<<"So luong may tinh la: "<<slMay<<endl;
	
	for(int i = 0; i < slMay; i++)
	{
		c.dataMay[i].xuat();
	}
	
	return 0;
}




