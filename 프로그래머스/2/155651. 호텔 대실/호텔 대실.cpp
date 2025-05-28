#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int TimeToMin(string Time)
{
	int Hour = stoi(Time.substr(0, 2));
	int Min = stoi(Time.substr(3, 2));
	return Hour * 60 + Min;

}
int solution(vector<vector<string>> book_time) {
    	vector<queue<int>> arr(1000);

	sort(book_time.begin(), book_time.end(), [](const vector<string>& prev,const vector<string>& next) {
		return prev < next;
	});

	int cnt = 0;
	for (auto b : book_time)
	{
		int nextStart = TimeToMin(b[0]);
		int nextTime = TimeToMin(b[1]);
		if (arr.empty())
		{
			arr[cnt++].push(nextTime);
			
		}
		else
		{
			bool chk = false;
			for (int i = 0; i < cnt; i++)
			{	
				if (arr[i].front() <= nextStart-10)
				{
					arr[i].pop();
					arr[i].push(nextTime);
					chk = true;
                    break;
				}
			}
			if (!chk)
			{
				arr[cnt++].push(nextTime);
			}
		}
	}
	return cnt;
}