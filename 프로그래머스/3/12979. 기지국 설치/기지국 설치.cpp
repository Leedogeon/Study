#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;

    int prev = 1;
	int next = 1;

	int index = 0;
	for (int i = 0; i < stations.size(); i++)
	{
		next = stations[i] - w >= prev ? stations[i] - w : prev;
		if (prev >= next)
		{
			prev = stations[i] + (w + 1);
		}
		else
		{
			float sum = (float)(next - prev) / (2 * w + 1);
			answer += ceil(sum);
			prev = stations[i] + w + 1;
		}


	}

	if (prev < n)
	{
		float sum = (float)(n - prev) / (2 * w + 1);
		answer += ceil(sum);
	}
    if(prev == n)
    {
        answer++;
    }

    return answer;
}