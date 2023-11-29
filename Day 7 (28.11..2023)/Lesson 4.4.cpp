//Nhap 1 chuoi S va xuat ra man hinh.
//Nhap 1 chuoi M , xoa chuoi M neu M co trong S va in ket qua.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string chuoiS, chuoiM;
	int m,n;
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;	
	n = chuoiS.length();
	
	cout<< "Nhap vao chuoi M:";
	getline(cin,chuoiM);
	cout<<"Chuoi M nhap vao la "<<chuoiM<<endl;
	
	m = chuoiM.length();
	
	for (int i = 0; i < m ; i++){
	for (int j = 0; j < n ; j++){
	if(chuoiM[i] == chuoiS[j]){
	chuoiM[i] = '\0';	
}
}
}
	cout<<"Chuoi M luc sau la "<<chuoiM<<endl;
return 0;
}


