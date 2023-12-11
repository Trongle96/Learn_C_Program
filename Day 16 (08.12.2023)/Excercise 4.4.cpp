#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class PtBac2
{
	private: 

 	int a,b,c;
 	
 	public:
 	
 	PtBac2() : a(0) , b(0), c(0) { }
 	
 	PtBac2 (int d, int e, int f) : a(d) , b(e), c(f) { }
 	
 	PtBac2 nhap()
 	{
 		PtBac2 pt;
 		int d,e,f;
 		
	 	cout<<"Nhap vao tham so a: "<<endl;
	 	cin>>d;
	 	cout<<"Nhap vao tham so b: "<<endl;
	 	cin>>e;
	 	cout<<"Nhap vao tham so c: "<<endl;
	 	cin>>f;
		 
		pt = PtBac2(d,e,f);
		
		return pt;	
	}
	
	void xuat()
	{
		cout<<"Phuong trinh bac 2 la: "<<endl;
		cout<<this -> a<<"x^2 + "<<this -> b<<"x + "<<this -> c<<endl;
	}	
	
	void giai()
	{
		int delta;
		int x1, x2;
		
		delta = (this -> b * this -> b) - 4 * this -> a * this -> c;
		
		if(delta < 0)
		{
			cout<<"Phuong trinh vo nghiem. "<<endl;
		}
		
		else if (delta == 0)
		{
			x1 = x2 = - (this -> b)/ 2 * this -> a;
			
			cout<<"Phuong trinh co 2 nghiem kep x1 = x2 = "<< x1 <<endl;			
		}
				
		else
		{
			x1 = (- ( this -> b) + sqrt(delta)) / 2 * this -> a;
			x2 = (- ( this -> b) - sqrt(delta)) / 2 * this -> a;
			
			cout<<"Phuong trinh co nghiem x1 = "<<x1<<endl;
			cout<<"Phuong trinh co nghiem x2 = "<<x2<<endl;
		}	
	}
 	
};

int main()
{
		PtBac2 x;
		
		x = x.nhap();
			
		x.xuat();
		
		x.giai();
		
}
