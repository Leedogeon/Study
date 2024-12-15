#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    	int startX = 0;
	int startY = 0;
	bool chk = false;
	for (int i = 0; i < park[0].size(); i++)
	{

		for (int j = 0; j < park.size(); j++)
		{
			if (park[i][j] == 'S')
			{
				startX = i;
				startY = j;
				chk = true;
				break;
			}
		}
		if (chk) break;
	}

		for (auto r : routes)
	{
		int num = r[2] - '0';
		if (r[0] == 'E')
		{
			if (startY + num >= park[0].size()) continue;
			int cnt = 0;
			for (int i = startY+1; i <= startY + num; i++)
			{
				if (park[startX][i] == 'X') break;
				cnt++;
			}
			if (cnt == num) startY += cnt;
		}
		if (r[0] == 'W')
		{
			if (startY - num < 0) continue;
			int cnt = 0;
			for (int i = startY-1; i >= startY - num; i--)
			{
				if (park[startX][i] == 'X') break;
				cnt++;
			}
			if (cnt == num) startY -= cnt;
		}
		if (r[0] == 'S')
		{
			if (startX + num >= park.size()) continue;
			int cnt = 0;
			for (int i = startX+1; i <= startX + num; i++)
			{
				if (park[i][startY] == 'X') break;
				cnt++;
			}
			if (cnt == num) startX += cnt;
		}
		if (r[0] == 'N')
		{
			if (startX - num < 0) continue;
			int cnt = 0;
			for (int i = startX-1; i >= startX - num; i--)
			{
				if (park[i][startY] == 'X') break;
				cnt++;
			}
			if (cnt == num) startX -= cnt;
		}
		
	}
    answer.push_back(startX);
    answer.push_back(startY);
    return answer;
}