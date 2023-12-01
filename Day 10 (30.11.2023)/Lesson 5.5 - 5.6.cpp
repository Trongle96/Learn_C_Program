//De bai Nhap vao 1 mang 2 chieu n dong va m cot.
//Xuat ma tran ra man hinh.
//Tinh gia tri lon nhat cua moi dong trong ma tran.
//Tinh gia tri nho nhat cua moi cot trong ma tran.
#include <iostream>
using namespace std;
int max (int a , int b);
int min (int a , int b);
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
	maxcl = arrA[c][0];
	for ( int d = 0 ; d < m - 1 ; d++){
	maxcl = max(max(arrA[c][d],arrA[c][d+1]),maxcl);
	}
	cout<<"Gia tri lon nhat cua dong thu "<<c+1<<" la: "<<maxcl<<endl;	
	}
	
	for ( int e = 0 ; e < m; e++){
	minr = arrA[0][e];	
	for ( int f = 0 ; f < n -1 ; f++){
	
	minr = min(min(arrA[f][e],arrA[f+1][e]),minr);	
	}
	cout<<"Gia tri nho nhat cua cot thu  "<<e+1<<" la: "<<minr<<endl;	
	}
	
return 0;
}

int max (int a , int b){
	if(a>b)
	return  a;
	return  b;
}
int min (int a , int b){
	if(a<b)
	return  a;
	return  b;
}

	
