#include<bits/stdc++.h>
using namespace std;


int main()
{
	int x;
	cin >> x;
	int a,b,c,d;
	while(true)
	{
		x++;
		a=x%10;
		b=x/10%10;
		c=x/100%10;
		d=x/1000%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)break;
	}
	cout << x;
	
	
	
	
	system("pause");
	return 0;
 } 

