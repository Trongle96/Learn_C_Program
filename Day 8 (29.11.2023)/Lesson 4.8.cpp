//Nhap 1 chuoi S. Nhap vao 1 chuoi T va xem chuoi T xuat hien bao nhieu lan trong mang S.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string chuoiS, chuoiT,chuoicheck;		
	int n,num,nT;
	
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;	
	n = chuoiS.length();
	
	cout<< "Nhap vao chuoi T:";
	getline(cin,chuoiT);
	
	nT = chuoiT.length();
	
	num = 0;
	
	for (int i = 0; i < n +1 - nT ; i++){
	chuoicheck ="\0";	
	for (int j = i; j < i + nT; j++){
	chuoicheck += chuoiS[j];
	}
	if(chuoicheck == chuoiT){
	num++;	
	}	
	}	
	
	cout<<"Chuoi T lap lai "<<num<<" lan trong chuoi S.";		
	
	return 0;	
}




	
	
	
	



