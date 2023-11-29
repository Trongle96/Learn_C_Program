// De bai kiem tra xem thu so N co phai la so tang hay so giam hay la so khong tang khong giam (vd 951 la so giam).
#include <stdio.h>
#include <math.h>
enum Type{
	tang,
	giam,
	ktkg,
};
int lsn (int n, int j);// hàm lay tung chu so cua so N
void inkq (enum Type ketqua);// ham in ket qua so N la so tang hay so giam

int main(){
	int n,i,j,k,l,z; // n la so nguyen nhap vao
	int luythua;
	int a[100];// Muc dich lam mang tap hop cac chu so theo thu tu cua so N nhap vao chuong trinh.
	enum Type ketqua; //Bien enum dc tao de kiem tra.
    printf("Nhap vao 1 so nguyen N > 0:");
	scanf("%d",&n);
	j=0;
	i=n;
	while(i>0){
	i/=10;
	j++;	
	}
//	printf("So N co %d chu so",j);
	k=0;
	// Day la luc lay tung chu so cua n thanh mang so nguyen theo thu tu tuong ung.
		while (j>0){
	a[k]=lsn(n,j);
	n = n - lsn(n,j)*pow(10,j-1);
	k++;
	j--;
	}
//	 Day la luc so sanh de xem N la so tang , so giam hay khong tang khong giam.
	if(a[0]<a[k-1]){
	for(int m =1; m <= k-1;m++){
	if (a[m-1]<a[m]){
	ketqua = tang;
	}
	else{
	ketqua = ktkg;
	break;
	}
	}
}
	else{
	for(int m =1; m <= k-1;m++){
	if (a[m-1]>a[m]){
	ketqua = giam;
	}
	else{
	ketqua = ktkg;
	break;
	}
	}
}
	inkq (ketqua);
	return 0;
}

int lsn (int n, int j){
	int luythua;
	luythua = pow(10,j-1);
	return n/luythua;
}
void inkq (enum Type ketqua){
	switch(ketqua){
	case tang:
	printf("N la so tang");
	break;
	case giam:
	printf("N la so giam");	
	break;
	case ktkg:
	printf("N la so khong tang khong giam");
	break;	
	}
}

// Kien thuc ap dung : sau khi dùng vòng lap while de tim duoc gia tri j la so chu so cua n
// Khai bao va dinh nghia ham lay so nguyen lsn, ket hop thu vien math va ham pow de tinh luy thua
// Gan k = 0 truoc vong lap va k = k + lsn(n,j) muc dich de tinh tong cac so nguyen lay dc
/* Gan n = n - lsn(n,j)*pow(10,j-1) muc dich de lam thay doi tham so n qua tung lap giam j de lam thay doi tham so ham lsn(n,j) nham lay lan luot
cac chu so cua n cho den khi het vong lap */
// Tao 1 mang a va dung for de gan cac phan tu cua a la cac chu so cua N theo thu tu
/* Thuc hien cau lenh if else (neu phan tu dau < phan tu cuoi xet tiep tuc cac phan tu giua neu duy tri thi bien enum = tang neu khong thi la ko tang
cung ko giam tuong tu voi truong hop phan tu dau > phan tu cuoi de lay truong hop bien enum = giam hoac ko tang ko giam)*/
// Tao san 1 ham xet ket qua dua tren gia tri cua bien enum ben tren.
// Bai tap nay ket hop viec goi ham va them bien enum
