#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int n,k;

struct Node
{
	int l,r;
	bool operator<(const Node& b)const
	{
		if(r==b.r)return l<b.l;
		return r<b.r;
	}
}nums[maxn];

bool cmp(Node& a, Node& b)
{
	if(a.r==b.r)return a.l<b.l;
	return a.r<b.r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i=1;i<=n;i++)cin >> nums[i].l >> nums[i].r;
	
	sort(nums+1,nums+n+1);
	//sort(nums+1,nums+n+1,cmp);
	int res=1;
	int cm = nums[1].r+k-1;
	for(int i=2;i<=n;i++)
	{
		if(nums[i].l<=cm)continue;
		else
		{
			res++;
			cm = nums[i].r+k-1;
		}
	}
	cout << res << endl;
	
	return 0;
}
