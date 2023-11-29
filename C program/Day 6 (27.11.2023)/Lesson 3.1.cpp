#include <iostream>
#include <cstdlib>
using namespace std;
int findrandom (int a);
int main(){
	int arrA[10000],arrB[10000];
	int j,l,n,ngaunhien;
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
return 0;
}
	
int findrandom (int a){
	srand(a);
	int r;
	r = rand()%(a+1);
	return r;
}
