#include <string>
#include <vector>

using namespace std;

bool check(vector<int>& diffs, vector<int>& times, long long limit, int level) {
	long long spendTime = times[0];
	int len = diffs.size();
	for (int i = 1; i < len; i++)
	{
		if (diffs[i] <= level) spendTime += times[i];
		else
		{
			int cnt = diffs[i] - level;
			spendTime += cnt * (times[i] + times[i - 1]) + times[i];
		}
		if (spendTime > limit) return false;
	}
	return true;
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 0;
    long long maxLevel = 100000;
long long minLevel = 1;
long long curLevel = 0;

    if (check(diffs, times, limit, minLevel)) return 1;
while (maxLevel > minLevel+1)
{
	curLevel = (maxLevel + minLevel) / 2;
	if (check(diffs, times, limit, curLevel)) maxLevel = curLevel;
	else minLevel = curLevel;
	
}
    return maxLevel;
}