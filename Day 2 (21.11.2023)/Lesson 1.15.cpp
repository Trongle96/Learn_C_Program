// De bai tim so nguyen to T > N gan N nhat.
#include <stdio.h>
int checkSNT (int n);
int main(){
	int n,a; // n là so nguyen nhap vao.
	printf("Nhap vao mot so nguyen N>0:");
	scanf("%d",&n);
	a=n+1;// tang n len de kiem tra so nguyen to lon hon N
	while (checkSNT(a)==1){
	a++;	
	}
	printf("So nguyen to gan nhat lon hon N la: %d",a);	
	return 0;
}
int checkSNT (int n){
	int a = 0;
	if(n<=1){
	return 1;
	}
	else{
	for(int i = 2; i<n; i++){
	if(n%i==0){
	a = 1;
	break;
	}
	}
	return a;
}
}
	



