#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Nguoi
{

	string hoTen;
	int tuoi;
	string queQuan;
	
	public:
	void nhap()
	{
		cout<<"Nhap ho va ten: "<<endl;
		cin.ignore();
		getline(cin,hoTen);
		cout<<"Nhap tuoi: "<<endl;
		cin>>tuoi;
		cout<<"Nhap que quan: "<<endl;
		cin.ignore();
		getline(cin,queQuan);
		
	}
	
	void xuat()
	{
		
		cout<<"Ho va ten: "<<hoTen<<endl;
		cout<<"Tuoi: "<<tuoi<<endl;
		cout<<"Que quan: "<<queQuan<<endl;	
	}
	
	
};

class CBGV : public Nguoi
{
	int lgcung, lgthuong, tienPhat;
	int maGV;
	
	public:
	
	int getMaGv()
	{
		return maGV;
	}
	void nhap()
	{
		cout<<"Nhap ma so giao vien: "<<endl;
		cin>>maGV;
		Nguoi :: nhap();
		cout<<"Nhap luong cung: "<<endl;
		cin>>lgcung;
		cout<<"Nhap luong thuong: "<<endl;
		cin>>lgthuong;
		cout<<"Nhap tien phat: "<<endl;
		cin>>tienPhat;	
	}
	
	void xuat()
	{
		cout<<"<<Thong tin cua giao vien>>"<<endl;
		cout<<"Ma so giao vien: "<<maGV<<endl;
		Nguoi :: xuat();
	}
	
	static void xoa(vector <CBGV> &x, int y) // Xoa du lieu giao vien theo ma GV.
	{
		for (int i = 0; i < x.size() ; i++)
		{
			if(x[i].getMaGv() == y)
			{
				x.erase(x.begin() + i);
			}
		}
	}
	
	void tinhLuong()
	{
		cout<<"Luong thuc linh cua giao vien la: "<<lgcung + lgthuong - tienPhat<<endl;
	}
};

int main()
{
	vector <CBGV> arrGV;
	int maGVxoa;
	CBGV a;
		
	int n;
	cout<<"Nhap so luong giao vien them moi: "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		a.nhap();
	    arrGV.push_back(a);
	}
	
	for(int i = 0; i < arrGV.size(); i++)
	{
		cout<<"Thong tin giao vien thu: "<<i+1<<" la:"<<endl;
		arrGV[i].xuat();
		arrGV[i].tinhLuong();
	}
	
	cout<<"Nhap ma giao vien de xoa: "<<endl;
	cin>>maGVxoa;
	
	
	CBGV :: xoa (arrGV,maGVxoa); // Goi ham static trong lop GBGV de xoa 1 giao vien trong mang.
	
	for(int i = 0; i < arrGV.size(); i++)
	{
		cout<<"Thong tin giao vien thu: "<<i+1<<" la:"<<endl;
		arrGV[i].xuat();
		arrGV[i].tinhLuong();
	}
	
	return 0;
}
