#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<int>n(t);
	for(int i=0;i<t;i++)
	{
		cin >> n[i];
	} 
	
	for(int i=0;i<t;i++)
	{
		if(n[i]%2==0)
		{
			int t= n[i]/2;
			for(int j=t;j>0;j--)cout << '1';
			cout << endl;
		}
		else
		{
			cout << '7';
			int t= (n[i]-3)/2;
			for(int j=t;j>0;j--)cout << '1';
			cout << endl;
		}
		
	 } 
	 
	
	
	
	
	
	system("pause");
	return 0;
 } 

