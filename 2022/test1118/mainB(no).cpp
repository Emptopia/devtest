#include<iostream>
using namespace std;
#include<vector>

int main()
{
	string s;
	cin >> s;
	int inside = 0;
	long long res=0;
	for(int i=0;i<s.size();i++)
	{
		if(inside==0)
		{
			if(s[i]=='p')res++;
			else inside=1;
		}
		else if(inside==1&&s[i]=='r')inside=0;

		
	} 
	
	cout << res << endl;
	system("pause");
	return 0;
	
} 
