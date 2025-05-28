#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> sticker)
{
    vector<vector<int>> dp(3,vector<int>(sticker.size(),0));

	if (sticker.size() == 1) return sticker[0];
	else if (sticker.size() == 2) return max(sticker[0], sticker[1]);

	int max1 = 0;
	int max2 = 0;
	int max3 = 0;
	for (int index = 0; index < dp.size(); index++)
	{
		for (int i = sticker.size() - 1; i >= 0; i--)
		{
			if (index == 0)
			{
				if (i == 1 || i == sticker.size() - 1) continue;
			}
			else if (index == 1)
			{
				if (i == 0 || i == 2) continue;
			}
			else if (index == 2)
			{
				if (i == 0 || i == 1 || i == 3) continue;
			}
			if (i >= sticker.size() - 2)
			{
				dp[index][i] = sticker[i];
			}
			else if (i == sticker.size() - 3)
			{
				dp[index][i] = sticker[i] + dp[index][i + 2];
			}
			else
			{
				dp[index][i] = sticker[i] + max(dp[index][i + 2], dp[index][i + 3]);
			}
		}
	}

	max1 = *max_element(dp[0].begin(), dp[0].end());
	max2 = *max_element(dp[1].begin(), dp[1].end());
	max3 = *max_element(dp[2].begin(), dp[2].end());

    return max({max1,max2,max3});
}