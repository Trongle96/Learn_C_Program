/*Xay dung lop bieu dien khai niem so phuc voi hai thanh phan du lieu thuc, ao va cac ham thanh phan xuat, nhap, dinh gia tri
cho so phuc cong, tru, nhan, chia hai so phuc. Viet chuong trinh cho phep nhap vao hai so phuc, in ra ket qua cac phep toan cong,
tru, nhan, chia hai so phuc ke tren */
#include <iostream>
using namespace std;
enum Hienthi{
	showsp,
	showtong,
	showhieu,
	showtich,
	showthuong
};
class Sophuc{
	public:
 	double phanthuc;
	double phanao;
	Sophuc(double phanthuc, double phanao){
	this -> phanthuc = phanthuc;
	this -> phanao = phanao;
}
	void showso(enum Hienthi a){
	switch(a){
	
	case showsp:	
	cout<<"So phuc duoc tao la: "<<this -> phanthuc<<","<<this -> phanao<<endl;
	break;
	case showtong:
	cout<<"Tong hai so phuc la: "<<this -> phanthuc<<","<<this -> phanao<<endl;
	break;
	case showhieu:
	cout<<"Hieu hai so phuc la: "<<this -> phanthuc<<","<<this -> phanao<<endl;	
	break;
	case showtich:
	cout<<"Tich hai so phuc la: "<<this -> phanthuc<<","<<this -> phanao<<endl;	
	break;
	case showthuong:
	cout<<"Thuong hai so phuc la: "<<this -> phanthuc<<","<<this -> phanao<<endl;	
	break;	
	}
}
		
	void cong(Sophuc a, Sophuc b){
	this -> phanthuc = a.phanthuc + b.phanthuc;
	this -> phanao = a.phanao + b.phanao;
}
		
	void tru(Sophuc a, Sophuc b){
	this -> phanthuc = a.phanthuc - b.phanthuc;
	this -> phanao = a.phanao - b.phanao;
				
}	
	
		
	void nhan(Sophuc a, Sophuc b){
	this -> phanthuc = a.phanthuc * b.phanthuc - a.phanao * b.phanao;
	this -> phanao = a.phanthuc * b.phanao + a.phanao * b.phanthuc;
	}
	
	void chia(Sophuc a, Sophuc b){
	this -> phanthuc = (a.phanthuc * b.phanthuc + a.phanao * b.phanao) / (b.phanthuc * b.phanthuc + b.phanao * b.phanao);
	this -> phanao = (b.phanthuc * a.phanao - a.phanthuc * b.phanao) / (b.phanthuc * b.phanthuc + b.phanao * b.phanao);
	}
	
	
};
	
int main(){
	int a1,a2;
	int b1,b2;
	Sophuc c(0,0),d(0,0),e(0,0);
	
	
	cout<<"Nhap vao lan luot phan thuc va phan ao cua so phuc 1: "<<endl;
	cin>>a1;
	cin>>a2;
	cout<<"Nhap vao lan luot phan thuc va phan ao cua so phuc 2: "<<endl;
	cin>>b1;
	cin>>b2;
	
	Sophuc a(a1,a2);
	a.showso(showsp);
	Sophuc b(b1,b2);
	b.showso(showsp);
	c.cong(a,b);
	c.showso(showtong);
	d.tru(a,b);
	d.showso(showhieu);
	e.nhan(a,b);
	e.showso(showtich);
	Sophuc f(0,0);
	f.chia(a,b);
	f.showso(showthuong);
	
return 0;			
}



