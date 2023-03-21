#include<bits/stdc++.h>
using namespace std;



int main()
{
	int k,n;
	string s;
	cin >> k >> n;
	cin >> s;
	for(int i=0;i<k;i++)
	{
		if(n==0)
		{
			if(s[i]=='o')s[i]='x';
		}
		else if(s[i]=='o')
		{
			n--;	
		}
		
	}
	cout << s;
	
	
	system("pause");
	return 0;
 } 

