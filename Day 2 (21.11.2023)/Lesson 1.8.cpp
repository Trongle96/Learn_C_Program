// Tìm chu so lon nhat, nho nhat cua N (Vd 951, 9 max va 1 min)
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int lsn (int n, int j);// hàm lay tung chu so cua so N
void doicho (int a[], int b , bool x);

int main(){
	int c,d,n,i,j,k,l,z; // n la so nguyen nhap vao
	int luythua;
	int a[k];// Muc dich lam mang tap hop cac chu so theo thu tu cua so N nhap vao chuong trinh.
	int b[]= {};
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
	doicho(a,k,true);
	printf("Gia tri lon nhat la %d va nho nhat la %d",a[k-1],a[0]);			
	return 0;
}

int lsn (int n, int j){
	int luythua;
	luythua = pow(10,j-1);
	return n/luythua;
}

void doicho (int a[] , int b , bool x){
	int trunggian;
	if (x==true){
	for (int i = 0; i < b-1; i++){
	for (int j = i+1; j < b; j++){
	if (a[i]	> a[j]){
	trunggian = a[i];
	a[i] = a [j];
	a[j] = trunggian;	
}
}
}
}
	else{
	for (int i =0; i < b-1; i++){
	for (int j = i+1; j < b; j++){
	if (a[i]<a[j]){
	trunggian = a[i];
	a[i] = a [j];
	a[j] = trunggian;
}
}
}
}
}

	


	


