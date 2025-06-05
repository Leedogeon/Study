#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
	int answer = 0;

	vector<char> temp;
	for (auto s : skill)
	{
		temp.push_back(s);
	}

	for (auto s : skill_trees)
	{
		int cnt = 0;
		bool chk1 = false;

		for (int i = 0; i < s.size(); i++)
		{
			if (cnt < temp.size() && temp[cnt] == s[i])
			{
				cnt++;
				continue;
			}
			for (int j = cnt+1; j < temp.size(); j++)
			{
				if (s[i] == temp[j])
				{
					chk1 = true;
					break;
				}
			}
			if (chk1)
			{
				break;
			}
		}
		if (chk1) continue;
		else answer++;


	}

	return answer;
}