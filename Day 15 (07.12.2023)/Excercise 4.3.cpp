#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Hang;

class Date
{
	int ngay;
	int thang; 
	int nam;
	public:
	Date() {}	
	Date(int a, int b, int c) : ngay(a) , thang (b) , nam(c) {}
 	friend class Hang;
};

class Hang
{
	int maHang;
	string tenHang;
	vector <Date> dataDate;
	vector <Hang> dataHang;
	public:
		
	void nhap()
	{
		Date x;
		Hang y;
		int a,b,c;
		cout<<"Nhap thong tin mat hang: "<<endl;
		cout<<"Nhap ma hang: "<<endl;
		cin>> this -> maHang;
		cout<<"Nhap ten hang: "<<endl;
		cin.ignore();
		getline(cin,this -> tenHang);
		cout<<"Nhap ngay thang nam san xuat: "<<endl;
		cin>>a;
		cin>>b;
		cin>>c;
		y.maHang = this -> maHang;
		y.tenHang = this -> tenHang;
		this -> dataHang.push_back(y);
		x = Date(a,b,c);
		this -> dataDate.push_back(x);					
	}
	
	void xuat()
	{
		cout<<"Nhung mat hang san xuat nam 2017 la: "<<endl;
		for (int i = 0; i < this -> dataHang.size() ; i++)
		{
			if(this -> dataDate[i].nam == 2017)
			{
				cout<<"==========================================="<<endl;
				cout<<"Ma hang la: "<<dataHang[i].maHang<<endl;
				cout<<"Ten hang la: "<<dataHang[i].tenHang<<endl;
				cout<<"Ngay san xuat la: "<<dataDate[i].ngay<<"/"<<dataDate[i].thang<<"/"<<dataDate[i].nam<<endl;												
			}
		}
	}
};

int main()
{
	int n;
	Hang list;
	cout<<"Nhap so luong hang: "<<endl;
	cin>>n;
	for(int i =0; i < n; i++)
	{
		list.nhap();
	}
	
	list.xuat();
	return 0;	
}

