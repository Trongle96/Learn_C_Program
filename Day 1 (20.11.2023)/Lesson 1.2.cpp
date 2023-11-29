// De bai kiem tra N co phai la so nguyen to.

#include <stdio.h>
int main(){
	int n,a; // n la so nguyen nhap vao, a la ket qua cua n chia 2 lay phan du
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	if(n==1){
	printf("So n khong phai la so nguyen to");
}
	else{
	for(int i = 2; i<n; i++){
	a = n%i;
	if(a==0){
	printf("So N la khong phai la so nguyen to");
	break;
	}
	else{
	printf("So N la la so nguyen to ");	
	break;
	}
}
}
	return 0;
}

// Kien thuc ap dung su dung hai cau lenh if else long nhau voi if else thu nhat nham xac dinh neu N = 1 thi khong phai so nguyen to và if else thu hai 
ket hop vong lap for xac dinh trong khoang tu 2 den N thì neu N chia het cho bat ky so nao thi N khong phai so nguyen to va nguoc lai.

