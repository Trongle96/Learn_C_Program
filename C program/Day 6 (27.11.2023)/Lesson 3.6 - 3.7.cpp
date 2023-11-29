//De bai in cac cap so doi xung trong mang ngau nhien A da tao.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int findrandom (int a);
void arrange(int a[], int b);
int checknum (int n);
int main(){
	int arrA[10000],arrB[10000];
	int mangB[10000] , b;
	int j,l,n,ngaunhien,soK;
	srand(time(0));
	cout << "Nhap n = ";
	cin >> n;
	j = 11;	
	for (int i = 0;i<9989;i++){
	arrA[i]	= j;
	j++;	
	}
	l=9988;	
	for (int k = 0; k<n; k++){
	ngaunhien = findrandom(l);	
	arrB[k] = arrA[ngaunhien];
//	cout<<"arrB["<<k<<"]"<<arrB[k]<<endl;
	if(ngaunhien != l){
	arrA[ngaunhien] = arrA[l];
}
	l--;
	}
	arrange(arrB,n);	
	cout<<"Nhap so nguyen K bat ky trong khoang tu 11 - 9999: k=";
	cin >> soK;
	for (int e = 0; e < n; e++){
	if(arrB[e]>=soK){
	cout<<"So k can chen vao vi tri mang arrB["<<e<<"]";
	}
	}
	return 0;
}

void arrange(int a[], int b){
	int trunggian;
	for(int i = 0; i < b-1; i++){
	for(int j = i+1; j < b; j++){
	if (a[i] > a[j]){
	trunggian = a[i];
	a[i] = a[j];
	a[j] = trunggian;
	}
	}	
	}
}
	
int findrandom (int a){
	
	int r;
	r = rand()%(a+1);
	return r;
}


int checknum (int n){
	int j=0, i = n,k;
	int numdaonguoc;
	int a[1000];
	while(i>0){
	i/=10;	
	j++;	
	}
	k=0;
	while (j>0){
	a[k] = n/pow(10,j-1);
	n = n - (a[k]*pow(10,j-1));
	k++;
	j--;
	}
	numdaonguoc = 0;
	for(int m = k-1; m >=0 ; m--){
	numdaonguoc = numdaonguoc + a[m]*pow(10,m);
}
	return numdaonguoc;
}
