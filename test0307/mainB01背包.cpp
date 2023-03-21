#include<bits/stdc++.h>
using namespace std;

int N,V;
//f[i][j]:以j的空间遍历了1~i个物品时，最大的价值 
const int x = 1140;
int w[x],v[x],f[x][x];

int main()
{
	cin >> N >> V;
	for(int i=1;i<=N;i++) cin >> w[i] >> v[i];
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=V;j++)
		{
			f[i][j] = f[i-1][j]; 
			if(j>=w[i])
			{
				//最大价值=不放的最大价值  , 放了的最大价值 
				f[i][j] = max(f[i][j],f[i-1][j-w[i]]+v[i]);
				//i=0||j=0时f[i][j]=0 
				//f[1][2]=max(0,0+2)=2 ,f[1][4]同上 
				//f[2][4]=max(f[1][4],f[1][0]+4)=max(2,0+4)=4
			}
		}
	}
	cout << f[N][V] << endl;
	
	
	
	system("pause");
	return 0;
 } 
 
