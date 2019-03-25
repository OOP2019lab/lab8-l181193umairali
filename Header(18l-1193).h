#include<iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	//static string monthNames[1];
	Date();
	Date(int ,int ,int );
	Date(const Date &object);
	friend ostream  &operator<<(ostream &out,Date &obj){
		out<<obj.month<<" "<<obj.day<<" "<<obj.year;
		return out;
	}
	
	

	friend bool operator ==(const Date &a1,const Date&a2);
	friend istream &operator>>(istream &in,Date &obj){
		cout<<"Input date :"<<endl;
	
		in>>obj.day;
		cout<<"Input month :"<<endl;
		in>>obj.month;
		cout<<"Input yaer :"<<endl;
		in>>obj.year;
		return in;

	}
	friend Date &operator+(Date &obj2,int no);
	Date &operator--();
	//Date &operator--(int c);
	//int Date::operator[](int num);
};
	//
	//date &operator++();

	
	
		