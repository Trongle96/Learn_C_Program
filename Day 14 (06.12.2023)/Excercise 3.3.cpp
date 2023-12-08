#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Hang{
	  public:
	  int mahang;
	  string tenhang;
	  int dongia;
	  int soluong;
	  
	    vector<Hang> data;
	
		void nhaphang (int mahang, string tenhang, int dongia){
		Hang a;	  
	  	a.mahang = mahang;
	  	a.tenhang = tenhang;
	  	a.dongia = dongia;	 
	  	this -> data.push_back(a);
	}

	
	void xuatinfo(int n){
		for(int i = 0; i < n; i++){
		cout<<"---Thong tin cua mat hang la---"<<endl;
		cout<<"Ma hang la: "<<this -> data[i].mahang<< endl;
		cout<<"Ten mat hang la: "<<this -> data[i].tenhang << endl;
		cout<<"Don gia la: "<<this -> data[i].dongia<<endl;	
	}
}	
};

class Phieu: public Hang{
   	public:
   	int maphieu;
   	   	   	
   	void nhapphieu(int maphieu){ 
   	 	 this -> maphieu = maphieu;   		
		 }
	void xuatinfophieu(int n){
		cout<<"Ma phieu la: "<<this -> maphieu<<endl;
		Hang :: xuatinfo(n);

}
};
int main(){
	int n_phieu, n_hang;
	int mahang, dongia, maphieu;
	string tenhang;
	Phieu arr[100];

	int check;
	
	cout<<"Nhap so phieu can nhap thong tin : "<<endl;
	cin>>n_phieu;
	for (int i = 0; i < n_phieu; i++){
	cout<<"Nhap ma so phieu: "<<endl;
	cin>>maphieu;	
	cout<<"Nhap so mat hang tren phieu: "<<endl;
	cin>>n_hang;
	arr[i].soluong = n_hang;
	arr[i].nhapphieu(maphieu);
		for (int j = 0; j < n_hang; j++){
		cout<<"Nhap ma hang la: "<<endl;	
		cin>>mahang;
		cout<<"Nhap ten mat hang la: "<<endl;
		cin.ignore();
		getline(cin,tenhang);
		cout<<"Nhap don gia la: "<<endl;
		cin>>dongia;
	    arr[i].nhaphang(mahang, tenhang, dongia);
		}
		}
	
	cout<<"Nhap ma phieu can kiem tra thong tin: "<<endl;
	cin>>check;
	
	for (int i =0; i < n_phieu; i++){
		if(arr[i].maphieu == check){
		arr[i].xuatinfophieu(arr[i].soluong);
		}
}
return 0;
}
	
	

