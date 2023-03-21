#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<algorithm>

vector<long long>plane(18258,0);

long long ret(int k)
{
	if(plane[k]==0)
	{
		plane[k] = ret(k-1)+12*(k-1);
	}
	return plane[k];
}

int main()
{
	plane[1]=1;
	int t;
	cin >> t;
	vector<int>n(t);
	vector<long long>res(t);
	for(int i=0;i<t;i++)
	{
		cin >> n[i];
	}
	for(int i=0;i<t;i++)
	{
		res[i] = ret(n[i]);
	}
	for(int i=0;i<t;i++)
	{
		cout << res[i] << endl;
	}
	
	system("pause");
	return 0;
} 
