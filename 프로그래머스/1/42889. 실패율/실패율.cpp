#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    	vector<int> clear(N + 1, 0);
	vector<pair<int, float>> per;
	int user = stages.size();
	for (auto s : stages)
	{
		clear[s - 1]++;
	}
	int all = clear[0];
	for (int i = 1; i < clear.size(); i++)
	{
        if(all==0)
            per.push_back({i,0});
        else
		    per.push_back({ i,(float)all / user });
		user -= all;
		all = clear[i];
	}



	sort(per.begin(), per.end(), [](const pair<int, float>& a, const pair<int, float>& b)
	{
		if (a.second == b.second)
			return a.first < b.first;
		return a.second > b.second;
	});

	for (auto p : per)
	{
		answer.push_back(p.first);
	}
    return answer;
}