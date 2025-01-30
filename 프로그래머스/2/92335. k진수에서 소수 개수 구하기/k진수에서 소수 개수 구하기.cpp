#include <string>
#include <vector>
#include<math.h>
using namespace std;

int solution(int n, int k) {
    int answer = 0;
    	vector<int> arr;

	while (n != 0)
	{
		arr.push_back(n % k);
		n /= k;
	}
	
	vector<long long> nums;
	string num = "";
	for (auto it = arr.rbegin(); it != arr.rend(); it++)
	{
		if (*it != 0) num += to_string(*it);
		else
		{
			if(!num.empty())
				nums.push_back(stol(num));

			num = "";
		}
	}
	if (!num.empty()) nums.push_back(stol(num));

	for (auto n : nums)
	{
		if (n == 1) continue;
		bool chk = true;
		for (long long i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				chk = false;
				break;
			}
			else chk = true;
		}
		if (chk) answer++;
	}
    return answer;
}