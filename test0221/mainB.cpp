#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	int s =0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s+=a[i];
	}
	int count =0;
	for(int x=1;x<=5;x++)
	{
		if((s+x)%(n+1)!=1)count++;
		
	}
	
	cout << count;
	
	
	
	system("pause");
	return 0;
 } 

