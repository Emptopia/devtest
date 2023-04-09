#include<bits/stdc++.h>
using namespace std;
const int maxn = 3090;
long long n,m,a[maxn],b[maxn],dp[maxn][maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> a[i];
	for(int i=1;i<=m;i++)cin >> b[i];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j] = LLONG_MIN;
		}
		dp[i][0]=0;
	}
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==j)dp[i][j] = dp[i-1][j-1]+a[i]*b[j];
			else if(i>j) dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]+a[i]*b[j]);
			
		}
		
	}
	cout << dp[n][m];
	
	return 0;
} 
