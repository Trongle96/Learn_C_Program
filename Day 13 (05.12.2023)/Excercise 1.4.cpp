#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Sach{
	  public:
	  int masach;
	  string tensach;
	  string nxb;
	  int sotrang;
	  int giatien;
	  
	  vector <Sach> data;
	  
	  Sach() {}
	   
	  void nhapinfo(int masach, string tensach, string nxb, int sotrang, int giatien){
	  Sach a;
	  a.masach = masach;
	  a.tensach = tensach;
	  a.nxb = nxb;
	  a.sotrang = sotrang;
	  a.giatien = giatien;
	  	 
	  this -> data.push_back(a);
	}
	  void xuatinfo(){
	  cout<<"--------------------------------"<<endl;
	  cout<<"Ma sach: "<<this -> masach<<endl;
	  cout<<"Ten sach: "<<this -> tensach<<endl;
	  cout<<"Nha xuat ban : "<<this -> nxb<<endl;
	  cout<<"So trang: "<<this -> sotrang<<endl;
	  cout<<"Gia tien: "<<this -> giatien<<endl;
	  }
	
};	

int main(){
	int n,masach,sotrang,giatien;
	string tensach;
	string nxb;
	
	Sach list;
	cout<<"Nhap vao so luong sach: "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++){
	cout<<"Nhap vao thong tin sach thu "<<i+1<<endl;
	cout<<"Nhap ma sach: "<<endl;
	cin>>masach;
	cout<<"Nhap ten sach: "<<endl;
	cin.ignore();
	getline(cin,tensach);
	cout<<"Nhap nha xuat ban sach: "<<endl;
	getline(cin,nxb);
	cout<<"Nhap so trang: "<<endl;
	cin>>sotrang;
	cout<<"Nhap gia tien: "<<endl;
	cin>>giatien;
	list.nhapinfo(masach, tensach, nxb, sotrang, giatien);
	}
	for(int i = 0; i < n; i++){
	(list.data[i]).xuatinfo();	
	}
return 0;	
}	  
	  
	  

