#include <string>
#include <vector>
#include <climits>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
	vector<int> answer = { -1,-1 };
	int prev = 0;
	int cur = 0;
	int sum = 0;
	int len = INT_MAX;
	while (prev != sequence.size())
	{
		if (sum >= k)
		{
			if (sum == k && cur - prev < len)
			{
				len = cur - prev;
				answer[0] = prev;
				answer[1] = cur-1;
			}
			sum -= sequence[prev++];
		}
		else
		{
            if (cur >= sequence.size()) break;
			sum += sequence[cur++];
		}
	}
    return answer;
}