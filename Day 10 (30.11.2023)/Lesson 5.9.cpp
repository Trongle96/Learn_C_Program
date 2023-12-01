//De bai Nhap vao 1 mang 2 chieu n dong va m cot.
//Xuat ma tran ra man hinh.
//Sap xep gia tri tang dan cua moi dong trong ma tran.
#include <iostream>
using namespace std;
void arrange (int a[100][100] , int b , int c);
int main(){
	int n,m,k, maxcl, minr;
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
	arrange(arrA, c ,m);	
	}
	cout<<"Ma tran sau khi sap xep lai tang dan la: "<<endl;
	for ( int d = 0 ; d < n; d++){
	for ( int e = 0 ; e < m; e++){
	cout<<arrA[d][e]<<" ";
}
	cout<<endl;
}
	
return 0;
}

void arrange (int a[100][100], int b, int c){

	 int temp;
	 for (int i = c; i > 0; i--){
	 for (int j = 0; j < i - 1; j++){
	 if(a[b][j] > a[b][j+1]){
	 temp = a[b][j];
	 a[b][j] = a[b][j+1];
	 a[b][j+1] = temp;
	 }
	 }	
	 } 	
	 
 }



	
