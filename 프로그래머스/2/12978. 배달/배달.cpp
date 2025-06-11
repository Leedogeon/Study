#include <iostream>
#include <vector>
#include <climits>
#include<map>
using namespace std;
	int sum = 0;
	void FindNext(int cnt, map<int, vector<vector<int>>>& route, vector<pair<int,bool>>& visited, int next)
	{
		visited[next].second = true;

		for (auto r : route[next])
		{
			int nextcnt = r.back() + cnt;

			if (visited[r.front()].first < nextcnt) continue;
			else visited[next].first = cnt;

			if (nextcnt <= sum)
			{
				FindNext(nextcnt, route, visited, r.front());
			}
		}


	}

	int solution(int N, vector<vector<int> > road, int K)
	{
		int answer = 0;
		sum = K;
		map<int, vector<vector<int>>> route;

		for (auto r : road)
		{
			route[r[0]].push_back({ r[1],r[2] });
			route[r[1]].push_back({ r[0],r[2] });
		}

		vector<pair<int,bool>> visited(N+1,{INT_MAX,false});

		FindNext(0, route, visited, 1);


		for (int i = 1; i < visited.size(); i++)
		{
			if (visited[i].second) answer++;
		}

		return answer;
	}