//Nhap 1 chuoi S va xuat ra man hinh.
//Ðem trong chuoi co bao nhieu ky tu viet hoa, thuong, so va ky tu khac.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
enum Type{
chuhoa,	
chuthuong,
kytuso,
kytudacbiet
};
int checkKTchuoi (string a,enum Type check);
int main(){
	string chuoiS;
	cout<< "Nhap vao chuoi S:";
	getline(cin,chuoiS);
	cout<<"Chuoi S nhap vao la "<<chuoiS<<endl;
	
	cout<<"Chuoi S vua nhap co so ky tu in hoa la:";
	cout<<checkKTchuoi(chuoiS,chuhoa)<<endl;
	cout<<"Chuoi S vua nhap co so ky tu in thuong la:";
	cout<<checkKTchuoi(chuoiS,chuthuong)<<endl;
	cout<<"Chuoi S vua nhap co so ky tu so la:";
	cout<<checkKTchuoi(chuoiS,kytuso)<<endl;
	cout<<"Chuoi S vua nhap co so ky tu dac biet la:";
	cout<<checkKTchuoi(chuoiS,kytudacbiet)<<endl;
	
return 0;		
}
int checkKTchuoi (string a,enum Type check){
	char alphabethoa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphabetthuong[] = "abcdefghijklmnopqrstuvwxyz";
	char number[] = "0123456789";
	int n, n_hoa, n_thuong, n_num, n_special;
	n = a.length();
	n_hoa = n_thuong = n_num = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 26; j++){
		if (a[i] == alphabethoa[j]){
		n_hoa++;	
		}	 
}
		for (int k = 0; k < 26; k++){
		if (a[i] == alphabetthuong[k]){
		n_thuong++;	
		} 	
		}
			
		for (int l = 0; l < 10; l++){
		if (a[i] == number[l]){
		n_num++;	
		} 	
		}
}
	n_special = n - n_hoa - n_thuong - n_num;
	switch (check){
	case chuhoa:
	return n_hoa;
	break;
		
	case chuthuong:
	return n_thuong;
	break;	
	
	case kytuso:
	return n_num;
	break;
	
	case kytudacbiet:
	return n_special;
	break;	
	} 
}


