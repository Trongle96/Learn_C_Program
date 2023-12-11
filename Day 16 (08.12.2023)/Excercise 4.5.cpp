#include <iostream>
#include <string>
using namespace std;

class Array
{
	private:
		int n;
		int *x = new int(n);
	public:
		//Phuong thuc ham tao ko doi so , tao n = 0
		Array() : n(0) {}
		// Phuong thuc ham tao 1 doi so , tao 1 mang gt = 0 voi n so nguyem
		Array(int n)
		{
			this -> n = n;
			for (int i = 0; i < this -> n ; i++)
			{
				this -> x[i] = 0;
			}
		}
		// Phuong thuc huy dat lai n = 0;
		~Array()
		{
			this -> n = 0;	
			cout<<"Ham huy da duoc goi."<<endl;
		}
		
		void nhap()
		{	
			for (int i = 0; i < this -> n; i++)
				{
					cout<<"Nhap phan tu thu "<<i+1<<" la: "<<endl;
					cin >>this -> x[i];
				}	
		}
		
		void xuat()
		{	
			for (int i = 0; i < this -> n; i++)
				{
					cout<<"Phan tu thu "<<i+1<<" la: "<<this -> x[i]<<endl;
				}	
		}
};

int main()
{
		Array a;
		int n;
		
		cout<<"Nhap so luong phan tu cua mang: "<<endl;
		cin>>n;
				
		a = Array(n);
		a.nhap();
		a.xuat();
	
}
