//Nhap 1 chuoi S. Huy n ki tu tu vi tri K trong chuoi S.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string chuoiS, chuoiT,chuoicheck;		
	int n,soK,soN,nT;
	
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;	
	n = chuoiS.length();

	
	cout<< "Nhap vao so nguyen N:";
	cin>> soN;
	
	cout<< "Nhap vao so nguyen K co gia tri < "<<n<<" :";
	cin>> soK;
	
	chuoiS.erase(soK-1,soN);
	
	cout<<chuoiS;
		
	
	return 0;	
}




	
	
	
	



