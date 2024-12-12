#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for (auto p : photo)
{
	int sum = 0;
	for (auto p2 : p)
	{
		if (find(name.begin(), name.end(), p2) != name.end())
		{
			sum+= yearning[find(name.begin(), name.end(), p2) - name.begin()];
		}
	}
	answer.push_back(sum);
}
    return answer;
}