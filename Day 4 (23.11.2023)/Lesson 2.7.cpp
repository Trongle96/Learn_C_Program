// De bai 3x+5y+7z = 135. Giai bai tap tim cac bo nghiem cua phuong trinh (x,y,z >=0)
//Sau dó liet ke bo nghiem co tong max va tong min.
#include <iostream>
using namespace	std;
enum Type{
tongmax,
tongmin,	
};
int sumbn (int x, int y, int z); // ham sum tinh tong bo nghiem
void sapxepmang (int a[], int b);// ham sap xep tu nho den lon
void inbonghiem (int x, int y, int z,enum Type w); // nham in ra bo nghiem lon nhat va nho nhat 
int main(){
	int	x,y,z,k;
	int max,min;
	int a[1000];
	int i = 0;
	enum Type sUM;
	for (z=0; z <= 19; z++){
	for (y=0; y <= 27; y++){
	for (x=0; x <= 45; x++){
		if ((3*x+5*y+7*z)==135){
		a[i] = sumbn(x,y,z);
		i++;	
	}
	}
}
}
	sapxepmang (a,i);
//	cout<<"Gia tri tong lon nhat la: "<<a[i-1];	
//	cout<< "\n";
//	cout<<"Gia tri tong nho nhat la: "<<a[0];
	max = a[i-1];
	min = a[0];
	for (z=0; z <= 19; z++){
	for (y=0; y <= 27; y++){
	for (x=0; x <= 45; x++){
		if ((3*x+5*y+7*z)==135 && x+y+z == max ){
		sUM = tongmax;	
		inbonghiem(x,y,z,sUM);
}
}
}
}
for (z=0; z <= 19; z++){
	for (y=0; y <= 27; y++){
	for (x=0; x <= 45; x++){
		if ((3*x+5*y+7*z)==135 && x+y+z == min ){
		sUM = tongmin;	
		inbonghiem(x,y,z,sUM);
}
}
}
}
	return 0;
}
	
int sumbn (int x, int y, int z){
	return x + y + z;
}
void sapxepmang (int a[], int b){
	int trunggian;
	for (int i = 0 ; i < b -1 ; i++){
	for (int j = i +1 ; j < b; j++){
	if (a[i]>a[j]){
	trunggian = a[i];
	a[i] = a[j];
	a[j] = trunggian;		
	}	
	}	
	}
}
void inbonghiem (int x, int y, int z, enum Type w){
	 switch (w){
	 case tongmax:	
	 cout<< "Bo nghiem co tong lon nhat x,y,z lan luot la: "<<"x = "<<x<<"; "<<"y = "<<y<<"; "<<"z = "<<z<<"\n";
	 break;
	 case tongmin:
	 cout<< "Bo nghiem co tong nho nhat x,y,z lan luot la: "<<"x = "<<x<<"; "<<"y = "<<y<<"; "<<"z = "<<z<<"\n";	
	 break;
}
}

		
