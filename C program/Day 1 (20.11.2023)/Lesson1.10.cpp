// Bài tap liet ke tat ca cac so nguyen to trong day tu 1 toi N
#include <stdio.h>
#include <stdbool.h>
int main(){
	int n,a; // n la so nguyen nhap vao;
	bool kiemtrasonguyento;
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	if(n==1){
	printf("Day so tu 1 den n khong co so nguyen to");
	}
	else if(n==2){
	printf("Day so tu 1 den n co 1 so nguyen to la so 2");
}
	else {
	printf("Day so tu 1 den n co day so nguyen to là: 2,");	
	for(int i=3; i<=n ; i++){
	for(int j=2; j<i;j++){
	if(i%j==0){
	kiemtrasonguyento = false;	
	break;}
	else {
	kiemtrasonguyento = true;
	}	
	}
	if(kiemtrasonguyento == true ){
	printf("%d,",i);
	}
	}	
	}		
	return 0;
}

/*Kien thuc ap dung 
Dau tien dung if else de lay hai truong hop dac biet la n = 1 thi ko phai so nguyen to va n =2 la so nguyen to chan duy nhat
Xong ket hop hai vong for long nhau de vong lap for ben trong la kiem tra dieu kien tu 2 den i thi co so nao la uoc so cua i khong
neu thoa man thi i khong phai la so nguyen to nen gan bien boolean kiem tra so nguyen to = false va nguoc lai, vong lap ngoai la muc dich in ra
so nguyen to i neu bien boolean thoa man dieu kien true, va vong lap se ket thuc khi i = N.


