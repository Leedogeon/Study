#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void func(vector<vector<int>>& arr, vector<vector<int>>& res, vector<int> chk, int i)
{
	for (int j = 0; j < arr[i].size(); j++)
	{
		if (!chk.empty() && find(chk.begin(), chk.end(), arr[i][j]) != chk.end())
			continue;

		chk.push_back(arr[i][j]);
		
		if (arr.size() == i+1)
		{
			bool input = true;
			vector<int> schk = chk;
			sort(schk.begin(), schk.end());
			for (auto r : res)
			{
				if (r == schk)
				{
					input = false;
					break;
				}	
			}
			if (input) res.push_back(schk);
		}
		else func(arr, res, chk, i+1);

		chk.pop_back();
	}


}
int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    	vector<vector<int>> arr(banned_id.size());

	for (int i = 0; i < user_id.size(); i++)
	{
		for (int j = 0; j < banned_id.size(); j++)
		{
			if (banned_id[j].size() != user_id[i].size()) continue;
			int pcnt = 0;
			int cnt = 0;
			for (int k = 0; k < banned_id[j].size(); k++)
			{
				if (banned_id[j][k] == '*')
					pcnt++;

				if (banned_id[j][k] != '*' && banned_id[j][k] == user_id[i][k])
				{
					cnt++;
				}
			}

			if (pcnt + cnt == banned_id[j].size())
			{
				arr[j].push_back(i);
			}
		}
	}

    if(arr.size() == 1) return arr[0].size();
    
	vector<vector<int>> res;
	vector<int> chk;

	int cnt = 1;
	for (int i = 0; i < arr[0].size(); i++)
	{
		chk.push_back(arr[0][i]);

		func(arr, res, chk, cnt);
		chk.clear();
	}
	answer = res.size();
    return answer;
}