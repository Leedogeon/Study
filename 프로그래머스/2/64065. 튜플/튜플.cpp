#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    	string temp = "";
	int max = -1;
	unordered_map<int, int> num;
	for (auto q : s)
	{
		if (q == '{') continue;
		if (q == '}')
		{
			max++;
			continue;
		}
		if (q == ',')
		{
			num[stoi(temp)]++;
			temp = "";

		}
		else temp += q;
	}
	if (!temp.empty())
	{
		num[stoi(temp)]++;
	}

	vector<int> arr(max,0);

	for (auto n : num)
	{
		arr[n.second-1] = n.first;
	}

	for (auto it = arr.rbegin(); it!=arr.rend();it++)
	{
		answer.push_back(*it);
	}
    return answer;
}