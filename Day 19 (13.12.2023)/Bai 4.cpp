//https://shareprogramming.net/tong-hop-bai-tap-lap-trinh-huong-doi-tuong-trong-java/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int nhaplaiID(int x)
{
	int y;
	cout<<"Vui long nhap lai so chung minh nhan dan do bi trung: "<<endl;
	cin>>y;
	if(y != x)
	return y;
	return nhaplaiID(x);
}

vector <int> arrID;
class Nguoi
{
	string hoTen;
	int tuoi;
	string nghe;
	int id;
		
	public:
		
	void nhap()
	{
		
		cout<<"Nhap ho va ten: "<<endl;
		cin.ignore();
		getline(cin,hoTen);
		cout<<"Nhap tuoi tac: "<<endl;
		cin>>tuoi;
		cout<<"Nhap nghe nghiep: "<<endl;
		cin.ignore();
		getline(cin, nghe);
		cout<<"Nhap so chung minh nhan dan: "<<endl;
		cin>>id;		
	}
	
	void xuat()
	{
		cout<<"Ho va ten: "<<hoTen<<endl;
		cout<<"Tuoi tac: "<<tuoi<<endl;
		cout<<"Nghe nghiep: "<<nghe<<endl;
		cout<<"So chung minh nhan dan: "<<id<<endl;
	}
	
	void setID(int a)
	{
		this -> id = a;
	}
	int getID()
	{
		return this -> id;
	}
};



class Hogd
{
	int soTV, soNha;
	vector <Nguoi> data;
		
	public:

	void nhap()
	{
		Nguoi x;
		cout<<"Nhap so nha: "<<endl;
		cin>> this -> soNha;
		cout<<"Nhap so thanh vien trong ho: "<<endl;
		cin>> this -> soTV;
		for (int i = 0 ; i < this -> soTV; i++)
		{
			cout<<"Nhap du lieu thanh vien thu "<<i+1<<" trong ho"<<endl;
			x.nhap();
			for(int j = 0 ; j < arrID.size() ; j++)
			{
				int a;
				if(x.getID() == arrID[j])
				{
					a = nhaplaiID(x.getID());
					x.setID(a);
				}
			}
			this -> data.push_back(x);
			arrID.push_back(data[i].getID());
		}
	}
		
	
	void xuat()
	{
		cout<<"So nha la: "<<this -> soNha<<endl;
		cout<<"So thanh vien la: "<<this -> soTV<<endl;	
		for (int i = 0 ; i < this -> soTV; i++)
		{
			cout<<"||Du lieu cua thanh vien thu "<<i+1<<" trong ho||"<<endl;
			this -> data[i].xuat();
		}
	}	

};


class Khupho 
{
	vector <Hogd> data_Hogd;
	public:
	
	static int count;
	void nhap()
	{
		Hogd y;
		cout<<"<<NHAP THONG TIN HO GIA DINH THU "<<count<<">>"<<endl;
		y.nhap();
		this -> data_Hogd.push_back(y);		
		count++;
	}
	void xuat()
	{
		for(int i = 0; i < this -> data_Hogd.size(); i++)
		{
			cout<<"<<THONG TIN CUA HO GIA DINH THU "<<i+1<<">>"<<endl;
			data_Hogd[i].xuat();
		}
	}
};
int Khupho :: count = 1;

int main()
{
	Khupho x;
	int n;
	cout<<"Nhap so luong ho gia dinh trong khu pho: "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		x.nhap();
		
	}
	x.xuat();
	return 0;
}
