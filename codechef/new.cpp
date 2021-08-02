#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int lBr = 0,rBr = 0,rBrReq = 0,rBrExtra = 0; 
		cin >> s;
        cout << s;
		for(int i = 0;i < s.length();i++)
		{
			if(s[i] == '{')
			{
				lBr++;
			}
			if(s[i] == '}')
			{
				rBr++;
			}
		}
		rBrReq = 2*lBr;
		rBrExtra = rBrReq - rBr;
		cout << rBrExtra << endl; 
	}
	return 0;
}