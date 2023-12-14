//https://shareprogramming.net/tong-hop-bai-tap-lap-trinh-huong-doi-tuong-trong-java/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
enum Type
{
	tim_sach,
	tim_tapchi,
	tim_bao
};
class QLsach;
class Tailieu
{
	int maTL;
	string tenNXB;
	int soBan;
	
	public:
		
	void nhap()
	{
		cout<<"<<Nhap thong tin ve tai lieu>>"<<endl;
		cout<<"Nhap ma tai lieu: "<<endl;
		cin>> maTL;
		cout<<"Nhap ten nha xuat ban: "<<endl;
		cin.ignore();
		getline(cin,tenNXB);
		cout<<"Nhap so ban phat hanh: "<<endl;
		cin>> soBan;
	}
	
	void xuat()
	{
		cout<<"######################################"<<endl;
		cout<<"Thong tin ve tai lieu la: "<<endl;
		cout<<"Ma tai lieu: "<<maTL<<endl;
		cout<<"Ten nha xuat ban: "<<tenNXB<<endl;
		cout<<"So ban phat hanh: "<<soBan<<endl;
	}
	
	friend class QLsach;
};

class Sach : public Tailieu
{
	string tenTG;
	int soTrang;
	
	public:
	
	void nhap()
	{
		Tailieu :: nhap();
		cout<<"Nhap ten tac gia: "<<endl;
		cin.ignore();
		getline(cin,tenTG);
		cout<<"Nhap so trang sach: "<<endl;
		cin>>soTrang;
		cin.ignore();
	}		
	
	void xuat()
	{
		Tailieu :: xuat();
		cout<<"Ten tac gia la: "<<tenTG<<endl;
		cout<<"So trang sach la: "<<soTrang<<endl;		
	}
};

class Tapchi : public Tailieu
{
	int soPH;
	int thangPH;
	
	public:
	
	void nhap()
	{
		Tailieu :: nhap();
		cout<<"Nhap so phat hanh: "<<endl;
		cin>>soPH;
		cout<<"Nhap thang phat hanh: "<<endl;
		cin>>thangPH;
		cin.ignore();
	}	
	void xuat()
	{
		Tailieu :: xuat();
		cout<<"So phat hanh: "<<soPH<<endl;
		cout<<"Thang phat hanh: "<<thangPH<<endl;		
	}
};

class Bao : public Tailieu
{
	int ngayPH;
	
	public:
	
	void nhap()
	{
		Tailieu :: nhap();
		cout<<"Nhap ngay phat hanh: "<<endl;
		cin>>ngayPH;
		cin.ignore();
	}	
	void xuat()
	{
		Tailieu :: xuat();
		cout<<"Ngay phat hanh: "<<ngayPH<<endl;		
	}
};

class QLsach
{
	vector <Sach> sach;
	vector <Tapchi> tapChi;
	vector <Bao> bao;
	public:
	
	void nhap(string x)
	{
		if(x == "Sach")
		{
			Sach a;
			a.nhap();
			this -> sach.push_back(a);
		}
		
		else if(x == "Tap chi")
		{
			Tapchi a;
			a.nhap();
			this -> tapChi.push_back(a);
		}
		else
		{
			Bao a;
			a.nhap();
			this -> bao.push_back(a);
		}
	}
	
	void xuat()
	{
		for(int i = 0 ; i < this -> sach.size(); i++)
		{
			this -> sach[i].xuat();
		}
		for(int i = 0 ; i < this -> tapChi.size(); i++)
		{
			this -> tapChi[i].xuat();
		}
		for(int i = 0 ; i < this -> bao.size(); i++)
		{
			this -> bao[i].xuat();
		}
	}
	
	void xoa(int x)
	{
		for (int i = 0 ; i < this -> sach.size(); i++)
			{
				if(sach[i].maTL == x)
					{
						this -> sach.erase(sach.begin() + i);
					}
			}
		for (int i = 0 ; i < this -> tapChi.size(); i++)
			{
				if(tapChi[i].maTL == x)
					{
						this -> tapChi.erase(tapChi.begin()+i);
					}
			}
		
		for (int i = 0 ; i < this -> bao.size(); i++)
			{
				if(bao[i].maTL == x)
					{
						this -> bao.erase(bao.begin()+i);
					}
			}		
	}
	
	void find(string x)
	{
		enum Type y;
		if ( x == "Sach")
		{
			y = tim_sach;
		}
		else if( x == "Bao")
		{
			y = tim_bao;
		}
		else
		{
			y = tim_tapchi;
		}
		switch(y)
		{
			case tim_sach:
			for(int i = 0; i < this -> sach.size() ; i++)
			{
				this -> sach[i].xuat();	
			}
			break;
			case tim_tapchi:
			for(int i = 0; i < this -> tapChi.size() ; i++)
			{
				this -> tapChi[i].xuat();	
			}
			break;
			case tim_bao:
				for(int i = 0; i < this -> bao.size() ; i++)
			{
				this -> bao[i].xuat();	
			}
			break;	
		}
	}
	~QLsach() 
	{
		cout<<"Thoat chuong trinh: "<<endl;
	}
	
};

int main()
{
	string x;
	string y;
	int k;
	int n,m;
	QLsach list;
	cout<<"Nhap so luong tai lieu them moi: "<<endl;
	cin>>n;
	cin.ignore();
	for(int i = 0 ; i < n ; i++)
	{
	cout<<"Nhap loai tai lieu muon them moi: "<<endl;
	getline(cin,x);
	list.nhap(x);
	}
	list.xuat();	
	cout<<"Nhap ma tai lieu muon xoa: "<<endl;
	cin>>m;
	list.xoa(m); //Phuong thuc xoa tai lieu.
	list.xuat(); //Phuong thuc hien thi thong tin tai lieu.
	cout<<"Nhap loai tai lieu muon tim kiem (Cu phap: Sach ; Tap chi hoac Bao): "<<endl;
	cin.ignore();
	getline(cin,y);
	list.find(y);
	
	return 0;
}
