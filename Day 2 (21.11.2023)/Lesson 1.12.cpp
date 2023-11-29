// De bai tinh tong S = 1^2+2^2+3^2+....+N^2.
#include <stdio.h>
#include <math.h>
int sum (int a);
int main(){
	int n; // n là so nguyen nhap vao.
	printf("Nhap vao mot so nguyen N>0:");
	scanf("%d",&n);
	printf("Tong cua day so tu 1 toi N là: %d",sum(n));
	return 0;	
	}
int sum (int a){
	if (a==0)
	return 0;
	return (pow(a,2) + sum (a-1));
}

// Ap dung de quy trong C va ket hop goi ham de tinh tong tuong tu bai truoc nhung ket hop thu vien math va ham pow de tinh so mu.

