#include <iostream>
#include <string>
using namespace std;

class Electronic
{
	protected:
			 	string congSuat;
			 	string	dienAp;
	public:
			
				Electronic(string a , string b)
					{	
						congSuat = a;
						dienAp = b;
					}
};

class Maygiat : public Electronic
{
	private:
				int dungTich;
				string loai;
	public:	
				
				Maygiat(string a, string b, int c, string d) : Electronic(a,b) 
				{
					this -> dungTich = c;
					this -> loai = d;
				}
				void xuat()
				{
					cout<<"Thong tin ve may la: "<<endl;
					cout<<"Cong suat may: "<<Electronic :: congSuat<<endl;
					cout<<"Dien ap cua may: "<<Electronic :: dienAp<<endl;
					cout<<"Dung tich cua may: "<<this -> dungTich<<endl;
					cout<<"Loai may la: "<<this -> loai<<endl;	
				}
};

class Tulanh : public Electronic
{
	private:
				int dungTich;
				int soNgan;
	public:
			
				Tulanh(string a, string b, int c, int d) : Electronic(a,b) 
				{
					this -> dungTich = c;
					this -> soNgan = d;
				}
				
					void xuat()
				{
					cout<<"Thong tin ve may la: "<<endl;
					cout<<"Cong suat may: "<<Electronic :: congSuat<<endl;
					cout<<"Dien ap cua may: "<<Electronic :: dienAp<<endl;
					cout<<"Dung tich cua may: "<<this -> dungTich<<endl;
					cout<<"So ngan cua may la: "<<this -> soNgan<<endl;	
				}
				
};

int main()
{
		Maygiat a("100W","220V",20,"Panasonic"); //Tinh ke thua
		
		Tulanh b("150W","220V",30,4); //Tinh ke thua
		
		a.xuat(); //Tinh da hinh
		
		b.xuat(); //Tinh da hinh
		
		return 0;
}
