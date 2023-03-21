#include<bits/stdc++.h>
using namespace std;
int n,m,tree[500010];

int lowbit(int k)
{
	return k & -k;
}

//单点修改 
void add(int x, int k)
{
	while(x<=n)
	{
		//所有父节点加上k 
		tree[x]+=k;
		//父节点 
		x+=lowbit(x);
	}
}

//区间查询（求和） 
int sum(int x)
{
	int sum =0;
	while(x!=0)
	{
		//所有前相邻节点的和 
		ans+=tree[x];
		//前相邻节点(不是子节点) 
		x-=lowbit(x);
	}
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin >> a;
		add(i,a);
	}
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1)add(b,c);
		//区间[b,c]的和  [1,c]-[1,b-1] = [b,c] 
		//不能减去b，因此sum(b-1) 
		if(a==2)cout<<sum(c)-sum(b-1) << endl;
	}

	system("pause");
	return 0;
}
