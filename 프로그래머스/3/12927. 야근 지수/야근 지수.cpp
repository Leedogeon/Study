#include <string>
#include <vector>
#include<algorithm>
#include<unordered_map>
#include<set>
using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    unordered_map<int, int> all;
	int high = 0;
	for (auto w : works)
	{
		all[w]++;
		high = max(high, w);
	}

	for (int a = high; a>0;a--)
	{
		if (n == 0) break;

		if (all[a] <= n)
		{
			all[a - 1] += all[a];
			n -= all[a];
			all[a] = 0;

		}
		else if (all[a] > n)
		{
			all[a - 1] += n;
			all[a] -= n;
			n = 0;
		}
	}

	for (auto a : all)
	{
		if (a.second != 0)
		{
			answer += (long long)(a.first * a.first) * a.second;
		}
	}
    return answer;
}