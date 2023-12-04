//Nhap danh sach n sinh vien. Tim sinh vien theo ma so sinh vien.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Student{
string name;
int id;
string lop;
int rl_grade;
double tb_grade;
string xlrl;
string xltb;	
};


int main(){
	int n,mssv;

	Student sinhvien[100];	

	cout<<"Nhap so luong so sinh vien: ";
	cin>>n;

	for (int i = 0 ;  i < n ; i++){
	cout<<"Nhap ten sinh vien thu "<<i+1<<":"<<endl;
	cin.ignore();
	getline(cin,sinhvien[i].name);
	cout<<"Nhap MSSV sinh vien thu "<<i+1<<":"<<endl;
	cin>>sinhvien[i].id;	
	cout<<"Nhap lop cua sinh vien thu "<<i+1<<":"<<endl;
	cin>>sinhvien[i].lop;	
	cout<<"Nhap diem RL cua sinh vien thu "<<i+1<<":"<<endl;
	cin>>sinhvien[i].rl_grade;	
	cout<<"Nhap diem TB cua sinh vien thu "<<i+1<<":"<<endl;
	cin>>sinhvien[i].tb_grade;	
	};
	
	cout<<"Nhap ma so sinh vien de tim kiem: "<<endl;
	cin>>mssv;
	
	for (int i =0 ; i < n ; i++){
	if (sinhvien[i].id == mssv){
		cout<<"Stt"<<"\t"<<"Ho va ten"<<"\t"<<"MSSV"<<"\t"<<"Lop"<<"\t"<<"Diem RL"<<"\t"<<"Diem TB"<<endl;
		cout<<i+1<<"\t"<<sinhvien[i].name<<"\t"<<sinhvien[i].id<<"\t"<<sinhvien[i].lop<<"\t"<<sinhvien[i].rl_grade<<"\t"<<sinhvien[i].tb_grade<<endl;	
	}
}
	
return 0;	
}











