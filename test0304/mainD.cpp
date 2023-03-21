#include<bits/stdc++.h>
using namespace std;

int n,m,q; 
string s,t;


int main()
{
	cin >> n >> m >> q >> s >> t;
	vector<int>l(q);
	vector<int>r(q);
	for(int i=0;i<q;i++)
	{
		cin >> l[i] >> r[i];
		
	}
	for(int i=0;i<q;i++)
	{
		int count =0;
		for(int j=l[i]-1;j<r[i]-m+1;j++)
		{
			//cout << j << endl;
			if(s.substr(j,m)==t)count++;
		}
		
	cout << count << endl;	
	}
	
	
	
	system("pause");
	return 0;
 } 

