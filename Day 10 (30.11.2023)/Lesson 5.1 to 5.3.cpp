//De bai Nhap vao 1 mang 2 chieu n dong va m cot.
//Xuat ma tran ra man hinh.
//Nhap vao 1 so nguyen K va kiem tra K nam o vi tri nao trong ma tran.
#include <iostream>
using namespace std;

int main(){
	int n,m,k;
	int arrA[100][100];
	
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
	cout<<"Nhap vao 1 so nguyen K = ";
	cin>>k;
	for (int c = 0; c < n; c++){
	for (int d = 0; d < m; d++){
	if(arrA[c][d] == k){
	cout<<"So "<<k<<" xuat hien tai vi tri dong "<<c+1<<" cot "<<d+1<<endl;	
	}	
	}
}
		
return 0;	
}



