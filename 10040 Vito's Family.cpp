#include <bits/stdc++.h>
using namespace std;

int main(){


	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int len; scanf("%d", &len);
		vector<int> v;
		for (int i = 0; i < len; ++i)
		{
			int x; scanf("%d", &x);
			v.push_back(x);
		}

		sort(v.begin(), v.end());
		int m = v[len/2];

		int result = 0 ;
		for (int i = 0; i < len; ++i)
		{
			result += abs(m-v[i]);
		}
		printf("%d\n", result);
	}

}
