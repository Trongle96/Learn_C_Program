#include <iostream>
#include <string>
using namespace std;
class NSX {
	public:
	int mansx;
	string tennsx;
	string dcnsx;
	
	NSX(int mansx, string tennsx, string dcnsx){
	this -> mansx = mansx;
	this -> tennsx = tennsx;
	this -> dcnsx = dcnsx;	
	}
	
	void xuatnsx(){
	cout<<"Thong tin ve nha san xuat cua mat hang: "<<endl;
	cout<<"Ma san xuat la: "<<mansx<<endl;
	cout<<"Ten nha san xuat la: "<<tennsx<<endl;
	cout<<"Dia chi nha san xuat la: "<<dcnsx<<endl;		
	}
};

class HANG: public NSX	{
	public:
	int mahang;
	string tenhang;
	HANG(int mansx, string tennsx, string dcnsx, int mahang, string tenhang) : NSX(mansx,tennsx,dcnsx){
	this -> mahang = mahang;
	this -> tenhang = tenhang;	
	}
	
	void xuathang(){
	cout<<"Thong tin ve mat hang: "<<endl;
	cout<<"Ma hang la: "<<this -> mahang<<endl;
	cout<<"Ten hang la: "<<this -> tenhang<<endl;
	NSX :: xuatnsx();		
	}	
}; 
int main(){
	int mahang, mansx;
	string tenhang, tennsx, dcnsx;
	cout<<"Nhap vao thong tin mat hang a: "<<endl;
	cout<<"Ma hang la: "<<endl;
	cin>>mahang;
	cout<<"Ten hang la: "<<endl;
	cin.ignore();
	getline(cin,tenhang);
	cout<<"Ma nha san xuat la: "<<endl;
	cin>>mansx;
	cout<<"Ten nha san xuat la: "<<endl;
	cin.ignore();
	getline(cin,tennsx);
	cout<<"Dia chi nha san xuat la: "<<endl;
	getline(cin,dcnsx);
	
	HANG a(mansx,tennsx, dcnsx, mahang, tenhang);
	a.xuathang();
return 0;	
}
