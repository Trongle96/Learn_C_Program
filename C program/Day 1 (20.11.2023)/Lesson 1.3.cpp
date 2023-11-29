// De bai so N co bao nhieu chu so.

#include <stdio.h>
int tong (int a[], int i);
int main(){
	int n,i,j,k; // n la so nguyen nhap vao
	int s,s2;// s là tong
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	j=0;
	i=n;
	while(i>0){
	i/=10;
	j++;	
	}	
	printf("So n nhap vao co %d chu so",j);		
	return 0;
}

// Kien thuc ap dung : su dung vong lap while cung nhu if break de thoat lenh.	

