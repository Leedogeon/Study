#include <string>
#include <vector>
#include<queue>
using namespace std;

int solution(vector<int> players, int m, int k) {
    	int answer = 0;
	int curSv = 0;
	queue<pair<int,int>> time;
	for (int i = 0; i< players.size();i++)
	{
		if (!time.empty())
		{
			if (time.front().second == i-k)
			{
				curSv -= time.front().first;
				time.pop();				
			}
		}
		int res = players[i] / m;
		if (res > curSv)
		{
			time.push({ res - curSv ,i });
			answer += res - curSv;
			curSv = res;
		}
	}
	return answer;
}