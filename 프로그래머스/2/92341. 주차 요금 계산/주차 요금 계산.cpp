#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
using namespace std;
int TimeToMin(string Time)
{
	int Hour = stoi(Time.substr(0, 2));
	int Min = stoi(Time.substr(3, 2));
	return Hour * 60 + Min;

}
int TimeDiff(string start, string end)
{
	int prev = TimeToMin(start);
	int next = TimeToMin(end);

	return next - prev;
}
vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    	map<string, int> money;
	vector<vector<string>> res;
	map<string, vector<pair<string,string>>> pk;
	for (auto r : records)
	{
		vector<string> temp;

		string inputStr(r), tmp;
		stringstream ss(inputStr);
		
		while (ss >> tmp)
		{
			temp.push_back(tmp);
		}
		res.push_back(temp);
	}

	for (auto r : res)
	{	
		pk[r[1]].push_back(make_pair(r[0], r[2]));
	}
	for (auto p : pk)
	{
		int diff;
		string t1 = "";
		string t2 = "";
		for (int i = 0; i < p.second.size();i++)
		{
			if (p.second[i].second == "IN")
			{
				t1 = p.second[i].first;
			}
			else if (p.second[i].second == "OUT")
			{
				t2 = p.second[i].first;
			}
			
			if (!t1.empty() && !t2.empty())
			{
				diff = TimeDiff(t1,t2);
				money[p.first] += diff;
				t1 = "";
				t2 = "";
			}
		}
		if (!t1.empty() && t2.empty())
		{
			diff = TimeDiff(t1, "23:59");
			money[p.first] += diff;
		}

	}

	for (auto m : money)
	{
		if (m.second > fees[0])
		{
			answer.push_back(fees[1] +  ceil(((float)(m.second - fees[0]) / fees[2])) * fees[3]);
		}
		else answer.push_back(fees[1]);
	}
    return answer;
}