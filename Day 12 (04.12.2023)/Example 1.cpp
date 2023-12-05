/*Thiet lap lop Phanso de bieu dien khai niem phan so voi hai thanh phan du lieu tu so, mau so 
va cac ham thanh phan cong, tru, nhan, chia hai phan so va cac ham thanh phan xuat, nhap, dinh gia tri
cho phan so. Viet chuong trinh cho phep nhap vao hai phan so, in ra ket qua cac phep toan cong, tru, nhan, 
chia hai phan so ke tren */
#include <iostream>
using namespace std;
enum Hienthi{
	showps,
	showtong,
	showhieu,
	showtich,
	showthuong
};
class Phanso{
	public:
 	int tuso;
	int mauso;
	Phanso(int tuso, int mauso){
	this -> tuso = tuso;
	this -> mauso = mauso;
}
	void showphanso(enum Hienthi a){
	switch(a){
	
	case showps:	
	cout<<"Phan so duoc tao la: "<<this -> tuso<<"/"<<this -> mauso<<endl;
	break;
	case showtong:
	cout<<"Tong hai phan so la: "<<this -> tuso<<"/"<<this -> mauso<<endl;
	break;
	case showhieu:
	cout<<"Hieu hai phan so la: "<<this -> tuso<<"/"<<this -> mauso<<endl;	
	break;
	case showtich:
	cout<<"Tich hai phan so la: "<<this -> tuso<<"/"<<this -> mauso<<endl;	
	break;
	case showthuong:
	cout<<"Thuong hai phan so la: "<<this -> tuso<<"/"<<this -> mauso<<endl;	
	break;	
	}
}
	void toigian(Phanso a){
	int uscln,b,c;
	
	b = a.tuso;
	c = a.mauso;
	while (b != c){
	if(b > c){
	b -= c;
	}
	else{
	c -= b;
	}	
	}
	uscln = b;
	a.tuso /= uscln;
	a.mauso /= uscln;
	this -> tuso = a.tuso;
	this -> mauso = a.mauso;
	}
	
	void congphanso (Phanso a, Phanso b){
	if( a.mauso == b.mauso){
	this -> tuso = (a.tuso + b.tuso);
	this -> mauso = a.mauso;
	}
	else{
	this -> tuso= (a.tuso * b.mauso + a.mauso * b.tuso);
	this -> mauso = (a.mauso * b.mauso);	
	}
	}	
	
	
	void truphanso (Phanso a, Phanso b){
		
	if(a.mauso == b.mauso){
	if(a.tuso > b.tuso){
	this -> tuso = 	a.tuso - b.tuso;
	this -> mauso = a.mauso;
	}
	else{
	this -> tuso = b.tuso - a.tuso;
	this -> mauso = a.mauso;
	}		
}	
	
	else{
	if(a.tuso * b.mauso > a.mauso * b.tuso ){
	this -> tuso = a.tuso * b.mauso - a.mauso * b.tuso;
	this -> mauso = a.mauso * b.mauso;
 	}	
	else{
	this -> tuso = a.mauso * b.tuso - a.tuso * b.mauso;
	this -> mauso = a.mauso * b.mauso;	
	}
}
	
}	
	
	
	void nhanphanso (Phanso a, Phanso b){
	this -> tuso = a.tuso * b.tuso;
	this -> mauso = a.mauso * b.mauso;
	}
	
	void chiaphanso (Phanso a, Phanso b){
	this -> tuso = a.tuso * b.mauso;
	this -> mauso = a.mauso * b.tuso;
	}
	
};
	
int main(){
	int a1,a2;
	int b1,b2;
	Phanso c(0,0),d(0,0),e(0,0),f(0,0);
	
	cout<<"Nhap vao lan luot tu so va mau so cua phan so 1: "<<endl;
	cin>>a1;
	cin>>a2;
	cout<<"Nhap vao lan luot tu so va mau so cua phan so 2: "<<endl;
	cin>>b1;
	cin>>b2;
	
	Phanso a = Phanso(a1,a2);
	a.toigian(a);
	a.showphanso(showps);
	Phanso b = Phanso(b1,b2);
	b.toigian(b);
	b.showphanso(showps);
	c.congphanso(a,b);
	c.toigian(c);
	c.showphanso(showtong);
	d.truphanso(a,b);
	d.toigian(d);
	d.showphanso(showhieu);
	e.nhanphanso(a,b);
	e.toigian(e);
	e.showphanso(showtich);
	f.chiaphanso(a,b);
	f.toigian(f);
	f.showphanso(showthuong);
return 0;			
}



