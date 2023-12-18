#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Document
{
	public:
	string randomString;
	
	Document()	{};
	Document(string st)	: randomString(st) {};
	
	int countChar()
	{
	 	int numString, count;
	 	numString = randomString.length();
	 	cout<<numString<<endl;
	 	count = 0;
	 	for (int i = 0; i < numString; i++)
	 	{
	 		if(randomString[i] != ' ')
	 		{
	 			count++;
		    }
		}
		return count;
	}
	
	int countCharA()
	{
	 	int numString, count;
	 	numString = randomString.length();
	 	count = 0;
	 	for (int i = 0; i < numString; i++)
	 	{
	 		if(randomString[i] == 'a' || randomString[i] == 'A')
	 		{
	 			count++;
		    }
		}
		return count;
	}
	
	 string trim()
	 {
	 	int numString;
	
		while(randomString[0] == ' ' || randomString[randomString.size() -1] == ' ')
		{
			if(randomString[0] == ' ')
			{
				randomString.erase(randomString.begin());
			}
			
			if(randomString[randomString.size() - 1]  == ' ')
			{
				randomString.erase(randomString.begin()+ randomString.size() - 1);
			}
		}
		
		for (int i = 0; i < randomString.size() - 1;i++)
		{
			if(randomString[i] == ' ' && randomString[i + 1] == ' ' )
			{
				randomString.erase(randomString.begin()+i);
				i--;
			}
		}
		return randomString;
	}	
};	

int main()
{
	string temp1;
	cout<<"Nhap 1 chuoi ky tu bat ky: "<<endl;
	getline(cin,temp1);
	Document stringX(temp1);
	cout<<"So tu trong chuoi vua nhap la: "<<stringX.countChar()<<endl;	
	cout<<"So ky tu A trong chuoi vua nhap la: "<<stringX.countCharA()<<endl;
	cout<<"Chuoi vua nhap sau khi duoc chuan hoa la:"<<stringX.trim()<<endl;
	return 0;
}
