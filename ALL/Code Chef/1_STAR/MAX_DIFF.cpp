#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif


	// the two dishes

	int t;
	cin >>t;
	while(t--)
	{
		int n,s; 			//n is max testiness and s for sum;
		cin >> n >> s;

		if(s <= n)
			{cout << s << endl;}
		else
			cout << 2*n -s << endl;
	}

}
