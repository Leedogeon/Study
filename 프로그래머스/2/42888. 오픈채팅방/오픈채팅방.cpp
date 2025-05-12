#include <string>
#include <vector>
#include<map>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    	vector<vector<string>> chat;
	map<string, vector<int>> res;
	map<string, string> name;
	string IN = "님이 들어왔습니다.";
	string OUT = "님이 나갔습니다.";

	int i = 0;
	for (auto r : record)
	{
		stringstream ss(r);
		string temp = "";
		vector<string> arr;
		while (ss >> temp)
		{
			arr.push_back(temp);
		}
		
		if (arr[0] == "Enter")
		{
			chat.push_back({ arr[1], IN });
		}
		else if (arr[0] == "Leave")
		{
			chat.push_back({ arr[1], OUT });
		}

		if(arr[0] != "Leave")
			name[arr[1]] = arr[2];

		if (arr[0] != "Change")
		{
			res[arr[1]].push_back(i);
			i++;
		}
	}
	for (auto r : res)
	{
		string last = name[r.first];
		for (auto q : r.second)
		{
			chat[q][0] = last;
		}
	}
	for (auto c : chat)
	{
		answer.push_back(c.front() + c.back());
	}
    return answer;
}