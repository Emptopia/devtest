#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int n,k;
struct Node
{
	int l,r;
	//���򷽷�1
	bool operator<(const Node& a)const
	{
		if(r==a.r)return l<a.l;
		return r<a.r;
	}
}num[maxn];//Ԥ������ռ� 

//���򷽷�2 
bool cmp(Node a, Node b)
{
	if(a.r==b.r) return a.l<b.l;
	return a.r<b.r;
}


int main()
{
	//��Чcin cout 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i=1;i<=n;i++)cin >> num[i].l >> num[i].r;
	//sort(num+1,num+n+1);//ע�ⶼҪ+1������n����Ա
	sort(num+1,num+n+1,cmp);
	int ans =1;
	//ע��+1 
	int cmp = num[1].r+k-1;
	
	for(int i=2;i<=n;i++)
	{
		//ע����� 
		if(num[i].l<=cmp)continue;
		//�Ҷ�����������ֱ�Ӵ���һ��ûͿ�����Ҷ˿�ʼͿ��������© 
		cmp = num[i].r+k-1;
		ans++;
	} 
	cout << ans << endl;
	system("pause");
	return 0;
}
