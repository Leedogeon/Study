#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    	vector<int> prev(4, 0);
	prev = land[0];

	for (int i = 1; i < land.size(); i++)
	{

		vector<int> cur = land[i];

		for (int j = 0; j < cur.size(); j++)
		{
			int high = 0;

			for (int k = 0; k < prev.size(); k++)
			{
				if (j == k) continue;

				high = max(prev[k] + cur[j], high);
			}
			cur[j] = high;
		}
		prev = cur;
	}

	return *max_element(prev.begin(), prev.end());
}