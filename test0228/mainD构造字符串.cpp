#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,k;
	string t;
	cin >> n >> k >> t;
	string temp = "";
	for(int i=0;i<n;i++)
	{
		if(t.substr(0,i)==t.substr(n-i,i)) temp = t.substr(i,n-i);
	} 
	cout << t;
	for(int i=0;i<k-1;i++)cout << temp;
	
	
	
	
	
	
	
//	int n,k;
//	string s;
//	cin >> n >> k>> s ;
//	string tmp ;
//	for(int i=0;i<n;i++)
//	{	
//	//截取最大的对称字符串 
//		if(s.substr(0,i)==s.substr(n-i,i))
//		{
//			tmp = s.substr(i,n-i);
//		}
//			
//	} 
//	abab
//	n=4 i=2
//
//	cout << s;
//	for(int i=0;i<k-1;i++)
//	{
//		cout << tmp;
//	}
 } 
//3 4 aba
//3 2 cat
//4 4 abba
//5 4 abbba
