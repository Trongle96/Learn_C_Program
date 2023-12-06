/*Xay dung lop Candidate (Thi sinh) gom cac thuoc tinh: ma, ten, ngay thang nam sinh, diem thi Toan, Van, Anh, va cac phuong thuc
can thiet.
Xay dung lop TestCandidate de kiem tra lop tren: 
- Nhap vao n thi sinh (n do nguoi dung nhap)
- In ra thong tin ve cac thi sinh co tong diem 3 mon lon hon 15.



#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TestCandidate;

class Candidate{
	  private:
	  int ma;
	  string ten;
	  string ngaysinh;
	 
	  double diemtoan;
	  double diemvan;
	  double diemanh;
	  
	  	  
	  
	  
	  public:
	  vector <Candidate> thisinh;
	  void nhapds(int ma, string ten, string ngaysinh, double diemtoan, double diemvan, double diemanh){
	  Candidate newts;	
	  newts.ma = ma;
	  newts.ten = ten;
	  newts.ngaysinh  = ngaysinh;
	  newts.diemtoan  = diemtoan;
	  newts.diemvan   = diemvan;
	  newts.diemanh   = diemanh; 
	  this -> thisinh.push_back(newts);
	  }
	  
	  void xuatds(){
	  cout<<"Ma thi sinh la: "<<this -> ma<<endl;
	  cout<<"Ho va ten  "<<this -> ten<<endl;
	  cout<<"Ngay sinh : "<<this -> ngaysinh<<endl;
	  cout<<"Diem toan: "<<this -> diemtoan<<endl;
	  cout<<"Diem van: "<<this -> diemvan<<endl;
	  cout<<"Diem anh: "<<this -> diemanh<<endl;	
	  }
	  
	friend class TestCandidate;
	
};

class TestCandidate {
	public:
	void checkmark(Candidate a){
	double sum;
	for (int i = 0; i < (a.thisinh).size() ;i++){
	sum = (a.thisinh)[i].diemtoan + (a.thisinh)[i].diemvan + (a.thisinh)[i].diemanh;
	if(sum > 15){
	(a.thisinh)[i].xuatds();
	}
	}
	}
};

int main(){
	int a,n,ma;
	string ngaysinh, ten;
	double diemtoan, diemvan, diemanh;
	Candidate nhapthisinh;
	cout<<"Nhap vao so luong thi sinh: "<<endl;
	cin>>n;
	a = n+1;
	while(n>0){
	cout<<"Nhap thong tin thi sinh thu: "<<a-n<<endl;
	cout<<"Nhap ma thi sinh: "<<endl;
	cin>>ma;
	cout<<"Nhap Ho va ten: "<<endl;
	cin.ignore();
	getline(cin,ten);
	cout<<"Nhap ngay sinh: "<<endl;
//	cin.ignore();
	getline(cin,ngaysinh);
	cout<<"Nhap diem toan: "<<endl;
	cin>>diemtoan;
	cout<<"Nhap diem van: "<<endl;
	cin>>diemvan;
	cout<<"Nhap diem anh: "<<endl;
	cin>>diemanh;
	nhapthisinh.nhapds(ma,ten,ngaysinh,diemtoan,diemvan,diemanh);
	n--;
	}
	cout<<"Danh sach thi sinh co tong diem so lon hon 10: "<<endl;
	TestCandidate test;
	test.checkmark (nhapthisinh);	
return 0;	
	
}
