#include <iostream>
#include <string>
using namespace std;
class Sinhvien{
	public:
	int masv;
	string ten;
	int tuoi;
	double diem;
	Sinhvien();
	static int count;
	Sinhvien(int masv, string ten, int tuoi, double diem){
	cout<<"=============================="<<endl;
	cout<<"Thong tin cua sinh vien thu: "<<count<<" la:"<<endl;
	this -> masv = masv;
	this -> ten = ten;
	this -> tuoi = tuoi;
	this -> diem = diem;
	count++;
	}
	void xuatinfo(){
	cout<<"Ma sinh vien: "<<this -> masv<<endl;
	cout<<"Ho va ten: "<<this -> ten<<endl;
	cout<<"Tuoi: "<<this -> tuoi<<endl;
	cout<<"Diem: "<<this -> diem<<endl;
	}
};
	
	int Sinhvien :: count = 1;
	
int main(){
	Sinhvien a(1,"Trong",27,8.5);
	a.xuatinfo();
	Sinhvien b(2,"Viet",24,9.5);
	b.xuatinfo();
return 0;
}
