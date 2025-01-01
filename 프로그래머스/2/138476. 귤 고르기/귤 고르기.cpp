#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
        map<int, int> cnt;
    vector<int> cnt2;
    for (auto t : tangerine)
    {
        cnt[t] += 1;
	}
    
    for (auto c : cnt)
    {
        cnt2.push_back(c.second);
    }

    sort(cnt2.begin(), cnt2.end());
    for (auto it = cnt2.rbegin();it != cnt2.rend();it++)
    {
        k -= *it;
        answer++;
        if (k <= 0) break;
    }
    
    
    return answer;
}