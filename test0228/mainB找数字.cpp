#include<bits/stdc++.h>
using namespace std;

int m,s;
const int n = 114;
int ma[n],mi[n];
int main()
{
	cin >> m >> s;
	if((m>1&&s==0) || (m*9<s)) cout << "-1 -1";
	else if(m==1&&s==0)cout << "0 0";
	else
	{
		
		int k = s;
		for(int i=1;i<m;i++)
		{
			if(k>9)
			{
				k-=9;
				mi[i]=9;
			}
			else
			{
				
				mi[i] = k-1;
				k = 1;
			}
		}
		mi[m] = k;
		k=s;
		for(int i=1;i<m;i++)
		{
			if(k>9)
			{
				k-=9;
				ma[i]=9;
			}
			else
			{
				
				ma[i] = k;
				k = 0;
			}
		}
		ma[m] = k;
		
		for(int i=m;i>=1;i--)cout << mi[i];
		cout << " ";
		for(int i=1;i<=m;i++)cout << ma[i];
		
		
	 } 
		
	
//	cin >> m >> s;
//	if((s==0&&m>1) || (m*9<s)) cout << "-1 -1";
//	else if(s==0 && m==1) cout << "0 0";
//	else
//	{
//		int k = s;
//		//最小值，从个位往高位给数字 
//		for(int i=1;i<m;i++)
//		{
//			if(k>9)
//			{
//				a[i]=9;
//				k-=9; 
//			}
//			else
//			{
//				a[i]=k-1;
//				k=1;
//			}
//		}
//		a[m]+=k;
//		k=s;
//		//最大值，从高位往个位给数字
//		for(int i=1;i<m;i++)
//		{
//			if(k>9)
//			{
//				b[i]=9;
//				k-=9;
//			}
//			else
//			{
//				b[i]=k;
//				k=0;
//			}
//		}
//		b[m]+=k;
//		for(int i=m;i>=1;i--)cout << a[i];
//		cout << " ";
//		for(int i=1;i<=m;i++)cout << b[i];
//		
//	}
	
	
	
	
	
	system("pause");
	return 0;
 } 

