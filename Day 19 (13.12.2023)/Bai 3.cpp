//https://shareprogramming.net/tong-hop-bai-tap-lap-trinh-huong-doi-tuong-trong-java/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tuyensinh;
class Thisinh
{
	int soBD;
	string hoTen;
	string diaChi;
	char mucUT;
	char khoiThi;
	public:
	
	void nhap()
	{
		
		cout<<"Nhap so bao danh: "<<endl;
		cin>>soBD;
		cout<<"Nhap Ho va ten: "<<endl;
		cin.ignore();
		getline(cin,hoTen);
		cout<<"Nhap dia chi: "<<endl;
		getline(cin,diaChi);
		cout<<"Nhap muc uu tien: "<<endl;
		cin>>mucUT;		
		cout<<"Nhap khoi thi: "<<endl;
		cin>>khoiThi;	
	}
	void xuat()
	{
		cout<<"<<Thong tin ve thi sinh>>"<<endl;
		cout<<"So bao danh: "<<soBD<<endl;
		cout<<"Ho va ten: "<<hoTen<<endl;
		cout<<"Dia chi: "<<diaChi<<endl;
		cout<<"Muc uu tien: "<<mucUT<<endl;
		cout<<"Khoi thi la: "<<khoiThi<<endl;
	}
	friend class Tuyensinh;
};

class Khoi_A : public Thisinh
{
	double diemToan, diemHoa, diemLy;
	public:
	void nhap()
	{
		Thisinh :: nhap();
		cout<<"Nhap diem Toan: "<<endl;
		cin>>this -> diemToan;
		cout<<"Nhap diem Ly: "<<endl;
		cin>>this -> diemLy;
		cout<<"Nhap diem Hoa: "<<endl;
		cin>>this -> diemHoa;
	}
	void xuat()
	{
		Thisinh :: xuat();
		cout<<"Diem Toan Ly Hoa va tong diem lan luot la: "<<this -> diemToan<<" "<<this -> diemLy<<" "<<this -> diemHoa<<" = "<<this -> diemToan + this -> diemLy + this -> diemHoa<<endl;
	}
};

class Khoi_B : public Thisinh
{
	double diemToan, diemHoa, diemSinh;
	public:
	void nhap()
	{
		Thisinh :: nhap();
		cout<<"Nhap diem Toan: "<<endl;
		cin>>this -> diemToan;
		cout<<"Nhap diem Sinh: "<<endl;
		cin>>this -> diemSinh;
		cout<<"Nhap diem Hoa: "<<endl;
		cin>>this -> diemHoa;
	}
	
	void xuat()
	{
		Thisinh :: xuat();
		cout<<"Diem Toan Hoa Sinh va tong diem lan luot la: "<<this -> diemToan<<" "<<this -> diemHoa<<" "<<this -> diemSinh<<" = "<<this -> diemToan + this -> diemSinh + this -> diemHoa<<endl;
	}
};

class Khoi_C : public Thisinh
{
	double diemVan, diemSu, diemDia;
	public:
	void nhap()
	{
		Thisinh :: nhap();
		cout<<"Nhap diem Van: "<<endl;
		cin>>this -> diemVan;
		cout<<"Nhap diem Su: "<<endl;
		cin>>this -> diemSu;
		cout<<"Nhap diem Dia: "<<endl;
		cin>>this -> diemDia;
	}
	
		void xuat()
	{
		Thisinh :: xuat();
		cout<<"Diem Van Su Dia va tong diem lan luot la: "<<this -> diemVan<<" "<<this -> diemSu<<" "<<this -> diemDia<<" = "<<this -> diemVan + this -> diemSu + this -> diemDia<<endl;
	}
};

class Tuyensinh
{
	vector <Khoi_A> a;
	vector <Khoi_B> b;
	vector <Khoi_C> c;
	public:
	static int count;
	void nhap(char x)
	{
		cout<<"<< Nhap du lieu thi sinh thu "<<count<<" >>"<<endl;
		if(x == 'A')
		{
			Khoi_A y;
			y.nhap();
			this -> a.push_back(y);
		}
		else if(x == 'B')
		{
			Khoi_B y;
			y.nhap();
			this -> b.push_back(y);
		}
		else
		{
			Khoi_C y;
			y.nhap();
			this -> c.push_back(y);
		}
		count++;
	}
	void xuat()
	{
		
		for(int i =0; i < this -> a.size(); i++)
		{
			a[i].xuat();
		}
		
		for(int i =0; i < this -> b.size(); i++)
		{
			b[i].xuat();
		}
		
		for(int i =0; i < this -> c.size(); i++)
		{
			c[i].xuat();
		}
	}
	
	void find()
	{
		int x;
		cout<<"Nhap so bao danh thi sinh de tim kiem thong tin:  "<<endl;
		cin>>x;
		for (int i = 0; i < this -> a.size(); i++)
		{
			if(a[i].soBD == x)
			{
				a[i].xuat();
			}
		}
		for (int i = 0; i < this -> b.size(); i++)
		{
			if(b[i].soBD == x)
			{
				b[i].xuat();
			}
		}
		for (int i = 0; i < this -> c.size(); i++)
		{
			if(c[i].soBD == x)
			{
				c[i].xuat();
			}
		}
	}
};
int Tuyensinh :: count = 1;
int main()
{
	Tuyensinh list;
	int n;
	char x;
	cout<<"Nhap so luong thi sinh: "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap khoi thi cua thi sinh: "<<endl;
		cin>>x;
		list.nhap(x);
	}
	list.xuat();
	list.find();
}
