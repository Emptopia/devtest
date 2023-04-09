#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
int n,m,tree[maxn]; 

int lowbit(int k)
{
	return k & -k;
}

void add(int k,int val)
{
	while(k<=n)
	{
		tree[k]+=val;
		k+=lowbit(k);
	}
}

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
		int k;
		cin >> k;
		add(i,k);
	}
	
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if(a==1)add(b,c);
		else
		{
			int res = search(c)-search(b-1);
			cout << res << endl;
		}
	}

	
	
	return 0;
	
	
}
