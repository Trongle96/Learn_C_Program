#include <iostream>
#include <vector>
#include <string>
using namespace std;
class SinhVien
{
//	private:
	public :
		int maSv;
		string hoTen;
		double diemToan;
		double diemLy;
		double diemHoa;
		vector <SinhVien> data;
		
//	public:
		
		SinhVien () {}
		void nhap()
		{
			SinhVien a;
			cout<<"Nhap ma sinh vien: "<<endl;
			cin>> this -> maSv;
			cout<<"Nhap Ho va ten sinh vien: "<<endl;
			cin.ignore();
			getline(cin, this -> hoTen);
			cout<<"Nhap diem Toan: "<<endl;
			cin>> this -> diemToan;
			cout<<"Nhap diem Ly: "<<endl;
			cin>> this -> diemLy;
			cout<<"Nhap diem Hoa: "<<endl;
			cin>> this -> diemHoa;
			
			a.maSv = this -> maSv;
			a.hoTen = this -> hoTen;
			a.diemToan = this -> diemToan;
			a.diemLy = this -> diemLy;
			a.diemHoa = this -> diemHoa;
			
			this -> data.push_back(a);
		}
		
		
		double sumDiem()
		{
			double sum;
			sum = this -> diemToan + this -> diemLy + this -> diemHoa;	
			return sum;
		}
		
		void xuat()
		{
			cout<<"Danh sach sinh vien la: "<<endl;
			for(int i = 0; i < this -> data.size() ; i++)
			{
			cout<<"Ma sinh vien: "<<(this -> data[i]).maSv<<endl;
			cout<<"Ho va ten sinh vien la: "<<(this -> data[i]).hoTen<<endl;
			cout<<"Diem Toan: "<<(this -> data[i]).diemToan<<endl;
			cout<<"Diem Ly: "<<(this -> data[i]).diemLy<<endl;
			cout<<"Diem Hoa: "<<(this -> data[i]).diemHoa<<endl;
			cout<<"Tong diem la: "<<(this -> data[i]).sumDiem()<<endl;
			}
		}
		
		friend void sxDiem(vector <SinhVien> &a)
		{	
			SinhVien temp;
						
			for(int i = 0; i < a.size() -1 ; i++)
			{
				for (int j = i+1; j < a.size(); j++)
				{
					if((a[i].sumDiem() < a[j].sumDiem()))
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;	
					}
				}
			}
			
			cout<<a[0].hoTen;
		}
		
};
int main()
{
	SinhVien list;
	int n;
	
	cout<<"Nhap vao so sinh vien can nhap thong tin: "<<endl;
	cin>> n;
	
	for(int i = 0; i < n ; i++)
    {
		list.nhap();
	}
	
	cout<<list.data[0].hoTen;
	
	sxDiem(list.data);
	
	cout<<list.data[0].hoTen;	
	
	
	
//	list.xuat();		
}

	
	
