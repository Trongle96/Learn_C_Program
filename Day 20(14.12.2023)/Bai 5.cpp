#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Nguoi
{
	string hoTen;
	int tuoi;
	int id;
	
	public:
	
	void nhap()
	{
		cout<<"<<Nhap du lieu cua khach hang thue phong:>> "<<endl;
		cout<<"Nhap ho va ten: "<<endl;
		getline(cin,hoTen);
		cout<<"Nhap tuoi: "<<endl;
		cin>>tuoi;
		cout<<"Nhap so chung minh nhan dan: "<<endl;
		cin>>id;		
	}
	
	void xuat()
	{
		cout<<"<<Thong tin khach hang thue phong>>"<<endl;
		cout<<"Ho va ten: "<<hoTen<<endl;
		cout<<"Tuoi: "<<tuoi<<endl;
		cout<<"So chung minh nhan dan: "<<id<<endl;
	}	
	
	int getID()
	{
			
		return this -> id;
	}
};

class Phong
{
	char loaiP;
	int donGia;
	int soNgay;
	public:
	
	void nhap()
	{
		cout<<"<<Nhap thong tin phong thue>>"<<endl;
		cout<<"Nhap loai phong: "<<endl;
		cin>>loaiP;
		cout<<"Nhap don gia phong: "<<endl;
		cin>> donGia;
		cout<<"Nhap so ngay thue phong: "<<endl;
		cin>> soNgay;	
		cin.ignore();
	}
	
	void xuat()
	{
		cout<<"Loai phong thue la: "<<loaiP<<endl;
		cout<<"Don gia thue: "<<donGia<<endl;
		cout<<"So ngay thue phong: "<<soNgay<<endl;
	}
	
	int getDG()
	{
		return this -> donGia;
	}
	int getSN()
	{
		return this -> soNgay;
	}
};
class Khachsan
{
	vector <Nguoi> data;
	vector <Phong> dataP;
	public:
	
	void nhap()
	{
		Nguoi x;
		Phong y;
		x.nhap();
		y.nhap();
		this -> data.push_back(x);
		this -> dataP.push_back(y);		
	}
	void tinhTien(int x) //Tinh tien thue phong theo so CMND.
	{
		for(int i = 0; i < this -> data.size(); i++)
			{
				if(data[i].getID() == x)
				{
					cout<<"Thanh tien thue phong la: "<<dataP[i].getDG() * dataP[i].getSN()<<endl; 
				}
			}
		
	}
	
	void xuat() 
	{
		for(int i = 0; i < this -> data.size(); i++)
			{
					data[i].xuat();
					dataP[i].xuat();
			}
	}
	
	void xuat(int x) //xuat thong tin theo chung minh nhan dan
	{
		for(int i = 0; i < this -> data.size(); i++)
			{
				if(data[i].getID() == x)
				{
					data[i].xuat();
					dataP[i].xuat();
				}
			}
		
	}
	
	void xoa(int x) //xoa thong tin khach theo CMND.
	{
		for(int i = 0; i < this -> data.size(); i++)
			{
				if(data[i].getID() == x)
				{
					this -> data.erase(data.begin()+i);
					this -> dataP.erase(dataP.begin()+i);
				}
			}
	}
};

int main()
{
	Khachsan a;
	int n,x,y;
	cout<<"Nhap so luong khach thue phong: "<<endl;
	cin>>n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		a.nhap();
	}
	cout<<"Nhap so cmnd de tim kiem thong tin: "<<endl;
	cin>>x;
	a.xuat(x);
	a.tinhTien(x);
	cout<<"Nhap so cmnd de xoa  thong tin: "<<endl;
	cin>>y;
	a.xoa(y);
	a.xuat();
	return 0;	
}


