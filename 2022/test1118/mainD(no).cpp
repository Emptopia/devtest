#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
		for(int i=0;i<n;i++)
	{
		cin >> b[i];
	}
	int res = INT_MAX;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				for(int k=j+1;k<n;k++)
				{
					if(a[j]<a[k])
					{
						res = min(res,b[i]+b[j]+b[k]);
					}
				}	
			}
		}
	}
	if(res==INT_MAX)res=-1;
	cout << res << endl;
	
	system("pause");
	return 0;
	
} 
