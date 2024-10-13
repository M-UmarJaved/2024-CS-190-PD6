#include<iostream>
using namespace std;
main()
{
char service, time;
string serviceName;
float mint, price = 0.0;

cout<<"Enter the service code (R/r for regular, P/p for premium): ";
cin>> service;

if(service == 'P' || service == 'p')
{
cout<<"Enter time of the call (D/d for day, N/n for night): ";
cin>> time;
}

cout<<"Enter the number of minutes used: ";
cin>> mint;


if((service == 'R' || service == 'r') && mint <= 50 )
{
    price = price + 10;
    serviceName = "Regular";
}
else 
{
    price = (price + 10) + ((mint - 50) * 0.20);
    serviceName = "Regular";
}

if((service == 'P' || service == 'p')) 
{
    serviceName = "Premium";
    
	if((time == 'd' || time == 'D') && mint >= 75)
	{
	    price = (price + 25) + ((mint-75) * 0.10);
	}
	else{
	    price =25;
	}
	
	if((time == 'n' || time == 'N') && mint >= 100)
	{
	    price = (price + 25) + ((mint-100) * 0.05);}
	else{
	    price = 25;
	}
	
}
 cout<<"Service Type: "<< serviceName << endl;
 cout<<"Total Minutes Used: "<< mint <<" minutes"<< endl;
 cout<<"Amount due: $"<< price<< endl;
}
