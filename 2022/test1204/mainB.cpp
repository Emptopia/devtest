#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>

vector<vector<int>>palace;
vector<vector<int>>dplate;
int n,m;

int dp(int x, int y)
{
	if(x<0 || y<0)return 0;
	//cout << "dp开始" << endl;
	if(dplate[x][y]!=-1)
	{
		//cout << "等-1" << endl;
		return dplate[x][y];
	}
	//cout << "不等-1" << endl; 
	
	int res = max(dp(x-1,y),dp(x,y-1)) + palace[x][y];
	//cout << res << endl;
	dplate[x][y]=res;
	return res;
	
}

int main()
{
	
	cin >> n >> m;
	palace = vector<vector<int>>(n,vector<int>(m));
	dplate = vector<vector<int>>(n,vector<int>(m,-1));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> palace[i][j];
			//cout << palace[i][j] << endl;
		}
	}
	cout << dp(n-1,m-1) << endl;
	
	
	system("pause");
	return 0;
} 
