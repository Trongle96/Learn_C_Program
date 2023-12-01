//De bai Nhap vao 1 mang 2 chieu n dong va m cot.
//Xuat ma tran ra man hinh.
//Tim va in ra cac so nguyen to co trong ma tran A.
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
	numsnt = 0;
	for (int c = 0; c < n; c++){
	for (int d = 0; d < m; d++){
	if(checkSNT(arrA[c][d]) >= 2){
	snt[numsnt] = checkSNT(arrA[c][d]);
	numsnt++;
	}
	}
	}
	for (int c = 0 ; c < numsnt - 1; c++ ){
	for (int d = c + 1; d < numsnt; d++){
	if (snt[c] != 0 && snt[d] != 0 && snt[c] == snt[d]){
	snt[d] = 0;		
	}
	} 	
}
	cout<<"Cac so nguyen to trong ma tran vua tao la: "<<endl;
	for (int e = 0; e < numsnt; e++){
	if (snt[e] != 0){
	cout << snt[e] << " "; 
	}	
	}
	
return 0;	
}

int checkSNT (int a){
	int k;
	if (a < 2){
	k = a;	
	}
	else if(a > 2){
	for (int i = 2; i < a; i++){
	if(a%i == 0){
    k = 0;
	break;
	}	
	else{
    k = a;
	}
	}
}
	else {
    k = 2;	
	}
	return k;
	}
	
	
