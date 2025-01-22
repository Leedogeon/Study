#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    	map<int, int> Xi;
	map<int, int> Yi;
	map<int, int> res;

	for (auto x : X)
	{
		Xi[x-'0']++;
	}
	for (auto y : Y)
	{
		Yi[y-'0']++;
	}


	for (int i = 0; i <= 9; i++)
	{
		if (Xi.find(i) != Xi.end() && Yi.find(i) != Yi.end())
		{
			res[i] = min(Xi[i],Yi[i]);
		}
	}

    if(res.empty()) return "-1";
	for (auto it = res.rbegin(); it != res.rend(); it++)
	{
		for (int i = 0; i < it->second; i++)
		{
            if(it->first == 0 && answer.empty())
            {
                answer += to_string(it->first);
                break;
            }
            
			answer += to_string(it->first);
		}

	}
    return answer;
}