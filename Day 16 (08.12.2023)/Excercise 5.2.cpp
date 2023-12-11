#include<iostream>
#include<string>
using namespace std;

class Printer
{
	protected:
				int trongLuong;
				string hangSX;
				int namSX;
				int tocDo;				
};

class Dotprinter : Printer
{
	private:
				string matDoKim;
	public:
				void nhap()
				{
					cout<<"Nhap thong tin may in kim: "<<endl;
					cout<<"Nhap trong luong may: "<<endl;
					cin>> Printer :: trongLuong;
					cout<<"Nhap hang san xuat: "<<endl;
					cin.ignore();
					getline(cin,Printer :: hangSX);
					cout<<"Nhap nam san xuat: "<<endl;
					cin>> Printer :: namSX;
					cout<<"Nhap toc do: "<<endl;
					cin>> Printer :: tocDo;
					cout<<"Nhap mat do kim: "<<endl;
					cin.ignore();
					getline(cin, this -> matDoKim);					
				}
				
				void xuat()
				{
					cout<<"==========================================="<<endl;
					cout<<"Thong tin may in kim la: "<<endl;
					cout<<"Trong luong may la: "<<Printer :: trongLuong<<endl;
					cout<<"Hang san xuat la: "<<Printer :: hangSX<<endl;
					cout<<"Nam san xuat la: "<<Printer :: namSX<<endl;
					cout<<"Toc do may la: "<<Printer :: tocDo<<endl;
					cout<<"Mat do kim la: "<<this -> matDoKim<<endl;	
				}			
};

class Laserprinter : Printer
{
	private:
				string doPhanGiai;
	public:
				void nhap()
				{	cout<<"Nhap thong tin may Laser: "<<endl;
					cout<<"Nhap trong luong may: "<<endl;
					cin>> Printer :: trongLuong;
					cout<<"Nhap hang san xuat: "<<endl;
					cin.ignore();
					getline(cin,Printer :: hangSX);
					cout<<"Nhap nam san xuat: "<<endl;
					cin>> Printer :: namSX;
					cout<<"Nhap toc do: "<<endl;
					cin>> Printer :: tocDo;
					cout<<"Nhap do phan giai: "<<endl;
					cin.ignore();
					getline(cin, this -> doPhanGiai);					
				}
				
				void xuat()
				{
					cout<<"==========================================="<<endl;
					cout<<"Thong tin may in laser la: "<<endl;
					cout<<"Trong luong may la: "<<Printer :: trongLuong<<endl;
					cout<<"Hang san xuat la: "<<Printer :: hangSX<<endl;
					cout<<"Nam san xuat la: "<<Printer :: namSX<<endl;
					cout<<"Toc do may la: "<<Printer :: tocDo<<endl;
					cout<<"Do phan giai la: "<<this -> doPhanGiai<<endl;	
				}			
};

int main()
{
	Dotprinter a;
	Laserprinter b;
				a.nhap();
				b.nhap();
				a.xuat();
				b.xuat();
				
				return 0;	
}
