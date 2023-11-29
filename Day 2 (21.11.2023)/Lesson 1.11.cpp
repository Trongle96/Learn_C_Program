// De bai tinh tong S = 1+2+3+....+N.
#include <stdio.h>
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
	return (a + sum (a-1));
}

// Ap dung de quy trong C va ket hop goi ham de tinh tong.

