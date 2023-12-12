#include <iostream>
#include <string>
using namespace std;
class Matrix
{
	private:
	
	int m;
	int n;
	double arr[100][100];

	public:
		
	Matrix() {}
	friend istream& operator>> (istream &in, Matrix &mt)
		 {
  			cout << "Nhap kich thuoc dong: ";
  			in >> mt.m;
  			cout << "Nhap kich thuoc cot: ";
  			in >> mt.n;
  			for(int i = 0 ; i < mt.m; i++)
  			{
			  for(int j = 0; j < mt.n; j++)
			  	{
			  		cout<<"Nhap phan tu arr["<<i<<"]["<<j<<"]:";
   			  		in >> mt.arr[i][j];
			    }	
  				
			}
  			return in;
  		}
  	friend ostream& operator<< (ostream &out,  Matrix &mt)
		 {
  			for(int i = 0 ; i < mt.m; i++)
  			{
			  for(int j = 0; j < mt.n; j++)
			  	{
			  		out<<"Phan tu arr["<<i<<"]["<<j<<"] la: "<<mt.arr[i][j]<<endl;
			    }	
  				
			}
			return out;
  		}
  	
	 friend Matrix operator!(Matrix a)
	 {
	 		Matrix x;
	 		x.m = a.m;
	 		x.n = a.n;
	 		for(int i = 0 ; i < a.m; i++)
  			{
			  for(int j = 0; j < a.n; j++)
			  	{
			  		x.arr[i][j] = a.arr[i][j] * (-1);
			    }
			}
			return x; 
	 }
	 
	 friend Matrix operator+ (Matrix a , Matrix b)
	 {
	 		Matrix x;
	 		x.m = a.m;
	 		x.n = a.n;
	 		for(int i = 0 ; i < a.m; i++)
  			{
			  for(int j = 0; j < a.n; j++)
			  	{
			  		x.arr[i][j] = a.arr[i][j] + b.arr[i][j];
			    }
			}
			return x; 
	 }
	 
	 friend Matrix operator- (Matrix a , Matrix b)
	 {
	 		Matrix x;
	 		x.m = a.m;
	 		x.n = a.n;
	 		for(int i = 0 ; i < a.m; i++)
  			{
			  for(int j = 0; j < a.n; j++)
			  	{
			  		x.arr[i][j] = a.arr[i][j] - b.arr[i][j];
			    }
			}
			return x; 
	 }
		
};

int main()
{
		Matrix a;
		
		cin>>a;
	
		cout<<a;
		
		Matrix b;
		
		b = !a;
		
		cout<<b;
		
		Matrix tong;
		
		tong = a + b;
		
		cout<<tong;
		
		Matrix hieu;
		
		hieu = a - b;
		
		cout<<hieu;
		
		
		return 0;		
}



