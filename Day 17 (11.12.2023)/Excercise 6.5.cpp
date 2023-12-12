#include <iostream>
#include <algorithm>
using namespace std;

class Mang
{
	private:
			int n;
			float arr[100];
	public:
	
		 void nhap()
		 {
  			cout << "Nhap kich thuoc mang: ";
  			cin >> this -> n;
  			for(int i = 0 ; i < this -> n; i++)
  			{
			cout<<"Nhap phan tu thu: "<<i<<endl;
			cin >> this -> arr[i];
			}
  		}	
  		
  			 
		 void xuat()
		 {
  			for(int i = 0 ; i < this -> n; i++)
  			{
			cout<<"Phan tu thu: "<<i<<" la: "<<this -> arr[i]<<endl;
			}
  	   	}	 
		
		void operator<< (Mang &x)
		{	
			sort(this -> arr, this -> arr + this -> n);
			
		}
			 	
		void operator>> (Mang &x)
		{	
			sort(this -> arr, this -> arr + this -> n, greater<float>());
				
		}	
};

int main()
{
	Mang a;
	a.nhap();
	a.xuat();
	a<<a;
	cout<<"Mang sau khi sap xep lai theo huong tang dan la: "<<endl;
	a.xuat();
	a>>a;
	cout<<"Mang sau khi sap xep lai theo huong giam dan la: "<<endl;
	a.xuat();
	return 0;
}
