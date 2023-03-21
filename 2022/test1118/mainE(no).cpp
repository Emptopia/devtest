#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
#include<unordered_map>

unordered_map<int, long long>mr;

long long plmult(int num)
{
	if(mr[num]!=0)return mr[num];
	else 
	{
		mr[num] = plmult(num-1)*num;
		return mr[num];
	}
	
}

int main()
{
	mr[1]=1;
	int n,x;
	cin >> n >> x;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin >> nums[i];
	}
	long long res =0;
	
	for(int i=0;i<n;i++)
	{
		res += plmult(nums[i]);
	}
	if(res%x==0)cout << "YES" << endl;
	else cout << "NO" << endl;
	
	system("pause");
	return 0;
	
} 
