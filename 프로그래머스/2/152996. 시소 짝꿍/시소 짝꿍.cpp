#include <string>
#include <vector>
#include <map>
using namespace std;

long long solution(vector<int> weights) {
    long long answer = 0;
            map<long, long> all;
        for (auto w : weights)
        {
            all[w]++;
        }
        for (auto it = all.begin(); it!= all.end();it++)
{

    answer += (it->second)*(it->second-1) / 2;
    
    if ((it->first * 4) % 3 == 0)
    {
        long target = (it->first * 4) / 3;
        if (all.find(target) != all.end())
        {
            answer += it->second * all[target];
        }
    }

    if ((it->first * 2) % 1 == 0)
    {
        long target = (it->first * 2) / 1;
        if (all.find(target) != all.end())
        {
            answer += it->second * all[target];
        }
    }

    if ((it->first * 3) % 2 == 0)
    {
        long target = (it->first * 3) / 2;
        if (all.find(target) != all.end())
        {
            answer += it->second * all[target];
        }
    }
}

    return answer;
}