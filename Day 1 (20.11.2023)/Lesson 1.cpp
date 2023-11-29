// De bai nhap N > 0 kiem tra N la so chan hay le.
#include <stdio.h>
int main(){
	int n,a; // n la so nguyen nhap vao, a la ket qua cua n chia 2 lay phan du
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	a=n%2;
	if(a==0){
	printf("So N nhap vao la so chan");
	}
	else{
	printf("So N nhap vao la so le");
	}
	return 0;
}

// Kien thuc ap dung la dung ham scanf de luu du lieu nhap vao va van dung diêu kien if else va toan tu % chia lay phan du de xac dinh.

