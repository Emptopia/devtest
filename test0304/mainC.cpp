#include<bits/stdc++.h>
using namespace std;

int tail(int x)
{
	int count =0;
	bitset<32>b(x);
	for(int i=0;i<b.size();i++)
	{
		if(b[i]==0)count++;
		else break;
	}
	return count;
}


int main()
{
	int n;
	cin >> n;
	vector<int>t(n);
	for(int i=0;i<n;i++)
	{
		cin >> t[i];
	}
	int a =0;
	for(int i=0;i<n;i++)
	{
		a++;
		while(tail(a)!=t[i])
		{
			a++;
		}
	}
	cout << a;
	
	
	
	//cout << tail(n) << endl;
	//cout << bitset<8>(n) << endl;
	
	system("pause");
	return 0;
 } 

