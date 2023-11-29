//Nhap 1 chuoi S. xoa ta ca ky tu khoang trang thua tu dau , giua va cuoi giua cac tu trong chuoi

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

	for (int i = 0; i < n; i++){
	if(chuoiS[i] == ' '){
	chuoiS.erase(i,1);
	i--;
	n--;
	}
}
	cout<<"Chuoi S moi sau khi loai ky tu trang la: "<<chuoiS;
	return 0;	
}




	
	
	
	



