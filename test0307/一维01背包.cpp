#include<bits/stdc++.h>
using namespace std;
const int x= 1014;
int N,V,w[x],v[x],dp[x];
//Nums£¬Volume£¬weight£¬value
int main()
{
	cin >>N >> V;
	for(int i=1;i<=N;i++)cin >> w[i] >> v[i];
	for(int i=1;i<=N;i++)
	{
		for(int j=V;j>=w[i];j--)
		{
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		}
	 } 
	cout << dp[V] << endl;

	system("pause");
	return 0;
} 

