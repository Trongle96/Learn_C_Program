//Nhap 1 chuoi S va xuat ra man hinh.
//Nhap 1 chuoi M , xoa chuoi M neu M co trong S va in ket qua.
//Le Hoang Trong.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int  arrange (int a[]);
char sosanh (char a, char b);
int main(){
	string chuoiS, chuoiSmax;
	int numloop[1000];
	int n;
	int m,max;
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;	
	n = chuoiS.length();

	
	for (int k = 0; k < n; k++){
	numloop[k] = 0;	
	}

	for (int i = 0; i < n; i++){
	for (int j = 0; j < n; j++){
	if(chuoiS[i] == chuoiS[j]){
	numloop[i] = numloop[i] + 1;
}	
	}
	}	
//	for (int l = 0; l < n; l++){
//	cout<<chuoiS[l]<<" va "<<numloop[l]<<endl;
//	}
	max = arrange(numloop);
	
	chuoiSmax[0] = '\0';
	m = 1;
	for (int l = 0; l < n; l++){
	if (numloop[l] == max){ 
	chuoiSmax[m] = sosanh(chuoiSmax[m-1],chuoiS[l]);
	m++;
	}
	}
	
	
	for (int h = 0; h < m-1; h++){
	cout<<"Ky tu "<< chuoiSmax[h] << endl;
	}
	return 0;	
}


int arrange (int a[]){
	int n , k;
	int temp;
	n = sizeof(a);sizeof(int);
	for(int i = 0; i < n - 1; i++){
	for(int j = 1; j < n ; j++){
	if(a[i] > a[j]){
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;		
	}
	}	
} 
	k = a[n-1];
	return k;	
}
char sosanh (char a, char b){
	if(a == b)
	return '\0';
	return b;
}
	
	
	
	



