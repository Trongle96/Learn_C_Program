#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
	protected:
	string hoTen;
	string ngaySinh;
	string queQuan;
};

class Kysu : public Person
{
	private:
	string nganh;
	int namTN;
	
	public:
	
	Kysu()	{}
	void nhap()
	{
		cout<<"Nhap Ho va ten: "<<endl;
		cin.ignore();
		getline(cin, Person :: hoTen);
		cout<<"Nhap ngay sinh: "<<endl;
		getline(cin, Person :: ngaySinh);
		cout<<"Nhap que quan: "<<endl;
		getline(cin,Person :: queQuan);
		cout<<"Nhap nganh hoc cua ky su: "<<endl;
		getline(cin, this -> nganh);
		cout<<"Nhap nam tot nghiep cua : "<<endl;
		cin>>namTN;
	}
	
	void xuat()
	{
		cout<<"========================================="<<endl;
		cout<<"Thong tin ve ky su: "<<endl;
		cout<<"Ho va ten: "<<Person :: hoTen<<endl;
		cout<<"Ngay sinh: "<<Person :: ngaySinh<<endl;
		cout<<"Que quan: "<<Person :: queQuan<<endl;
		cout<<"Nganh hoc la: "<<this -> nganh<<endl;
		cout<<"Nam tot nghiep: "<<this -> namTN<<endl;
	}
	
	void xuat(int max)
	{
		if(this -> namTN == max)
		{				
		cout<<"========================================="<<endl;
		cout<<"Thong tin ve ky su: "<<endl;
		cout<<"Ho va ten: "<<Person :: hoTen<<endl;
		cout<<"Ngay sinh: "<<Person :: ngaySinh<<endl;
		cout<<"Que quan: "<<Person :: queQuan<<endl;
		cout<<"Nganh hoc la: "<<this -> nganh<<endl;
		cout<<"Nam tot nghiep: "<<this -> namTN<<endl;
		}
	}
	
	
	int arrange(vector <Kysu> &a)
	{
		Kysu temp;
		int max;
		for(int i = 0 ; i < a.size() - 1 ; i++)
		{
			for(int j = i + 1; j < a.size() ; j++)
				{
					if(a[i].namTN < a[j].namTN)
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;	
					}
				}
			max = a[0].namTN;	
		}
		return max;
	}
	
};




int main()
{
	Kysu x;
	vector <Kysu> ks;
	int k,n;
	int max;
	cout<<"Nhap so luong ky su can nhap thong tin: "<<endl;
	cin>>n;
	
	k = n;
	while (k >0)
	{
		x.nhap();
		
		ks.push_back(x);
		
		k--; 
	}
	
	max = x.arrange(ks);
	
	for (int i = 0; i < n; i++)
	{
		ks[i].xuat(max);
	}
	
	return 0;	
}

