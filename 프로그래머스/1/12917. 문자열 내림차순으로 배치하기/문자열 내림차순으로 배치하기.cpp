#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";
	map<int, pair<char,int>> arr;
	
	for (auto r : s)
	{
		if(arr.find(r-'0') == arr.end())
			arr[r - '0'] = { r,1 };
		else
		{
			arr[r - '0'].second += 1;
		}
	}
	
	for (auto it = arr.rbegin(); it != arr.rend(); ++it)
	{
		for (int i = 0; i < it->second.second;i++)
		{
			answer += it->second.first;
		}

	}
    return answer;
}