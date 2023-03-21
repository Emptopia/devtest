#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
vector<vector<int>>plane;
int n,m;
int search(int x,int y,int dis)
{
	if(x<0 || x>=n||y<0 || y>=m || plane[x][y]==2)
	{
		return INT_MAX;
	}
	if(plane[x][y]==0)return dis;
	plane[x][y]=2;
	int m1 = search(x-1,y,dis+1);
	int m2 = search(x+1,y,dis+1);
	int m3 = search(x+1,y,dis+1);
	int m4 = search(x+1,y,dis+1);
	plane[x][y]=1;
	cout << "±È½Ï" << x << y  << " "<< m1 << " " << m2 << " " << m3 << " " << m4 <<endl;
	return min(min(m1,m2),min(m3,m4));
}

int main()
{
	
	cin >> n >> m;
	plane = vector<vector<int>>(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> plane[i][j];
			
		}
	}
	
	vector<vector<int>>res = plane;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			 res[i][j] = search(i,j,0);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			 cout << res[i][j] << " ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
} 
