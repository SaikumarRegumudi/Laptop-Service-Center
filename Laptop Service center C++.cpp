#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fi("Laptop_repair_service");
ofstream file("register1");
char name[20],city[20],email[20];
char company[20],model[20],a[20],b[20];
int regno,pincode;
int s;
 long long int mobile;
	cout<<"                                     ****** Laptop  service center******"<<endl;
	fi<<"                                      Laptop  service center"<<endl;
	file<<"                                      Register"<<endl;
	cout<<"enter your details in the register"<<endl;
	cout<<"Name : ";
	fflush(stdin);
    gets(name);
    fi<<"Name  :";
    file<<"Name  :";
    file<<name<<endl;
	cout<<"Email : ";
	fflush(stdin);
	gets(email);
	fi<<"Email : ";
	file<<"Email : ";
	file<<email<<endl;
	fi<<email<<endl;
	cout<<"City : ";
	fflush(stdin);
	gets(city);
	fi<<"City : ";
	file<<"City : ";
	file<<city<<endl;
	file<<city<<endl;

	cout<<"Pincode : ";
	cin>>pincode;
	fi<<"Pincode : ";
	file<<"Pincode : ";
	file<<pincode<<endl;
	fi<<pincode<<endl;
	cout<<"Mobile : ";
	fflush(stdin);
	cin>>mobile;
	fi<<"Mobile : ";
	file<<"mobile :";
	file<<mobile<<endl;
	fi<<mobile<<endl;
	cout<<"Reg no : ";
	fflush(stdin);
	cin>>regno;
	fi<<"Reg no : ";
	file<<"Regno : ";
	file<<regno<<endl;
	fi<<regno<<endl;
	cout<<"name of laptop : ";
	fflush(stdin);
	gets(company);
	fi<<"name of laptop  : ";
	file<<"name of laptop : ";
	file<<company<<endl;
	fi<<company<<endl;
	cout<<"Model : ";
	fflush(stdin);
	gets(model);
	fi<<"Model : ";
	file<<"Model : ";
	file<<model<<endl;
	fi<<model<<endl;
	cout<<"Enter 1 for instal drives"<<endl;
	cout<<"Enter 2 for windows problem"<<endl;
	cout<<"Enter 3 for display problem"<<endl;
	cin>>s;
	switch(s)
	{
		case 1:
			fi<<"Problem with laptop : instal drives"<<endl;
			int a,b,c,d;
			cout<<"No of hours of back up...?"<<endl;
			cin>>a;
			cout<<"Repairing should be done within how many days...?"<<endl;
			cin>>b;
			if(b<3)
			{
				fi<<"Delivery time : Within 3 days"<<endl;
				cout<<"drives cost : 1800"<<endl;
				fi<<"drives cost : 1800"<<endl;
				c=(1800*10)/100;
				cout<<"Service Charge : "<<c<<endl;
				fi<<"Service Charge : "<<c<<endl;
				c=c+1800;
				cout<<"Total Amount to be charged : "<<c<<endl;
				fi<<"Total Amount to be charged : "<<c<<endl;		
			}
			if(b>=3 && b<6)
{
				fi<<"Delivery time : Within 3 days"<<endl;
				cout<<"drives cost : 1800"<<endl;
				fi<<"drives cost : 1800"<<endl;
				c=(900*10)/100;
				cout<<"Service Charge : "<<c<<endl;
				fi<<"Service Charge : "<<c<<endl;
				c=c+900;
				cout<<"Total Amount to be charged : "<<c<<endl;
				fi<<"Total Amount to be charged : "<<c<<endl;		
			}
			if(b>=6)
			{
				fi<<"Delivery time : Within 3 days"<<endl;
				cout<<"drives cost : 1800"<<endl;
				fi<<"drives cost : 1800"<<endl;
				c=(1000*10)/100;
				cout<<"Service Charge : "<<c<<endl;
				fi<<"Service Charge : "<<c<<endl;
				c=c+1000;
				cout<<"Total Amount to be charged : "<<c<<endl;
				fi<<"Total Amount to be charged : "<<c<<endl;		
			}
			break;
		case 2:
			fi<<"Purpose of Visiting : windows problem"<<endl;
			int a1;
			cout<<"enter 1 for windows installation"<<endl;
			cout<<"enter 2 for ios installation"<<endl;
			cin>>a1;
			switch(a1)
			{
				case 1:
					int d1;
					fi<<"Type of installation : Windows"<<endl;
					cout<<"enter window 7 or 8 or 10"<<endl;
					cin>>d1;
					if(d1==7)
					{
						fi<<"Software type : Windows 7"<<endl;
						cout<<"cost of software : 500"<<endl;
						fi<<"cost of software : 500"<<endl;
						c=(5*500)/100;
						cout<<"service charge : "<<c<<endl;
						fi<<"service charge : "<<c<<endl;
						c=c+500;
						cout<<"total amount to be charged : "<<c;
						fi<<"total amount to be charged : "<<c;
					}
					if(d1==8)
{
						fi<<"Software type : Windows 10"<<endl;
						cout<<"cost of software : 750"<<endl;
						fi<<"cost of software : 750"<<endl;
						c=(5*750)/100;
						cout<<"service charge : "<<c<<endl;
						fi<<"service charge : "<<c<<endl;
						c=c+750;
						cout<<"total amount to be charged : "<<c;
						fi<<"total amount to be charged : "<<c;
					}
					break;
				case 2:
					fi<<"Type of installation : IOS"<<endl;
					fi<<"Software type : IOS"<<endl;
						cout<<"cost of software : 1500"<<endl;
						fi<<"cost of software : 1500"<<endl;
						c=(5*1500)/100;
						cout<<"service charge : "<<c<<endl;
						fi<<"service charge : "<<c<<endl;
						c=c+1500;
						cout<<"total amount to be charged : "<<c;
						fi<<"total amount to be charged : "<<c;
					break;
			}
			break;
		case 3:
			fi<<"Purpose of Visiting : display problem"<<endl;
			float a2;
			int b2,b3;
			cout<<"Inches of your screen"<<endl;
			cin>>a2;
			fi<<"Inches of your screen : "<<a2<<endl;
			if(a2<10)
			{
				cout<<"enter 1 for oled screen"<<endl;
				cout<<"enter 2 for normal screen"<<endl;
				cin>>b2;
switch(b2)
				{
					case 1:
						int c1,d1;
						c1=16*650;
						cout<<"Your screen cost : "<<c1<<endl;
						fi<<"Your screen cost : "<<c1<<endl;
						d1=(5*c1)/100;
						cout<<"Service charge : "<<d1<<endl;
						fi<<"Service charge : "<<d1<<endl;
						c1=c1+d1;
						cout<<"total cost : "<<c1<<endl;
						fi<<"total cost : "<<c1<<endl;
						break;
					case 2:
						
						c1=16*350;
						cout<<"Your screen cost : "<<c1<<endl;
						fi<<"Your screen cost : "<<c1<<endl;
						d1=(5*c1)/100;
						cout<<"Service charge : "<<d1<<endl;
						fi<<"Service charge : "<<d1<<endl;
						c1=c1+d1;
						cout<<"total cost : "<<c1<<endl;
						fi<<"total cost : "<<c1<<endl;
						break;
				}
				
			}	
	}
	fi.close();
	file.close();	
}


