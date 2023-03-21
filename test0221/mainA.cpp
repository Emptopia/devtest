#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int x) 
{
    if(x<0)return false;
    else 
    {
        int temp = x;
        int re =0;
        while(temp>0)
        {
            re = re*10 + temp%10;
            temp /=10;
            cout << temp << endl;
            cout << re << endl;
        }
        if(re == x)return true;
        else return false;


    }
}

void test01()
{
	int x = 123;
	bool res = isPalindrome(x);
	cout << res;
}

int main()
{
	
	test01();
	system("pause");
	return 0;
 } 

