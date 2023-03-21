#include<bits/stdc++.h>
using namespace std;
int n,k;
const int maxn = 2e5+10;

struct Node
{
	int l,r;
	bool operator<(const Node& a)const
	{
		if(r==a.r)return l<a.l;
		return r<a.r;
	}
}nums[maxn];

bool cmp(Node& a, Node& b)
{
	if(a.r==b.r)return a.l<b.l;
	return a.r<b.r;
}


int main()
{
	cin >> n >> k;
	for(int i=1;i<=n;i++)cin >> nums[i].l >> nums[i].r;
	
	//sort(nums+1,nums+n+1);
	sort(nums+1,nums+n+1,cmp);
	
	int res =1;
	int cm = nums[1].r+k-1;
	
	for(int i=2;i<=n;i++)
	{
		if(nums[i].l<=cm)continue;
		cm = nums[i].r+k-1;
		res++; 
	}
	cout <<res << endl;
	
	
	
}
