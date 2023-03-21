#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 3090;
ll n,m,a[maxn],b[maxn],dp[maxn][maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=m;i++) cin >> b[i];
	//由于给的数字中会出现负数，因此要将未确定的状态初始化为负无穷
	//前i个数选0个数的结果是0，所以所有dp[i][0]=0
	for(int i=0;i<=n;i++) 
	{
		for(int j=0;j<=m;j++)
		{
			dp[i][j] = LLONG_MIN;
		}
		dp[i][0] = 0;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			//i<j时条件不成立，不需要计算 
			if(i==j)dp[i][j] = dp[i-1][j-1]+a[i]*b[j];
			else if(i>j)dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]+a[i]*b[j]);
		}
	
	}
	cout << dp[n][m]< endl;
	
	
	
	system("pause");
	return 0;
}
