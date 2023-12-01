//De bai Nhap vao 1 mang 2 chieu n dong va m cot.
//Xuat ma tran ra man hinh.
//Tinh tong moi dong trong ma tran.
//Tinh tong moi cot trong ma tran.
#include <iostream>
using namespace std;
int checkSNT (int a);
int main(){
	int n,m,k;
	int arrA[100][100];
	int snt[100], numsnt;
	
	cout<<"Nhap so dong cua ma tran: ";
	cin>>n;
	cout<<"Nhap so cot cua ma tran: ";
	cin>>m;
	for (int i = 0; i < n; i++){
	for (int j = 0; j < m; j++){
	cout<<"Nhap arrA dong "<<i<<" cot "<<j<<" la: "<<endl;
	cin>>arrA[i][j]; 
	}	
}
	cout<<"Ma tran vua nhap la: "<<endl;
	for (int k = 0; k < n; k++){
	for (int l = 0; l < m; l++){
	cout<<arrA[k][l]<<" ";
	}
	cout<<endl;
}
	
	for ( int c = 0 ; c < n; c++){
	int sum = 0;	
	for ( int d = 0 ; d < m; d++){
	sum += arrA[c][d];	
	}
	cout<<"Tong cua dong thu "<<c+1<<" la: "<<sum<<endl;	
	}
	for ( int e = 0 ; e < m; e++){
	int sum2 = 0;	
	for ( int f = 0 ; f < n; f++){
	sum2 += arrA[f][e];	
	}
	cout<<"Tong cua cot thu "<<e+1<<" la: "<<sum2<<endl;	
	}
return 0;
}
	
