#include <string>
#include <vector>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    	vector<int> temp;

	int want = 0;
	int num = 1;

	while (true)
	{
		if (num == order[want])
		{
			want++;
			num++;
			answer++;
		}
		else
		{
			if (temp.empty())
			{
				temp.push_back(num);
				num++;
			}
			else
			{
				if (temp.back() == order[want])
				{
					temp.pop_back();
					answer++;
					want++;
				}
				else
				{
					temp.push_back(num);
					num++;
				}
			}
		}
		if (num > order.size()) break;
	}

	while (!temp.empty())
	{
		if (temp.back() == order[want])
		{
			temp.pop_back();
			answer++;
			want++;
		}
		else break;
	}
    return answer;
}