#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>dp(n);
	dp[0]=1;
	dp[1]=1;
	unordered_map<int,int>m;
	m[0] = 1;
	m[1] = 1;
	for(int i=2;i<n;i++)
	{
		dp[i] = dp[i-1]+dp[i-2];
		m[dp[i]]=1;
		if(dp[i]>n)break;
	}
	for(int i=1;i<=n;i++)
	{
		if(m[i]==1)cout << "O";
		else cout << "o";
	}
	
	
	
	
	
	
	system("pause");
	return 0;
 } 

