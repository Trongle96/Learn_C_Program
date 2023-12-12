#include <iostream>
#include <string>
using namespace std;

class Phanso
{
	private:
			int tu;
			int mau;
	public:
			Phanso(int tu , int mau)
			{
				this -> tu = tu;
				this -> mau = mau;
			}
			
			static Phanso taoPS()
			{
				int b , c;
				cout<<"Nhap thong tin phan so: "<<endl;
				cout<<"Nhap tu: ";
				cin>>b;
				cout<<"Nhap mau: ";
				cin>>c;
				Phanso a(b,c);
				return a;					
			}
			
			void xuat()
			{
				cout<< this -> tu<<"/"<< this -> mau<<endl;
			}
			
			void toigian()
			{
			int uscln,b,c;
	
			b = this -> tu;
			c = this -> mau;
			while (b != c){
			if(b > c){
			b -= c;
			}
			else{
			c -= b;
			}	
			}
			uscln = b;
			this -> tu/= uscln;
			this -> mau /= uscln;
			}
			
			Phanso operator*(Phanso a)
			{
				Phanso x(0,1);
				x.tu = this -> tu * a.tu;
				x.mau = this -> mau * a.mau;
				x.toigian();
				return x;
			}
			
			Phanso operator/(Phanso a)
			{
				Phanso x(0,1);
				x.tu = this -> tu * a.mau;
				x.mau = this -> mau * a.tu;
				x.toigian();
				return x;
			}
			
			Phanso operator+(Phanso a)
			{
				Phanso x(0,1);
				x.tu = this -> tu * a.mau + this -> mau * a.tu;
				x.mau = this -> mau * a.mau;
				x.toigian();
				return x;
			}
			
			Phanso operator-(Phanso a)
			{
				Phanso x(0,1);
				if(this -> tu * a.mau > this -> mau * a.tu)
				{
				x.tu = this -> tu * a.mau - this -> mau * a.tu;
				x.mau = this -> mau * a.mau;
				}
				else
				{
				x.tu =  this -> mau * a.tu - this -> tu * a.mau;
				x.mau = this -> mau * a.mau;	
				}
				x.toigian();
				return x;
			}
	
};

int main()
{
			
			Phanso a = Phanso :: taoPS();
			Phanso b = Phanso :: taoPS();
			Phanso c(0,1);
			
		    c = a + b;
			cout<<"Tong hai phan so la: ";
			c.xuat();
			c = a - b;
			cout<<"Hieu hai phan so la: ";
			c.xuat();
			c = a * b;
			cout<<"Tich hai phan so la: ";
			c.xuat();
			c = a / b;
			cout<<"Thuong hai phan so la: ";
			c.xuat();
			return 0;			
}


