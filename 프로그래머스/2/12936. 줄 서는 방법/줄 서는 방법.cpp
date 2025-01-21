#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long k) {
    vector<int> answer;
    	long long sum = 1;
	vector<vector<int>> num(n+1,vector<int>(1,-1));
	vector<long long> nCr = {1,1};
	for (int i = 2; i < n; i++)
	{
		nCr.push_back(nCr[i - 1] * i);
	}

	for (int i = n; i >= 1; i--)
	{
		long long input;
        if (i == 1) input = 0;
        input = (k - 1) / nCr[i - 1] + 1;
		long long cnt = 0;
		for (int j = 1; j <= n; j++)
		{			
			if (num[j][0] == -1) cnt++;

			if (cnt == input)
			{
				input = j;
				break;
			}
		}
		answer.push_back(input);
		num[input][0] = 1;
		k -= (k - 1) / nCr[i- 1] * nCr[i - 1];
	}
    return answer;
}