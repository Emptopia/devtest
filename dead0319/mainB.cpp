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
		//!关键 
		//当k=10,最小子串不会超过10位 
		for(int j=1;j<=k;j++)
		{  
			//substr范围 
			if(i+j>len)continue;
			se.insert(s.substr(i,j));
		}
	}
	auto it = se.begin();
	for(int i=0;i<k-1;i++) it++;
	
	cout << *it << endl;
	system("pause");
	return 0;
}
