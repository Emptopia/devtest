#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
int n,m,input[maxn],tree[maxn];

int lowbit(int k)
{
	return k&-k;
}
//区间修改 
void add(int k,int val)
{
	while(k<=n)
	{
		tree[k]+=val;
		k+=lowbit(k);
	}
}

//单点查询 
int search(int k)
{
	int res=0;
	while(k>0)
	{
		res+=tree[k];
		k-=lowbit(k);
	}
	return res;
}


int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> input[i];
	}
	
	for(int i=1;i<=m;i++)
	{
		int a,b,c,d;
		cin >> a;
		if(a==1)
		{
			cin >> b >> c >> d;
			add(b,d);
			add(c+1,-d);
		}
		else
		{
			cin >> b;
			cout << input[b]+search(b) << endl;
		}
	}
	
	
	
	return 0;
	
	
}
