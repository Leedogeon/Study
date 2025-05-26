#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
queue<int> que1;
queue<int> que2;

long long sum1 = 0;
long long sum2 = 0;
for (int i = 0; i < queue1.size(); i++)
{
	que1.push(queue1[i]);
	que2.push(queue2[i]);
	sum1 += queue1[i];
	sum2 += queue2[i];
}

if ((sum1+sum2) % 2 != 0) return -1;

while (sum1 != sum2)
{
	if (que1.size() == 0 || que2.size() == 0) return -1;

	if (answer / 2 > que1.size() + que2.size()) return -1;

	if (sum1 > sum2)
	{
		que2.push(que1.front());
		sum1 -= que1.front();
		sum2 += que1.front();
		que1.pop();
	}
	else if (sum1 < sum2)
	{
		que1.push(que2.front());
		sum2 -= que2.front();
		sum1 += que2.front();
		que2.pop();
	}

	answer++;
}
return answer;
}