//De bai Nhap vao 1 mang 2 chieu n dong va m cot.
//Xuat ma tran ra man hinh.
//Tính Trung bình cong tat ca cac gia tri cua ma tran
#include <iostream>
using namespace std;
int main(){
	int n,m,k,sum,tbc;
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
	sum = 0;
	for (int k = 0; k < n; k++){
	for (int l = 0; l < m; l++){
	sum+=arrA[k][l];
	}
}	
	tbc = sum/(n*m);
	cout<<"Gia tri trung binh cong cua ma tran la: "<<tbc<<endl;
		
return 0;
}



	
