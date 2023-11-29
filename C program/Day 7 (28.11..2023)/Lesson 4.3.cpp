//Nhap 1 chuoi S va xuat ra man hinh.
//In ra tat cac cac lan xuat hien cua cac ky tu trong chuoi S.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string chuoiS;
	int n;
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;	
	n = chuoiS.length();
	for (int i = 0; i < n ; i++){
	cout << chuoiS[i] <<endl;	
	
	}
return 0;
}


