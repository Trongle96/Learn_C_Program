//https://shareprogramming.net/tong-hop-bai-tap-lap-trinh-huong-doi-tuong-trong-java/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Qlcb;
class Canbo
{

	private:
	string hoten;
	int tuoi;
	string gt;	
	string diaChi;
	string chucVu;
	
	public:
	void nhap()
	{	
	cout<<"================================="<<endl;
	cout<<"Nhap ho va ten can bo: "<<endl;
	getline(cin,this -> hoten);
	cout<<"Nhap tuoi can bo: "<<endl;
	cin>> this -> tuoi;
	cout<<"Nhap gioi tinh: "<<endl;
	cin.ignore();
	getline(cin, this -> gt);
	cout<<"Nhap dia chi: "<<endl;
	getline(cin, this -> diaChi);
	}
	
	void xuat()
	{
	cout<<"================================="<<endl;
	cout<<"Ho va ten can bo la: "<<this -> hoten<<endl;
	cout<<"Tuoi cua can bo la: "<<this -> tuoi<<endl;
	cout<<"Gioi tinh la: "<<this -> gt<<endl;
	cout<<"Dia chi la: "<<this -> diaChi<<endl;
	}
	friend class Qlcb;
};


class Congnhan : public Canbo
{
	int bac;
	public:
	void nhap()
	{
		Canbo :: nhap();
		cout<<"Nhap bac cua cong nhan: "<<endl;
		cin>>this -> bac;
		cin.ignore();
	}
	
	void xuat()
	{
		Canbo :: xuat();
		cout<<"Bac cua cong nhan: "<<this -> bac<<endl;
	}
};

class Kysu : public Canbo
{
	string nganh;
	public:
	void nhap()
	{
		Canbo :: nhap();
		cout<<"Nhap nganh Dao tao cua ky su: "<<endl;
		getline(cin, this -> nganh);
	}
	
		void xuat()
	{
		Canbo :: xuat();
		cout<<"Nganh Dao tao cua ky su la: "<<this -> nganh<<endl;
	}	
};

class Nhanvien : public Canbo
{
	string congViec;
	
	public:
	void nhap()
	{
		Canbo :: nhap();
		cout<<"Nhap cong viec cua nhan vien: "<<endl;
		getline(cin, this -> congViec);
	}
	
	void xuat()
	{
		Canbo :: xuat();
		cout<<"Cong viec cua nhan vien la: "<<this -> congViec<<endl;
	}		
};

class Qlcb
{
	vector <Congnhan> cn;
	vector <Nhanvien> nv;
	vector <Kysu> ks;
	
	public:
	static int count;
	
    void themCB(string x)
	{
		cout<<"Nhap thong tin can bo thu "<<count<<endl;
		if(x == "Cong nhan")
		{
		Congnhan a;
		a.nhap();
		this -> cn.push_back(a);	
		}
		else if(x == "Nhan vien")
		{
		Nhanvien a;
		a.nhap();
		this -> nv.push_back(a);	
		}
		else
		{
		Kysu a;
		a.nhap();
		this -> ks.push_back(a);
		}
		count++;
	}
	
		 void searchCB(string x)
	{
		for(int i = 0; i < this -> cn.size(); i++)
		{
			if(this -> cn[i].hoten == x)
				{
					this -> cn[i].xuat();
				}
		}
		
		for(int i = 0; i < this -> nv.size(); i++)
		{
			if(this -> nv[i].hoten == x)
				{
					this -> nv[i].xuat();
				}
		}
		
		for(int i = 0; i < this -> ks.size(); i++)
		{
			if(this -> ks[i].hoten == x)
				{
					this -> ks[i].xuat();
				}
		}
	}
	
	 void xuat()
	{
		cout<<"Thong tin cua tat ca can bo cua cong ty la: "<<endl;
		for(int i = 0; i < this -> cn.size(); i++)
		{
					this -> cn[i].xuat();
		}
		
		for(int i = 0; i < this -> nv.size(); i++)
		{
					this -> nv[i].xuat();
		}
		
		for(int i = 0; i < this -> ks.size(); i++)
		{
					this -> ks[i].xuat();
		}
	}
	
	~Qlcb()
	{	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
		cout<<"Thoat khoi chuong trinh: "<<endl;
	}

};

	int Qlcb :: count = 1;

int main()
{

	int n;
	string x;
	string z;
	Qlcb y;
	cout<<"Nhap so luong can bo them moi: "<<endl;
	cin>>n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
	cout<<"Nhap chuc danh can bo moi: "<<endl;
	getline(cin,x);
	cout<<x<<endl;
	y.themCB(x);
	}	
	cout<<"Nhap Ho va ten can bo can tim kiem thong tin: "<<endl;
 	getline(cin,z);
	y.searchCB(z);// Goi ham tim can bo
	y.xuat();// Goi ham xuat thong tin tat ca can bo;
	return 0;
}

	
	
	


