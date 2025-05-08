#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
	char start = ' ';
	int prev = 0;
	int next = 0;

	for (auto q : s)
	{
		if (start == ' ')
		{
			start = q;
			prev++;
			continue;
		}
		if (start == q)
			prev++;
		else next++;

		if (prev == next)
		{
			answer++;
			prev = 0;
			next = 0;
			start = ' ';
		}
	}

	if (prev !=0) answer++;
    return answer;
}