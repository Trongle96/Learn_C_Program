// Bài tap liet ke tat ca cac uoc so cua N.
#include <stdio.h>
int main(){
	int n; // n la so nguyen nhap vao
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	printf("Uoc so cua n là:");
	for(int i=1;i<=n;i++){
	if(n%i==0){
	printf("%d,",i);	
	}
	}
	return 0;
}

//Kien thuc ap dung tu vong lap for phoi hop cung toan tu chia lay phan du xet dieu kien chia ko du de lay uoc so cua N trong khoang tu 1 toi N

