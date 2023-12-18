#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Customer
{
	string name;
	int apartmentNum;
	int electricityMeterId;
	
	public:
		
	void input()
	{
		cout<<"Nhap ten chu ho: "<<endl;
		getline(cin,name);
		cout<<"Nhap so nha: "<<endl;
		cin>>apartmentNum;
		cout<<"Nhap ma so cong to dien: "<<endl;
		cin>>electricityMeterId;
	}
	
	void output()
	{
		cout<<"Ten chu ho: "<<name<<endl;
		cout<<"So nha: "<<apartmentNum<<endl;
		cout<<"Ma so cong to dien: "<<electricityMeterId<<endl;
	}	
	
	void adjust()
	{
		
		int y;
		cout<<"Nhap thong tin muon sua (0: Ten chu ho ;1: So nha ;2: Ma so cong to dien): "<<endl;
		cin>>y;
		switch(y)
		{
			case 0:
			cout<<"Nhap lai ten chu ho: "<<endl;
			cin.ignore();
			getline(cin,name);
			break;
			case 1:
			cout<<"Nhap lai so nha: "<<endl;
			cin>>apartmentNum;
			case 2:
			cout<<"Nhap lai ma so cong to dien: "<<endl;
			cin>>electricityMeterId;
		}
		
	}
	int getID()
	{
		return this -> electricityMeterId;
	}
	friend void eraseData(vector <Customer> &array, int x)
	{
		for (int i = 0; i < array.size(); i++)
		{
			if(array[i].electricityMeterId == x)
			{
				array.erase(array.begin()+i);
			}
		}
	}
};

class Bill
{
	Customer data;
	double newElectricityIndex;
	double oldElectricityIndex;
	
	public:
	
	void input()
	{
		data.input();
		cout<<"Nhap chi so dien moi: "<<endl;
		cin>>newElectricityIndex;
		cout<<"Nhap chi so dien cu: "<<endl;
		cin>>oldElectricityIndex;
		cin.ignore();
	}
	
	void output()
	{
		data.output();
		cout<<"Chi so dien moi la: "<<newElectricityIndex<<endl;
		cout<<"Chi so dien cu la: "<<oldElectricityIndex<<endl;
		cout<<"Tien dien thang nay la: "<<this -> electricityBill()<<endl;
	}
	
	double electricityBill()
	{
		return (newElectricityIndex - oldElectricityIndex)*5;
	}
	 
	Customer getData()
	{
		return this -> data;
	}
};

int main()
{
	vector <Bill> arrayBill;
	vector <Customer> arrayCustomer;
	Bill tempBill;
	Customer tempCustomer;
	int eraseID, adjustID;
	int n;
	cout<<"Nhap so luong bill:  "<<endl;
	cin>>n;
	cin.ignore();
	for (int i = 0 ; i < n; i++)
	{
		tempBill.input();
		arrayBill.push_back(tempBill);
		arrayCustomer.push_back(tempBill.getData());
	}
	for (int i = 0 ; i < arrayBill.size(); i++)
	{
		arrayBill[i].output();
	}
	
	cout<<"Nhap ma so cong to dien de dieu chinh thong tin ho gia dinh: "<<endl;
	cin>>adjustID;
	
	for (int i = 0 ; i < arrayCustomer.size(); i++)
	{
		if(	arrayCustomer[i].getID() == adjustID)
		{
			arrayCustomer[i].adjust();
		}
	}
	
	for (int i = 0 ; i < arrayCustomer.size(); i++)
	{
		arrayCustomer[i].output();
	}
	cout<<"Nhap ma so cong to dien de xoa thong tin ho gia dinh: "<<endl;
	cin>>eraseID;
	eraseData(arrayCustomer , eraseID);
	
	for (int i = 0 ; i < arrayCustomer.size(); i++)
	{
		arrayCustomer[i].output();
	}
	return 0;	
}


