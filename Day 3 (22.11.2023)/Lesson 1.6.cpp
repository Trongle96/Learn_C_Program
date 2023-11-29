// Tìm so dao nguoc cua N vi du (N= 123 thi T = 321);
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int lsn (int n, int j);// hàm lay tung chu so cua so N
int tich (int a, int b);

int main(){
	int n,i,j,k; // n la so nguyen nhap vao
	int luythua,sum;
	int a[k];// Muc dich lam mang tap hop cac chu so theo thu tu cua so N nhap vao chuong trinh.
	printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	j=0;
	i=n;
	
	while(i>0){
	i/=10;
	j++;	
	}
	k=0;
	while(j>0){
	a[k]=lsn(n,j);
	n = n - lsn(n,j)*pow(10,j-1);
	j--;
	k++;
	}
	sum = 0;
	for(int l=k;l>0;l--){
	luythua = pow(10,l-1);
	sum = sum + tich(a[l-1],luythua);
	}
	printf("\nSo nghich dao cua so N la: %d",sum);			
	return 0;
}

int lsn (int n, int j){
	int luythua;
	luythua = pow(10,j-1);
	return n/luythua;
}
int tich (int a, int b){
	return a*b;
}


	


	


