#include"Header.h"
//static string monthNames[13] = {  "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
Date::Date()
{
	day=1;
	month=1;
	year=2000;
}

Date::Date(int m,int d,int y)
		{
			if(d>0 && d<=30 ){
			day=d;
		 

			}
				else
					day=1;

			 if(m>0&&m<=12){

			month=m;
			}
			 else 
				 month=1;
			if(y>1000&&y<=9999)
				{
					year=y;
			}
		else 
			year=2000;
		}
bool operator==(const Date &a1,const Date&a2)
 {
		return a1.day==a2.day;
		return a1.year==a2.year;
		return a1.month==a2.month;
	 
	}
Date &operator+(Date &b1,int no)
{
	b1.day=b1.day+no;
	if(b1.day>30){
		b1.day =1;
	b1.month=b1.month+1;
	
	}
	if(b1.year>12){
		b1.year=b1.year+1;
	}
	return b1;
		
}
Date &Date::operator--(){
	day=day-1;
	if(day<1){
		month=month-1;
	}
	day=30;
	return *this;
}
//Date&Date::operator--(int c)
//{
//	 Date d=*this;
//	day=day-1;
//	if(day<1){
//		day=30;
//		month=month-1;
//	}
//	if(month<1){
//		year=year-1;
//	}
//	month=12;
//	
//	return d;
//}
//int Date::operator[](int num){
//	if(num>0 && num>12){
//		cout<<"Only index 0 1 and 2 are present :";
//	}
//	else 
//	{
//		if(num==0){
//			return day;
//		}
//if(num==1){
//	return month;
//}
//if(num==2){
//	return year;
//}
//	}