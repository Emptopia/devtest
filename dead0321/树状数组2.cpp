#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
int n,m,input[maxn],tree[maxn];

int lowbit(int x)
{
	return x & -x;
}

void add(int x,int val)
{
	while(x<=n)
	{
		tree[x]+=val;
		x+=lowbit(x);
	}
}

int search(int x)
{
	int res=0;
	while(x>0)
	{
		res+=tree[x];
		x-=lowbit(x);
	}
	return res;
}



int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> input[i];
	
	for(int i=1;i<=m;i++)
	{
		int a;
		cin >> a ;
		//区间修改 
		if(a==1)
		{
			int x,y,v;
			cin >> x >> y >> v;
			add(x,v);
			add(y+1,-v);
		}
		//单点查询 
		else if(a==2)
		{
			int x;
			cin >> x;
			int res = input[x]+search(x);
			cout << res << endl;
			
		}
	}
	
	
	
	return 0;
	
	
}
