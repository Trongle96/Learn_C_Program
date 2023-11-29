// De bai tinh tong S = 2+4+6+....+N.
#include <stdio.h>
int sum (int a);
int main(){
	int n; // n là so nguyen nhap vao.
	printf("Nhap vao mot so nguyen N>0:");
	scanf("%d",&n);
	(n%2!=0) ? printf("Tong cua day so tu 1 toi N là: %d",sum(n)) : printf("Tong cua day so tu 1 toi N là: %d",sum(n+1)-1);
	return 0;	
	}
int sum (int a){
	if (a>0 && a%2!=0)
	return (a + sum (a-2));
	return 0;
}

// Ap dung de quy trong C va ket hop goi ham de tinh tong , co ket hop the dieu kien short hand if else de phan biet hai truong hop N la so le hoac chan.
