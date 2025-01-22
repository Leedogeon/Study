#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    	queue<string> que;
	map<string, int> all;
	int cnt = 0;
	
	for (auto n : number)
	{
		cnt += n;
	}
	for (int i = 0; i < want.size(); i++)
	{
		all.insert({ want[i],number[i] });
	}

	for (auto d : discount)
	{
		
		if (find(want.begin(), want.end(), d) == want.end())
		{
			que = {};
            for (int i = 0; i < want.size(); i++)
            {
                all[want[i]] = number[i];
            }
			continue;
		}
		

		if (que.size() == cnt)
		{
			string p = que.front();
			que.pop();
			all[p]++;
		}
		que.push(d);
		all[d]--;

		if (que.size() == cnt)
		{
			int chk = 0;
			for (auto m : all)
			{
				if (m.second == 0) chk++;
			}

			if(chk == want.size())
			{
				answer++;
			}
		}
	}
    return answer;
}