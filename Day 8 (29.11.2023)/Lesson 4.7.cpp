//Nhap 1 chuoi S. Nhap vao 1 chuoi T va 1 so nguyen K, chen chuoi T vao vi tri K trong chuoi S.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string chuoiS, chuoiT , chuoigop;
	string chuoiStruoc; 
	string chuoiSsau;
	
	int n,soK,nT;
	
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;	
	n = chuoiS.length();
	
	cout<< "Nhap vao chuoi T:";
	getline(cin,chuoiT);
	
	cout<<"Chuoi T nhap vao la "<<chuoiT<<endl;	
		
	cout<< "Nhap vao so nguyen K bat ky voi gia tri < "<<n<<" :";
	cin >> soK;
	
	for (int i = 0 ; i < soK; i++){
	chuoiStruoc += chuoiS[i];	
	}
		
	for (int j = soK ; j < n; j++){
	chuoiSsau += chuoiS[j];		
	}

	chuoigop = chuoiStruoc + chuoiT + chuoiSsau;	
	
	cout<< "Chuoi moi sau khi gop chuoi S va chuoi T la: " <<chuoigop<<endl;
			
	return 0;	
}




	
	
	
	



