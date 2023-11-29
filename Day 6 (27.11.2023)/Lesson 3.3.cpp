#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int findrandom (int a);
void arrange(int a[], int b);
int main(){
	int arrA[10000],arrB[10000];
	int j,l,n,ngaunhien;
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
//	cout<<arrB[0]<<endl;
//	cout<<arrB[n-1]<<endl;
	arrange(arrB,n);	
	cout<<"Gia tri nho thu 2 va lon thu 2 lan luot la:"<<arrB[1]<<" ;"<<arrB[n-2];
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
