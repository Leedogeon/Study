#include <string>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
	vector<int> arr(3,0);
	int cur = -1;
	vector<string> str;

	string temp = "";
	for (auto d : dartResult)
	{
		if (temp.length()>=2 && isdigit(d))
		{
			str.push_back(temp);
			temp = d;
			
		}
		else temp += d;
	}
	if (!temp.empty()) str.push_back(temp);

	temp = "";
	for (auto st : str)
	{
		cur++;

		temp = "";
		for (auto s : st)
		{
			if (isdigit(s))
			{
				temp += s;
			}
			else
			{
				if(arr[cur]==0) arr[cur] = stoi(temp);
				if (s == 'S') continue;
				else if (s == 'D')
				{
					arr[cur] *= arr[cur];
				}
				else if (s == 'T')
				{
					arr[cur] *= (arr[cur] * arr[cur]);
				}
				else if (s == '*')
				{
					arr[cur] *= 2;
					if (cur != 0)
					{
						arr[cur - 1] *= 2;
					}
				}
				else if (s == '#')
				{
					arr[cur] *= -1;
				}
			}

		}
		
	}

	for (auto a : arr)
	{
		answer += a;
	}
    return answer;
}