// De bai 3x+5y+7z = 135. Giai bai tap tim cac bo nghiem cua phuong trinh (x,y,z >=0)
//Sau dó liet ke boi so chung nho nhat cua tung bo nghiem.
#include <iostream>
using namespace	std;
int max(int a, int b);
int findBSCNN(int a, int b, int c);
int main(){
	int	x,y,z;
	int i = 0;
	for (z=0; z <= 19; z++){
	for (y=0; y <= 27; y++){
	for (x=0; x <= 45; x++){
		if ((3*x+5*y+7*z)==135 && x!=0 && y!=0 && z!=0){		
		cout<<"Uoc so chung lon nhat cua bo ba nghiem x= "<<x<<" ;y= "<<y<<";z= "<<z<<" la: "<<findBSCNN(x,y,z)<<endl;
		}
		if ((3*x+5*y+7*z)==135 && (x==0 || y==0 || z==0)){
		cout << "Bo 3 nghiem x =" <<x<<";y="<<y<<";z="<<z<<" co boi so chung nho nhat la 0." <<endl;
		}
}
}
}	
	return 0;
}

int max(int a, int b){
	if(a>b)
	return a;
	return b;
}

int findBSCNN(int a, int b, int c){
	int bSCNN,gtmax;
	int i=0;
	gtmax = max(max(a,b),c);
	do{
	++i;	
	bSCNN = i*gtmax;
	}	
	while(bSCNN%a != 0 || bSCNN%b != 0 || bSCNN%c != 0 );
	return bSCNN;
}


		
