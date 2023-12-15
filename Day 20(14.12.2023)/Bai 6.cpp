#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Hocsinh
{
	string hoTen;
	int tuoi;
	string queQuan;
	string lop;
	public:
	
	void nhap()
	{
		cout<<"<<Nhap du lieu cua hoc sinh: >>"<<endl;
		cout<<"Nhap ho va ten: "<<endl;
		getline(cin,hoTen);
		cout<<"Nhap tuoi: "<<endl;
		cin>>tuoi;
		cout<<"Nhap que quan: "<<endl;
		cin.ignore();
		getline(cin,queQuan);
		cout<<"Nhap lop hoc: "<<endl;
		getline(cin,lop);
	}
	
	void xuat()
	{
		cout<<"<<Du lieu hoc sinh la>>"<<endl;
		cout<<"Ho va ten: "<<hoTen<<endl;
		cout<<"Tuoi: "<<tuoi<<endl;
		cout<<"Que quan: "<<queQuan<<endl;
		cout<<"Lop "<<lop<<endl;
	}
	
	int getTuoi()
	{
		return this -> tuoi;
	}
	
	string getQuequan()
	{
		return this -> queQuan;
	}

};

class Truong
{
	vector <Hocsinh> data;
	
	public:
		
	void them()
	{
		Hocsinh x;
		x.nhap();
		this -> data.push_back(x);
	}
	
	void xuat()
	{
		for(int i = 0; i < this -> data.size(); i++)
		{
			data[i].xuat();
		}
	}
	
	void xuat(int x)//Xuat thong tin hoc sinh theo tuoi.	
	{
		for(int i = 0; i < this -> data.size(); i++)
		{
			if(data[i].getTuoi() == x)
			{
				data[i].xuat();
			}
		}
	}
	
	
	void xuat(int x , string y) //Xuat thong tin hoc sinh theo tuoi va que DN.
	{	
		int count;
		count = 0;
		for(int i = 0; i < this -> data.size(); i++)
		{
			if(data[i].getTuoi() == x && data[i].getQuequan() == y)
			{
				count++;
			}
		}
		cout<<"So luong hoc sinh 23 tuoi va que o Da Nang la: "<<count<<endl;
	}
};

int main()
{
	Truong x;
	int n;
	cout<<"Nhap so luong hoc sinh them moi: "<<endl;
	cin>>n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		x.them();
	}
	x.xuat();
	cout<<"<<Danh sach hoc sinh 20 tuoi la: >>"<<endl;
	x.xuat(20);
	cout<<"======================================="<<endl;
	x.xuat(23,"Da Nang");
	
	return 0;	
}

