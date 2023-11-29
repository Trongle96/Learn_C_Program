//De bai tao mot mang tuong tu cacg tao mang A da co va kiem tra mang B co phai la mang con cua A hay khong?
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int findrandom (int a);
void arrange(int a[], int b);
int checknum (int n);
int main(){
	int arrA[10000],arrB[10000], arrC[10000];
	int mangB[10000] , b,check;
	int j,j2,l,l2,n,ngaunhien, ngaunhienl2,soK;
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
	cout<<"arrB["<<k<<"]"<<arrB[k]<<endl;
	if(ngaunhien != l){
	arrA[ngaunhien] = arrA[l];
}
	l--;
	}
	arrange(arrB,n);	
	cout<<"Nhap so luong phan tu mang B de kiem tra:";
	cin >> b;
	j2=11;
	for (int i = 0;i<9989;i++){
	arrC[i]	= j2;
	j2++;	
	}
	l2=9988;
	for (int m = 0; m < b; m++){
	ngaunhienl2 = findrandom(l2);	
	mangB[m] = arrC[ngaunhienl2];
	cout<<"mangB["<<m<<"]"<<mangB[m]<<endl;
	if(ngaunhienl2 != l2){
	arrC[ngaunhienl2] = arrC[l2];
}
	l2--;
}
	if (b>n){
	cout<<"Mang B vua tao khong phai la mang con cua mang A da tao.";	
	}
	else{
	check = 0;	
	for(int g = 0 ; g < b; g++){
	for(int h = 0 ; h < n; h++){
	if (mangB[g] == arrB[h]){
	check++;	
	}	
	}
	}
	if (check == b){
	cout<<"Mang B vua tao la mang con cua mang A da tao.";	
	}
	else {
	cout<<"Mang B vua tao khong phai la mang con cua mang A da tao.";	
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
