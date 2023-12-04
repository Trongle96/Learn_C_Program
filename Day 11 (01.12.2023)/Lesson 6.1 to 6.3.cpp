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
};
int max (int a[],int b);

int main(){
	int n,gtmax,gttbmax;
	int arrmaxrl[100],arrmaxtb[100];

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
	cout<<"Stt"<<"\t"<<"Ho va ten"<<"\t"<<"MSSV"<<"\t"<<"Lop"<<"\t"<<"Diem RL"<<"\t"<<"Diem TB"<<endl;
	for (int i =0 ; i < n ; i++){
	cout<<i+1<<"\t"<<sinhvien[i].name<<"\t"<<sinhvien[i].id<<"\t"<<sinhvien[i].lop<<"\t"<<sinhvien[i].rl_grade<<"\t"<<sinhvien[i].tb_grade<<endl;	
	}
	for (int i = 0; i< n ; i++){
	arrmaxrl[i] = sinhvien[i].rl_grade;
	arrmaxtb[i] = sinhvien[i].tb_grade;		
	}
	
	gtmax = max (arrmaxrl,n);
	
	gttbmax = max(arrmaxtb,n);
//	cout<<gtmax;
	
	for (int i = 0; i< n ; i++){
	if(arrmaxrl[i] == gtmax){
	cout<<"Sinh vien "<<sinhvien[i].name<<" co diem ren luyen lon nhat voi: "<<sinhvien[i].rl_grade<<" diem."<<endl;	
	}
	if(arrmaxtb[i] == gttbmax){
	cout<<"Sinh vien "<<sinhvien[i].name<<" co diem trung binh lon nhat voi: "<<sinhvien[i].tb_grade<<" diem."<<endl;	
	}				
	}

return 0;	
}

int max (int a[],int b){
	int max;
	for (int i = 0; i < b-1; i++){
	for (int j = i+1; j < b; j++){
	
	if(a[i] > a[j]){
	max = a[i];	
	}
	else{
	max = a[j];
	}	
	}
}
	return max;
}







