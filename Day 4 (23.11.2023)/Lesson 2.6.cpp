// De bai 3x+5y+7z = 135. Giai bai tap tim cac bo nghiem cua phuong trinh (x,y,z >=0)
#include <iostream>
using namespace	std;
void inbonghiem (int x, int y, int z);
int main(){
	int	x,y,z;
	for (z=0; z <= 19; z++){
	for (y=0; y <= 27; y++){
	for (x=0; x <= 45; x++){
		if ((3*x+5*y+7*z)==135){
		inbonghiem(x,y,z);	
		}
	}	
	}
	}
	return 0;
}
void inbonghiem (int x, int y, int z){
	 cout<< "Bo nghiem x,y,z lan luot la: "<<"x = "<<x<<"; "<<"y = "<<y<<"; "<<"z = "<<z<<"\n";
}
