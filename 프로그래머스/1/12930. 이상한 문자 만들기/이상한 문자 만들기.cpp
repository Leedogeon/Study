#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z'))
		{
			answer.push_back(s[i]);
			cnt = 0;
			continue;
		}

		if (cnt % 2 == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				answer.push_back(s[i] - 32);
			else answer.push_back(s[i]);
		}
		else
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				answer.push_back(s[i]);
			else answer.push_back(s[i] + 32);
		}

		cnt++;
	}
    return answer;
}