#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    	int answer = 0;

sort(dungeons.begin(), dungeons.end());

do {
	int curk = k;
	int cnt = 0;
	for (auto& d : dungeons) 
	{
		if (curk >= d[0])
		{
			cnt++;
			curk -= d[1];
		}
	}
	answer = max(answer, cnt);
} while (next_permutation(dungeons.begin(), dungeons.end()));
    return answer;
}