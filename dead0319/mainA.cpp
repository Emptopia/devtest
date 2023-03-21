#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int n,k;
struct Node
{
	int l,r;
	//排序方法1
	bool operator<(const Node& a)const
	{
		if(r==a.r)return l<a.l;
		return r<a.r;
	}
}num[maxn];//预留数组空间 

//排序方法2 
bool cmp(Node a, Node b)
{
	if(a.r==b.r) return a.l<b.l;
	return a.r<b.r;
}


int main()
{
	//高效cin cout 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i=1;i<=n;i++)cin >> num[i].l >> num[i].r;
	//sort(num+1,num+n+1);//注意都要+1，才是n个成员
	sort(num+1,num+n+1,cmp);
	int ans =1;
	//注意+1 
	int cmp = num[1].r+k-1;
	
	for(int i=2;i<=n;i++)
	{
		//注意等于 
		if(num[i].l<=cmp)continue;
		//右端排序过，因此直接从下一个没涂到的右端开始涂，不会遗漏 
		cmp = num[i].r+k-1;
		ans++;
	} 
	cout << ans << endl;
	system("pause");
	return 0;
}
