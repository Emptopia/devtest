#include<bits/stdc++.h>
using namespace std;
const int x = 1145;
int N,V,w[x],v[x],dp[x];
int main()
{
	cin >> N >> V;
	for(int i=1;i<=N;i++)cin >> w[i] >> v[i];
	for(int i=1;i<=N;i++)
	{
		for(int j=w[i];j<=V;j++)
		{
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		}
	 } 
	cout << dp[V];
	
	system("pause");
	return 0;
}

