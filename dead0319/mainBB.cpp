#include<bits/stdc++.h>
using namespace std;
string s;
int k;
set<string>se;

int main()
{
	cin >> s >> k;
	int len = s.size();
	for(int i=0;i<len;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(i+j>len)continue;
			se.insert(s.substr(i,j));
		}
	}
	
	set<string>::iterator it = se.begin();
	for(int i=0;i<k-1;i++)
	{
		it++;
	}
	cout << *it << endl;
	
	return 0;
}

 
