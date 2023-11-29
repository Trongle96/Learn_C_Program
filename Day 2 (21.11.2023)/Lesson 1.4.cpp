// De bai tinh tong cac chu so cua N ví du N = 123 tính S = 1+2+3.
#include <stdio.h>
#include <math.h>
int lsn (int n, int j);// hàm lay tung chu so cua so N
int main(){
	int n,i,j,k,l; // n la so nguyen nhap vao
	int luythua;
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	j=0;
	i=n;
	while(i>0){
	i/=10;
	j++;	
	}
	k=0;
	while (j>0){
	k=k+lsn(n,j);
	n = n - lsn(n,j)*pow(10,j-1);	
	j--;
	}
	printf("Tong cua cac chu so cua N là: %d",k);
	return 0;
}
int lsn (int n, int j){
	int luythua;
	luythua = pow(10,j-1);
	return n/luythua;
}

// Kien thuc ap dung : sau khi dùng vòng lap while de tim duoc gia tri j la so chu so cua n
// Khai bao va dinh nghia ham lay so nguyen lsn, ket hop thu vien math va ham pow de tinh luy thua
// Gan k = 0 truoc vong lap va k = k + lsn(n,j) muc dich de tinh tong cac so nguyen lay dc
/* Gan n = n - lsn(n,j)*pow(10,j-1) muc dich de lam thay doi tham so n qua tung lap giam j de lam thay doi tham so ham lsn(n,j) nham lay lan luot
cac chu so cua n cho den khi het vong lap */
/* printf gia tri k sau khi chay xong vong lap chinh là gia tri tong ta can tinh.*/
