#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void Find(vector<string> words, string begin, string target, int count, vector<int>& counts, set<string> visited, string cur)
{
	if (cur == target)
	{
		counts.push_back(count);
		return;
	}

	auto s = visited.insert(cur);
	if (s.second == false) return;

	for (int i = 0; i < words.size(); i++)
	{
		auto it = visited.find(words[i]);
		if (it != visited.end()) continue;

		int same = 0;
		for (int j = 0; j < words[i].size(); j++)
		{
			if (words[i][j] == cur[j]) same++;
		}
		if (same == cur.size() - 1)
		{
			Find(words, begin, target, count+1, counts, visited, words[i]);
		}
	}

}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
	vector<int> counts;
	set<string> visited;
	auto it = find(words.begin(), words.end(), target);
	if (it == words.end())
	{
		return 0;
	}

	Find(words, begin, target, 0, counts,visited,begin);

	if(counts.size() != 0) return *min_element(counts.begin(), counts.end());
    else return 0;
    
}