#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	string birth;
	string address;
	
	public:
	
	Person() {}
	void input()
	{
		cout<<"Nhap Ho va ten: "<<endl;
		getline(cin, this -> name);
		cout<<"Nhap ngay sinh: "<<endl;
		getline(cin, this -> birth);
		cout<<"Nhap dia chi: "<<endl;
		getline(cin, this -> address);			
	}
	
	void output()
	{
		cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"Ho va ten la: "<<this -> name<<endl;
		cout<<"Ngay sinh la: "<<this -> birth<<endl;
		cout<<"Dia chi noi o la: "<<this -> address<<endl;
	}		
};

class School
{
	public:
	string name;
	string date;
};

class Faculty
{	public:
	string name;
	string date;
	School x;
};

class Student : public Person
{
	Faculty y;
	int cLass;
	double score;
	
	public:
	
	Student() {}
	
	void input()
	{
		Person :: input();
		cout<<"Nhap ten truong hoc: "<<endl;
		getline(cin,y.x.name);
		cout<<"Nhap ngay thanh lap truong: "<<endl;
		getline(cin,y.x.date);
		cout<<"Nhap ten khoa dang hoc: "<<endl;
		getline(cin,y.name);
		cout<<"Nhap ngay thanh lap khoa: "<<endl;
		getline(cin,y.date);		
		cout<<"Nhap lop: "<<endl;
		cin>> this -> cLass;
		cout<<"Nhap diem so: "<<endl;
		cin>> this -> score;			
	};
	
	void output()
	{
		Person :: output();
		cout<<"Truong dang hoc la: "<<y.x.name<<endl;
		cout<<"Ngay thanh lap truong la: "<<y.x.date<<endl;
		cout<<"Khoa dang hoc la: "<<y.name<<endl;
		cout<<"Ngay thanh lap khoa la: "<<y.date<<endl;
		cout<<"Lop dang hoc la: "<<this -> cLass<<endl;
		cout<<"Diem so la: "<<this -> score<<endl;		
	}	
	
};

int main()
{
		Student x;
		x.input();
		x.output();
		return 0;		
}
