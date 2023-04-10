#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
int n,m,tree[maxn];

int lowbit(int k)
{
	return k & -k;
 } 

void add(int k, int val)
{
	while(k<=n)
	{
		tree[k]+=val;
		k+=lowbit(k);
	}
}

int search(int k)
{
	int sum =0;
	while(k>0)
	{
		sum+=tree[k];
		k-=lowbit(k);
	}
	return sum;
}



int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		int val;
		cin >> val;
		add(i,val);
	}
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if(a==1)
		{
			add(b,c);
		}
		else
		{
			cout << search(c)-search(b-1) << endl;
		}
		
	}

	
	
	return 0;
	
	
}
