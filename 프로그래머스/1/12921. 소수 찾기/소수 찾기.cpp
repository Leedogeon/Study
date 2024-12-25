#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    	vector<int> num = { 2 };

	for (int i = 3; i <= n; i++)
	{
		int cnt = 0;
		bool chk = false;
		for (auto r : num)
		{
			if ((int)pow(r,2) > n) break;

			if (i % r == 0)
			{
				chk = false;
				break;
			}
			else
			{
				chk = true;
			}
		}
		if (chk) num.emplace_back(i);
	}
    return num.size();
}