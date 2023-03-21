#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>

int main()
{
	int n,t,x,y;
	int al = 0, ad = 0, bl = 0, bd = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >>t;
		cin >>x;
		cin >>y;
		if (t==1)
		{
			al+=x;
			ad+=y;
		}
		else
		{
			bl+=x;
			bd+=y;
		}
	}
	if(al>=ad)
	{
		cout << "LIVE" << endl;
	}
	else
	{
		cout << "DEAD" << endl;
	}
		if(bl>=bd)
	{
		cout << "LIVE" << endl;
	}
	else
	{
		cout << "DEAD" << endl;
	}
	
	system("pause");
	return 0;
 } 

