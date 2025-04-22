#include <string>
#include <vector>
#include <bitset>
using namespace std;


int Find(int num)
{
	bitset<20> bits(num);
	int count = 0;
	auto str = bits.to_string();

	for (auto s : str)
	{
		if (s == '1') count++;
	}

	return count;
}

int solution(int n) {
    int answer = 0;
    	int start = Find(n);

	while (true)
	{
		n = n + 1;
		if (Find(n) == start)
		{
			answer = n;
			break;
		}
	}
    return answer;
}