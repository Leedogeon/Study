#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    	int lotIndex = 0;
	int winIndex = 0;
	int match = 0;
	int blank = 0;
	sort(lottos.begin(), lottos.end());
	sort(win_nums.begin(), win_nums.end());

	while (lotIndex < lottos.size() && winIndex < win_nums.size())
	{
		if (lottos[lotIndex] == 0)
		{
			blank++;
			lotIndex++;
            continue;
		}

		if (lottos[lotIndex] == win_nums[winIndex])
		{
			lotIndex++;
			winIndex++;
			match++;
		}
		else if (lottos[lotIndex] > win_nums[winIndex])
		{
			winIndex++;
		}
		else if (lottos[lotIndex] < win_nums[winIndex])
		{
			lotIndex++;
		}
	}
	int high = match + blank;
	int low = match;

	if (high <= 1)
		answer.push_back(6);
	else if (high >= 2)
		answer.push_back(7 - high);

	if (low <= 1)
		answer.push_back(6);
	else if (low >= 2)
		answer.push_back(7 - low);
    return answer;
}