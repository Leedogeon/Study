#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, int k, vector<int> enemy) {
    		priority_queue<int> stage;
		int answer = 0;
		int sum = 0;
		for (auto e : enemy)
		{
			stage.push(e);
			sum += e;

			if (sum > n)
			{
				if (k == 0) break;
				else if (k != 0)
				{
					sum -= stage.top();
					stage.pop();
					answer++;
					k--;
				}
			}
			else answer++;
		}
		return answer;
}