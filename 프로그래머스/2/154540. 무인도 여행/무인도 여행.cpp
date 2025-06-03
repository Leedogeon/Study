#include <string>
#include <vector>
#include<queue>
#include<algorithm>
using namespace std;

int Route(vector<string> maps, vector<vector<bool>>& visited, pair<int,int> Pos)
{
	vector<pair<int, int>> direction = { {-1,0},{0,1},{1,0},{0,-1} };

	queue<pair<int, int>> q;

	int res = 0;

	q.push(Pos);

	while (!q.empty())
	{
		Pos = q.front();

		q.pop();

		if (maps[Pos.first][Pos.second] != 'X' && !visited[Pos.first][Pos.second])
		{
			res += maps[Pos.first][Pos.second] - '0';
			visited[Pos.first][Pos.second] = true;
		}
		else continue;

		for (auto d : direction)
		{
			pair<int, int> next = { Pos.first + d.first,Pos.second + d.second };

			if (next.first >= 0 && next.first < maps.size() && next.second >= 0 && next.second < maps[0].size() && !visited[next.first][next.second])
			{
				if (maps[next.first][next.second] == 'X') continue;

				q.push(next);
			}
		}

	}
	

	return res;
}

vector<int> solution(vector<string> maps)
{
	vector<int> answer;
	vector<vector<bool>> visited(maps.size(), vector<bool>(maps[0].size(), false));
	for (int i = 0; i < maps.size(); i++)
	{
		for (int j = 0; j < maps[i].size(); j++)
		{
			if (visited[i][j]) continue;
			
			int sum = Route(maps, visited, { i,j });

			if (sum != 0)
			{
				answer.push_back(sum);
			}
		}
	}
	
	if (answer.empty()) return { -1 };
	sort(answer.begin(), answer.end());
	return answer;
}