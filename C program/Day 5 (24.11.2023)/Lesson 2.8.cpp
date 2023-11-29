// De bai 3x+5y+7z = 135. Giai bai tap tim cac bo nghiem cua phuong trinh (x,y,z >=0)
//Sau dó liet ke uoc so chung lon nhat cua tung bo nghiem.
#include <iostream>
using namespace	std;
int *uocso(int n);
int souoc(int c);
int findUSCmax (int a[],int b[], int c[],int d, int e, int f);
int main(){
	int	x,y,z,k;
	int max,min;
	int a[1000];
	int i = 0;
	int *arrX, *arrY, *arrZ;
	int	 manguocX[1000],manguocY[1000], manguocZ[1000]; 	

	for (z=0; z <= 19; z++){
	for (y=0; y <= 27; y++){
	for (x=0; x <= 45; x++){
		if ((3*x+5*y+7*z)==135 && x!=0 && y!=0 && z!=0){
		arrX = uocso(x);
	for (int l=0; l < souoc(x); l++){
		manguocX[l]=*(arrX+l);
		} 
		arrY = uocso(y);
	for (int m=0; m < souoc(y); m++){
		manguocY[m]=*(arrY+m);
		} 
		arrZ = uocso(z); 
	for (int n=0; n < souoc(z); n++){
		manguocZ[n]=*(arrZ+n);
		} 	
	cout<<"Uoc so chung lon nhat cua bo ba nghiem x= "<<x<<" ;y= "<<y<<";z= "<<z<<" la: "<<findUSCmax(manguocX,manguocY,manguocZ,souoc(x),souoc(y),souoc(z))<<endl;
	}
		if ((3*x+5*y+7*z)==135 && (x==0 || y==0 || z==0)){
		cout << "Bo 3 nghiem x =" <<x<<";y="<<y<<";z="<<z<<" khong co uoc so chung." <<endl;
		}
	}
}
}	
	return 0;
}

int *uocso(int n){
	int a[1000];
	int l=0;
	for (int i = 1; i<=n ; i++){
	if(n%i==0){
	a[l]=i;	
	l++;
	}	
	}
	return a;	
}
int souoc(int c){
	int j=0;
	for (int i = 1; i<=c ; i++){
	if(c%i==0){
	j++;	
	}	
	}
	return j;	
}
int findUSCmax (int a[],int b[], int c[], int d, int e, int f){
	int uscmax = 0;
	for (int i = d-1 ;i >=0; i-- ){
	for (int j = e-1 ;j >=0; j-- ){
	for (int k = f-1 ;k >=0; k--){ 
	if(a[i]==b[j]&&b[j]==c[k]){
	return uscmax = c[k];	
	break;
	}
}
	if (uscmax != 0){
	break;	
	}
}
	if (uscmax != 0){
	break;
}
}
}


		
