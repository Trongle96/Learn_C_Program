//Nhap 1 chuoi S va xuat ra man hinh.
//Tim ky tu xuat hien nhieu nhat trong mang S.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int  arrange (int a[],int b);
int main(){
	string chuoiS, chuoiSmax;
	int numloop[1000];
	int n,nloop;
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
	max = arrange(numloop, n);
	chuoiSmax[0] = '\0';
	m = 1;	
	for (int l = 0; l < n; l++){
	if (numloop[l] == max){ 
	chuoiSmax[m] = chuoiS[l];
	for (int c = 0; c <m ; c++){
	if(chuoiSmax[c] == chuoiS[l]){
	chuoiSmax[m] = '\0';
	}
	}
	m++;
	} 	
}	
	for (int d = 0; d < m; d++){
	if(chuoiSmax[d] != '\0'){
	cout<<"Ky tu "<<chuoiSmax[d]<<" xuat hien nhieu nhat voi "<<max<<" lan."<<endl;
	}
}
	return 0;	
}


int arrange (int a[],int b){
	int k;
	int temp;
	for(int i = 0; i < b - 1; i++){
	for(int j = 1; j < b ; j++){
	if(a[i] > a[j]){
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;		
	}
	return k = a[j];
	}
} 	
}

	
	
	
	



