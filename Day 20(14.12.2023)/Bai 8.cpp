#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student
{
	string name;
	int age;
	int cLass;	
	
	public: 
	
	void input()
	{
		cout<<"Nhap Ho va ten sinh vien muon sach: "<<endl;
		getline(cin,name);
		cout<<"Nhap tuoi: "<<endl;
		cin>>age;
		cout<<"Nhap lop: "<<endl;
		cin>>cLass;
	}
	
		void output()
	{
		cout<<"Ho va ten sinh vien muon sach: "<<name<<endl;
		cout<<"Tuoi: "<<age<<endl;
		cout<<"Lop: "<<cLass<<endl;
	}
	
};

class RentTag
{
	int tagID;
	int dayRent;
	int period;
	int bookID;
	Student student;
	
	public:
	
	void input()
	{
		cout<<"Nhap ma phieu muon: "<<endl;
		cin>>tagID;
		cout<<"Nhap ngay muon sach: "<<endl;
		cin>>dayRent;
		cout<<"Nhap han tra sach: "<<endl;
		cin>>period;
		cout<<"Nhap so hieu sach: "<<endl;
		cin>>bookID;
		cin.ignore();
		student.input();
	}
	
	void output()
	{
		cout<<"<<Thong tin ve ma phieu muon>>"<<endl;
		cout<<"Ma phieu muon: "<<tagID<<endl;
		cout<<"Nhap ngay muon sach: "<<dayRent<<endl;
		cout<<"Nhap han tra sach: "<<period<<endl;
		cout<<"Nhap so hieu sach: "<<bookID<<endl;
		student.output();
	}
	
	int getTagID()
	{
		return this -> tagID;
	}
	
	static void erase_Student(vector <RentTag> &array, int tagid)
	{
		for (int i = 0 ; i < array.size(); i++)
			{
				if(array[i].getTagID() == tagid)
				{
					array.erase(array.begin()+i);
				}
			}
	}
	
};

int main()
{
	vector <RentTag> array;
	RentTag temp;
	int num;
	int tagid;
	cout<<"Nhap so luong ma phieu muon sach: "<<endl;
	cin>>num;
	for(int i = 0; i < num; i++) // Nhap thong tin the muon va day vao mang phieu muon
	{
		cout<<"Nhap thong tin phieu muon sach thu "<<i+1<<endl;
		temp.input();
		array.push_back(temp);
	}
	
	for(int i = 0; i < array.size(); i++) // xuat thong tin phieu muon
	{
		array[i].output();
	}
	
	cout<<"Nhap ma phieu muon sach muon xoa: "<<endl;
	cin>>tagid;
	RentTag :: erase_Student (array,tagid);

	for(int i = 0; i < array.size(); i++) // xuat thong tin phieu muon
	{
		array[i].output();
	}	
	
	return 0;
};

