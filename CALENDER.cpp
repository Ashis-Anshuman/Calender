#include <iostream>
using namespace std;
int first_year(int year)
{
	int day;
	day = (((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;        // For calculating first day of any month
	return day; 
}
int main ()
{
	string username;
	string password;
	do
	{
		cout<<"Enter username:";
		cin>>username;
		if(username=="Admin")
		{
			cout<<"Enter password:";
			cin>>password;
			system("cls");
			if(password=="admin@123")
			{
				cout<<"You logined successfully\n\n";
			}
			else
			{
				cout<<"Please enter the correct password\n";
			}
		}
		else
		{
			cout<<"Please enter the correct username\n";
		}
	}while(username!="Admin"||password!="admin@123");
	int year,day,week,a,month;
	int days_months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	string months[12]={"January","Frebuary","March","April","May","June","July","August","September","October","November","December"};
	cout<<"For showing full year Calender (press 1)\nFor showing specific month Calender (press 2)\nEnter whats you want:-";
	cin>>a;
	system("cls");
	if(a == 1)
	{
		cout<<"Enter the year:-";
		cin>>year;
	    if(year%4 == 0)
	    days_months[1] = 29;
	    day = first_year(year);
	    system("cls");
	    for (int i=0;i<=11;i++)
	    {
	    	cout<<"\n\n\t\t"<<months[i]<<", "<<year;
		    cout<<"\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";
		    for(int j=0;j<day;j++)
		    {
			    cout<<"      ";
		    }
		    week = day;
		    for(int m=1;m<=days_months[i];m++)
		    {
		    	if(m<=10)
			    {
				   cout<<"     ";
			    }
			    else
			    {
			    	cout<<"    ";
			    }
			    if(week > 6)
		    	{
			    	cout<<"\n    "<<m;
			    	week = 0;
			    }
			    else
			    cout<<m;
			    week++;
		    }
		    day=week;
		    
	   }
	   	if(year==2023)
{
	cout<<"\n\n\t-:THE HOLIDAY LISTS ARE:-";
   cout<<"\n\t  ---------------------";
   cout<<"  "<<endl;
   cout<<endl;
    cout<<"\t 01.01.2023-New year"<<endl; 
	cout<<"\t 26.01.2023-Republic Day"<<endl;
	cout<<"\t 22.03.2023-Chaitra sukladi"<<endl;
	cout<<"\t 04.04.2023-Mahabir jayanti"<<endl;
	cout<<"\t 07.04.2023-Good fri day"<<endl;
	cout<<"\t 22.04.2023-Id ul fiter"<<endl;
	cout<<"\t 05.05.2023-Budha purnima"<<endl;
	cout<<"\t 29.06.2023-Id ul juha"<<endl;
	cout<<"\t 29.07.2023-Mahuram"<<endl;
	cout<<"\t 15.08.2023-Indipendence day"<<endl;
	cout<<"\t 19.09.2023-Ganesh chaturthi"<<endl;
	cout<<"\t 28.09.2023-ED Emilad"<<endl;
	cout<<"\t 02.10.2023-Gandhi jayanti"<<endl;
	cout<<"\t 23.10.2023-Dussehra(mahanavami)"<<endl;
	cout<<"\t 24.10.2023-Dussehra(vijay dasami)"<<endl;
	cout<<"\t 12.11.2023-Diwali"<<endl;
	cout<<"\t 27.11.2023-Guru nanak jayanti"<<endl;
	cout<<"\t 25.12.2023-Christmas day"<<endl;
}
if(year==2022)
{
	cout<<"\n\n\n\t-:THE HOLIDAY LISTS ARE:-";
   cout<<"\n\t  ---------------------";
   cout<<"  "<<endl;
   cout<<endl;
   cout<<"\t 01.01.2023-New year"<<endl;
cout<<"\tJan 14: Makar Sankranti"<<endl;
cout<<"\t Jan 23: Netaji Subhas Chandra Bose Jayanti"<<endl;
cout<<"\t Jan 26: Republic Day"<<endl;
cout<<"\t Feb 05: Basanta Panchami"<<endl;
cout<<"\t Mar 05: Panchayati Raj Diwas"<<endl;
cout<<"\t Mar 18: Dola Purnima"<<endl;
cout<<"\t Mar 19: Holi"<<endl;
cout<<"\t Apr 01: Odisha Day"<<endl;
cout<<"\t Apr 10: Ram Navami"<<endl;
cout<<"\t Apr 14: Dr Ambedkar Jayanti"<<endl;
cout<<"\t Apr 14: Mahabishuba Sankranti"<<endl;
cout<<"\t Apr 15: Good Friday"<<endl;
cout<<"\t May 03: Id-Ul-Fitr"<<endl;
cout<<"\t May 16: Buddha Purnima"<<endl;
cout<<"\t May 30: Savitri Amavasya"<<endl;
cout<<"\t Jun 14: Pahili Raja"<<endl;
cout<<"\t Jun 15: Raja Sankranti"<<endl;
cout<<"\t Jul 01: Ratha Yatra"<<endl;
cout<<"\t Jul 10: Id-Ul-Zuha"<<endl;
cout<<"\t Aug 09: Ashura"<<endl;
cout<<"\t Aug 11: Jhulan Purnima"<<endl;
cout<<"\t Aug 15: Independence Day"<<endl;
cout<<"\t Aug 18: Sreekrishna Jayanthi"<<endl;
cout<<"\t Aug 31: Varasiddhi Vinayaka Vrata"<<endl;
cout<<"\t Sep 01: Nuakhai"<<endl;
cout<<"\t Sep 25: Mahalaya"<<endl;
cout<<"\t Oct 02: Maha Saptami"<<endl;
cout<<"\t Oct 02: Mahatma Gandhi Birthday"<<endl;
cout<<"\t Oct 03: Maha Astami"<<endl;
cout<<"\t Oct 04: Mahanavami"<<endl;
cout<<"\t Oct 05: Vijaya Dashami"<<endl;
cout<<"\t Oct 09: Maulud Nabi"<<endl;
cout<<"\t Oct 09: Lakshmi Puja"<<endl;
cout<<"\t Oct 24: Kali Puja"<<endl;
cout<<"\t Oct 24: Diwali"<<endl;
cout<<"\t Nov 08: Rasa Purnima"<<endl;
cout<<"\t Dec 25: Christmas Day"<<endl;	
}
    }	
    else if(a==2)
    {
    	
    	cout<<"Enter which year:-";
		cin>>year;
		cout<<"Enter the month:-";
		cin>>month;
	    if(year%4 == 0)
	    days_months[1] = 29;
	    day = first_year(year);
	    for(int i=0;i<(month-1);i++)
	    {
	    	for(int n=1;n<=days_months[i];n++)
	    	{
	    		if(++day>6)
	    		day=0;
			}
		}
		cout<<"\n\n\t\t"<<months[month-1]<<", "<<year;
		cout<<"\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";
		for(int i=0;i<day;i++)
		{
			cout<<"      ";
		}
		week = day;
		for(int m=1;m<=days_months[month-1];m++)
		{
			if(m<=10)
			{
				cout<<"     ";
			}
			else
			{
				cout<<"    ";
			}
			if(week > 6)
			{
				cout<<"\n    "<<m;
			    week = 0;
			}
			else
			{
				cout<<m;
			}
			week++;
		}
	}
	else
	{
		cout<<"Please check the input";
	}
	int b;
	do
	{
		cout<<"\n\n\tEnter 5 to exit: ";
    	cin>>b;
    	if (b==5)
    	return 0;
	}while(b=5);
}
