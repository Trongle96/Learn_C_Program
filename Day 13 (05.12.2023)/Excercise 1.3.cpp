#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Hanghoa{
	  public:
	  int mahang;
	  string tenhang;
	  int dongia;
	  int soluong;
	  
	  vector <Hanghoa> data;
	  
	  Hanghoa() {}
	   
	  void nhapinfo(int mahang, string tenhang, int dongia, int soluong){
	  Hanghoa a;
	  a.mahang = mahang;
	  a.tenhang = tenhang;
	  a.dongia = dongia;
	  a.soluong = soluong;
	  	 
	  this -> data.push_back(a);
	}
	  void xuatinfo(){
	  cout<<"--------------------------------"<<endl;
	  cout<<"Ma hang: "<<this -> mahang<<endl;
	  cout<<"Ten hang: "<<this -> tenhang<<endl;
	  cout<<"Don gia: "<<this -> dongia<<endl;
	  cout<<"So luong: "<<this -> soluong<<endl;
	  cout<<"Thanh tien: "<<(this -> soluong) * (this -> dongia)<<endl;
	  }
	
};	

int main(){
	int n,mahang,dongia,soluong;
	string tenhang;
	
	Hanghoa list;
	cout<<"Nhap vao so luong mat hang: "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++){
	cout<<"Nhap vao mat hang thu "<<i+1<<endl;
	cout<<"Nhap ma hang: "<<endl;
	cin>>mahang;
	cout<<"Nhap ten hang: "<<endl;
	cin.ignore();
	getline(cin,tenhang);
	cout<<"Nhap don gia: "<<endl;
	cin>>dongia;
	cout<<"Nhap so luong: "<<endl;
	cin>>soluong;
	list.nhapinfo(mahang,tenhang,dongia,soluong);
	}
	for(int i = 0; i < n; i++){
	(list.data[i]).xuatinfo();	
	}
return 0;	
}	  
	  
	  

