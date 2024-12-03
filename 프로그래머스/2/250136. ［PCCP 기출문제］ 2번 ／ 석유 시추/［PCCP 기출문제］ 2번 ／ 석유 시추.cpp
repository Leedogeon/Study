#include <string>
#include <vector>
#include <queue>
#include <set>
using namespace std;

void BFS(vector<vector<int>>& land, vector<int>& result)
{
	vector<int> dx = { -1,1,0,0 };
	vector<int> dy = { 0,0,-1,1 };

	queue<pair<int, int>> place;
	vector<vector<bool>> visited(land.size(), vector<bool>(land[0].size(), false));
	for (int j = 0; j < land.size(); j++)
	{
		for (int i = 0; i < land[0].size(); i++)
		{
			if (land[j][i] != 1) continue;
            if (visited[j][i]) continue;
			visited[j][i] = true;
			int count = 0;
			place.push({ j,i });
			set<int> num;
			while (!place.empty())
			{
				
				int curX = place.front().first;
				int curY = place.front().second;
				num.insert(curY);
				place.pop();
				count++;
				for (int n = 0; n < dx.size(); n++)
				{
					int nextX = curX + dx[n];
					int nextY = curY + dy[n];

					
					if (nextX >= 0 && nextX < land.size() && nextY >= 0 && nextY < land[0].size())
					{
						if (visited[nextX][nextY] == true) continue;
						if (land[nextX][nextY] != 1) continue;
						place.push({ nextX, nextY });
						visited[nextX][nextY] = true;
					}
				}
			}
			for (auto n : num)
			{
				result[n] += count;
			}
		}

	}
}

int solution(vector<vector<int>> land) {
    int answer = 0;
    vector<int> result(land[0].size(),0);
    BFS(land,result);
    set<int> fin;
for (auto r : result)
{
	fin.insert(r);
}
auto iter = fin.end();
iter--;
    answer = *iter;
    return answer;
}