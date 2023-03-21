#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>

int m,n;
vector<vector<int>>plt;
int ri =0;
void search(int x, int y)
{
	if(x<0 || x>=m || y<0 || y>=n || plt[x][y]==0)return;
	plt[x][y]=0;
	//有细胞 
	ri=1;
	search(x+1,y);
	search(x-1,y);
	search(x,y+1);
	search(x,y-1);
}

int main()
{
	
	cin >> m >>n;
	plt = vector<vector<int>>(m,vector<int>(n));
	for(int i=0;i<m;i++)
	{
		string tp;
		cin >> tp;
		for(int j=0;j<n;j++)
		{
			//char转int 
			plt[i][j] = tp[j] - '0';
		}
	}
	int res=0;
	for(int i=0;i<m;i++)
	{

		for(int j=0;j<n;j++)
		{
			ri=0;
			search(i,j);
			if(ri==1)
			{
				//有细胞则计数 
				res++;
			}
		}
	} 
	cout << res << endl;
	
	system("pause");
	return 0;
} 
