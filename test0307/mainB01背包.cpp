#include<bits/stdc++.h>
using namespace std;

int N,V;
//f[i][j]:��j�Ŀռ������1~i����Ʒʱ�����ļ�ֵ 
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
				//����ֵ=���ŵ�����ֵ  , ���˵�����ֵ 
				f[i][j] = max(f[i][j],f[i-1][j-w[i]]+v[i]);
				//i=0||j=0ʱf[i][j]=0 
				//f[1][2]=max(0,0+2)=2 ,f[1][4]ͬ�� 
				//f[2][4]=max(f[1][4],f[1][0]+4)=max(2,0+4)=4
			}
		}
	}
	cout << f[N][V] << endl;
	
	
	
	system("pause");
	return 0;
 } 
 
