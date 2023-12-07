#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Date{
	public:
	int ngay;
	int thang;
	int nam;
	
	Date(int ngay, int thang, int nam){
	this -> ngay = ngay;
	this -> thang = thang;
	this -> nam = nam;	
	}
	
	void xuatdate(){
	cout<<"Ngay vao cong ty la: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
	}
};

class Nhansu: public Date {
	public:
		
	int manhansu;
	string hoten;
	
	Nhansu(int ngay, int thang, int nam, int manhansu, string hoten) : Date(ngay,thang,nam){
	this -> manhansu = manhansu;
	this -> hoten = hoten;
	}	
	
	void xuatinfo(){
	cout<<"============================"<<endl;
	cout<<"Ma nhan su la: "<<manhansu<<endl;
	cout<<"Ho va ten la: "<<hoten<<endl;
	Date :: xuatdate();
	}
};

int main(){
	int ngay, thang, nam;
	int manhansu;
	string hoten;
	cout<<"Nhap vao ma nhan su: "<<endl;
	cin>>manhansu;
	cout<<"Nhap vao ho ten nhan su: "<<endl;
	cin.ignore();
	getline(cin,hoten);
	cout<<"Nhap ngay vao lam : ";
	cin>>ngay;
	cout<<"Nhap thang vao lam : ";
	cin>>thang;
	cout<<"Nhap nam vao lam : ";
	cin>>nam;
	cout<<endl;

	Nhansu x(ngay, thang ,nam, manhansu,hoten);
	x.xuatinfo();
return 0;		
}
