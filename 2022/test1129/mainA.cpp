#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_map>
int main()
{
	int n,k;
	cin >> n >> k;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	unordered_map<int,int>count;
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		if(count[a[i]]==0)
		{
			count[a[i]]++;
			res.push_back(i);
		}
		if(res.size()==k)break;
	}
	if(res.size()<k)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
		for(int i=0;i<k;i++)
		{
			cout << res[i]+1 << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
} 
