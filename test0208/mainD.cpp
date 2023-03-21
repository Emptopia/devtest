#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>


int main()
{
 	int y,m,d;
	cin >>y >> m >> d;
	d+=15;
	//2ÔÂ 
	if(m==2)
	{
		
		if(y%4==0 &&  d>29)
		{
			d-=29;
			m++;
		}
		else if(d>28)
		{
			d-=28;
			m++;
		}	
	}
	else if(m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12)
	{
		if(d>31)
		{
			d-=31;
			m++;	
		}
	}
	else
	{
		if(d>30)
		{
			d-=30;
			m++;
		}
	}
	
	if(m>12)
	{
		m-=12;
		y++;
	}
	cout << y << " " << m << " " << d << endl; 
	
	system("pause");
	return 0;
 } 

