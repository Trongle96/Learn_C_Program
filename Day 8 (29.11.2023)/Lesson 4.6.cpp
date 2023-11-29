//Nhap 1 chuoi S va xuat ra man hinh.
//Tim ky tu xuat hien it nhat trong mang S.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int  arrange (int a[], int b);
int main(){
	string chuoiS, chuoiSmin;
	int numloop[1000];
	int n;
	int m,min;
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
	
	min = arrange(numloop,n);
	chuoiSmin[0] = '\0';
	m = 1;
	for (int l = 0; l < n; l++){
	if (numloop[l] == min){ 
	chuoiSmin[m] = chuoiS[l];
	for (int c = 0; c <m ; c++){
	if(chuoiSmin[c] == chuoiS[l]){
	chuoiSmin[m] = '\0';
	}
	}
	m++;
	} 	
}	
	for (int d = 0; d < m; d++){
	if(chuoiSmin[d] != '\0'){
	cout<<"Ky tu "<<chuoiSmin[d]<<" xuat hien it nhat voi "<<min<<" lan."<<endl;
	}
}
	return 0;	
}


int arrange (int a[],int b){
	int k;
	int temp;
	for(int i = 0; i < b - 1; i++){
	for(int j = 1; j < b ; j++){
	if(a[i] < a[j]){
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;		
	}
	return k = a[j];
	}
} 	
}

	
	
	
	



