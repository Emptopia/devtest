#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>

int main()
{
 	string s;
	int k;
	cin >> s;
	cin >> k;
	unordered_map<char,int>m;
	char temp = 'a';
	int ma = 0;
	for(int i=0;i<26;i++)
	{
		cin >> m[temp];
		ma = max(ma,m[temp]);
		temp++;
	}
	long long res =0;
	int leng = s.length();
	for(int i=0;i<leng;i++)
	{
		res += (i+1) * m[s[i]];	
	}
	for(int i=0;i<k;i++)
	{
		leng++;	
		res += leng*ma;
	}
	cout << res << endl;
	
	
	system("pause");
	return 0;
 } 

