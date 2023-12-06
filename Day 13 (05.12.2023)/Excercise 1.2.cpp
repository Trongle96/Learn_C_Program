#include <iostream>;
#include <string>;
using namespace std;
class Hchunhat{
	  public:
	  int dai;
	  int rong;
	  Hchunhat(int dai, int rong){
	  this -> dai = dai;
	  this -> rong = rong;	
	  }
	  void vechunhat(){
	  cout<<"Hinh chu nhat x duoc ve nhu sau: "<<endl;
	  for(int i = 1; i <= this -> rong; i++){
	  		for(int j = 1; j <= this -> dai; j++){
	  			if (i == 1 || i == this -> rong){
	  			cout<<"* ";	
				}
				else if ( i != 1 && i != this -> rong && (j == 1 || j == this -> dai)){
				cout<<"* ";	
				}
				else{
				cout<<"  ";	
				}	
				} 
	 			cout<<endl;
	  		}	
		}
	  
		
	  void tinhS(){
	  cout<<"Dien tich hinh chu nhat la: "<<(this -> dai * this -> rong)<<endl;	
	   }
	  
	  void tinhP(){
	  cout<<"Chu vi hinh chu nhat la: "<< (this -> dai + this -> rong)*2<<endl;
	  }
	
};
int main(){
	 int dai, rong;
	 cout<<"Nhap vao chieu dai hinh chu nhat x: "<<endl;
	 cin>>dai;
	 cout<<"Nhap vao chieu rong hinh chu nhat x: "<<endl;
	 cin>>rong;
	 Hchunhat x(dai,rong);
	 x.vechunhat();
	 x.tinhS();
	 x.tinhP();
return 0; 
}

