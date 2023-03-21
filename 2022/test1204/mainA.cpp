#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>
int main()
{
	string s;
	getline(cin,s);
	unordered_map<string,int>fogo;
	int left=0;
	int right=0;
	while(left<s.size())
	{
		while(s[right]!=' ')
		{
			right++;
		}
		string temp = s.substr(left,right-left);
		//cout << temp << endl;
		left=right+1;
		right=left;
		while(right<s.size() && s[right]!=' ')
		{
			right++;
		}
		int temp2 = stoi(s.substr(left,right-left));
		fogo[temp] += temp2;
		//cout << temp2 << endl;
		left = right+1;
		right=left;
	}
	
	
	
	int t;
	cin >> t;
	vector<string>a(t);
	for(int i=0;i<t;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<t;i++)
	{
		cout << fogo[a[i]] << endl;
	}
	
	system("pause");
	return 0;
} 
