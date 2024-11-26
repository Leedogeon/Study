#include <string>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    int sort_bycase = 0;

if (sort_by == "code")
	sort_bycase = 0;
else if (sort_by == "date")
	sort_bycase = 1;
else if (sort_by == "maximum")
	sort_bycase = 2;
else if (sort_by == "remain")
	sort_bycase = 3;

int extcase = 0;

auto comparator = [sort_bycase](const std::vector<int>& a, const std::vector<int>& b)
{
	return a[sort_bycase] > b[sort_bycase];
};

priority_queue<std::vector<int>, std::vector<std::vector<int>>, std::function<bool(const std::vector<int>&, const std::vector<int>&)>> pq(comparator);


if (ext == "code")
	extcase = 0;
else if (ext == "date")
	extcase = 1;
else if (ext == "maximum")
	extcase = 2;
else if (ext == "remain")
	extcase = 3;

for (int i = 0; i < data.size(); i++)
{
	if (data[i][extcase] < val_ext) pq.push(data[i]);
}
    	while(!pq.empty())
	{
		answer.push_back(pq.top());
		pq.pop();
	}
    return answer;
}