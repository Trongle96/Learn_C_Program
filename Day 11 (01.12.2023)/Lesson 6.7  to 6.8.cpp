//Nhap danh sach n sinh vien. Xep loai diem ren luyen va diem trung binh cua sinh vien.

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
char maxlrl;
string xltb;
char maxltb;	
};

string xeploaiRL (int a);
char maxeploaiRL (int a);
string xeploaiTB (double a);
char maxeploaiTB (double a);


int main(){
	int n;
	char mxlrl, mxltb;
	int arrmaxrl[100],arrmaxtb[100];
	string xlRL;

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
	
	
	for (int i = 0; i< n ; i++){
	sinhvien[i].xlrl = xeploaiRL(sinhvien[i].rl_grade);
	sinhvien[i].xltb = xeploaiTB(sinhvien[i].tb_grade);	
	sinhvien[i].maxlrl = maxeploaiRL(sinhvien[i].rl_grade);
	sinhvien[i].maxltb = maxeploaiTB(sinhvien[i].tb_grade);	
	}
	
	cout<<"Nhap ma xep loai diem ren luyen de loc danh sach sinh vien: "<<endl;
	cin>>mxlrl;
	for (int i =0 ; i < n ; i++){
	cout<<"Stt"<<"\t"<<"Ho va ten"<<"\t"<<"MSSV"<<"\t"<<"Lop"<<"\t"<<"Diem RL"<<"\t"<<"Diem TB"<<"\t"<<"Xep loai RL"<<"\t"<<"Xep loai diem TB"<<endl;	
	if(sinhvien[i].maxlrl == mxlrl){
	cout<<i+1<<"\t"<<sinhvien[i].name<<"\t"<<sinhvien[i].id<<"\t"<<sinhvien[i].lop<<"\t"<<sinhvien[i].rl_grade<<"\t"<<sinhvien[i].tb_grade<<"\t"<<sinhvien[i].xlrl<<"\t"<<sinhvien[i].xltb<<endl;	
	}
}
	
	cout<<"Nhap ma xep loai diem trung binh de loc danh sach sinh vien: "<<endl;
	cin>>mxltb;
	
	for (int i =0 ; i < n ; i++){
	cout<<"Stt"<<"\t"<<"Ho va ten"<<"\t"<<"MSSV"<<"\t"<<"Lop"<<"\t"<<"Diem RL"<<"\t"<<"Diem TB"<<"\t"<<"Xep loai RL"<<"\t"<<"Xep loai diem TB"<<endl;	
	if(sinhvien[i].maxltb == mxltb){
	cout<<i+1<<"\t"<<sinhvien[i].name<<"\t"<<sinhvien[i].id<<"\t"<<sinhvien[i].lop<<"\t"<<sinhvien[i].rl_grade<<"\t"<<sinhvien[i].tb_grade<<"\t"<<sinhvien[i].xlrl<<"\t"<<sinhvien[i].xltb<<endl;	
	}
}
return 0;	
}


string xeploaiRL (int a){
	if(a>=90){
	return "Xuat sac";
	}
	if(a>= 80 && a < 90){
	return "Gioi";
	}
	if(a>= 70 && a < 80){
	return "Kha";}
    if(a>=50 && a < 70){
	return "TB";}
	if(a<50){
	return "Yeu";
	}	
}

char maxeploaiRL (int a){
	if(a>=90){
	return 'X';
	}
	if(a>= 80 && a < 90){
	return 'G';
	}
	if(a>= 70 && a < 80){
	return 'K'; }
    if(a>=50 && a < 70){
	return 'T';}
	if(a<50){
	return 'Y';
	}	
}

string xeploaiTB (double a){
	if(a>=9.0){
	return "Xuat sac";
	}
	if(a>= 8.0 && a < 9.0){
	return "Gioi";
	}
	if(a>= 7.0 && a < 8.0){
	return "Kha";}
	
    if(a>=5.0 && a < 7.0){
	return "TB";}
	
	if(a<5.0){
	return "Yeu";
	}	
}

char maxeploaiTB (double a){
	if(a>=9.0){
	return 'X';
	}
	if(a>= 8.0 && a < 9.0){
	return 'G';
	}
	if(a>= 7.0 && a < 8.0){
	return 'K';}
    if(a>=5.0 && a < 7.0){
	return 'T';}
	if(a<50){
	return 'Y';
	}	
}








