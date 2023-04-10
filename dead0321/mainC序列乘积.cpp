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
	//���ڸ��������л���ָ��������Ҫ��δȷ����״̬��ʼ��Ϊ������
	//ǰi����ѡ0�����Ľ����0����������dp[i][0]=0
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
			//i<jʱ����������������Ҫ���� 
			if(i==j)dp[i][j] = dp[i-1][j-1]+a[i]*b[j];
			else if(i>j)dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]+a[i]*b[j]);
		}
	
	}
	cout << dp[n][m]< endl;
	
	
	
	system("pause");
	return 0;
}
