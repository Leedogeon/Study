#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    		int answer = 0;

		for (int i = 0; i < schedules.size(); i++)
		{
			if (schedules[i] % 100 >= 50)
			{
				schedules[i] += 50;
			}
			else schedules[i] += 10;
		}

		vector<bool> chk(timelogs.size(), true);
		
		for (int j = 0; j < timelogs.size(); j++)
		{
			for (int i = 0;i < 7; i++)
			{
				if ((i + startday)%7 == 6 || (i + startday == 7)%7) continue;

				if (schedules[j] >= timelogs[j][i])
					continue;
				else
				{
					chk[j] = false;
					break;
				}

			}

		}
		for (auto c : chk)
		{
			if (c) answer++;
		}
		return answer;
}