#include<bits/stdc++.h>
using namespace std;
int n,m,tree[500010];

int lowbit(int k)
{
	return k & -k;
}

//�����޸� 
void add(int x, int k)
{
	while(x<=n)
	{
		//���и��ڵ����k 
		tree[x]+=k;
		//���ڵ� 
		x+=lowbit(x);
	}
}

//�����ѯ����ͣ� 
int sum(int x)
{
	int sum =0;
	while(x!=0)
	{
		//����ǰ���ڽڵ�ĺ� 
		ans+=tree[x];
		//ǰ���ڽڵ�(�����ӽڵ�) 
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
		//����[b,c]�ĺ�  [1,c]-[1,b-1] = [b,c] 
		//���ܼ�ȥb�����sum(b-1) 
		if(a==2)cout<<sum(c)-sum(b-1) << endl;
	}

	system("pause");
	return 0;
}
