#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
            vector<string> prev;

        vector<vector<int>> cnt(n + 1, vector<int>(1, 0));

        int end = 0;
        for (int i = 0; i < words.size(); i++)
        {
            cnt[i%n+1][0] += 1;

            if (find(prev.begin(), prev.end(), words[i]) != prev.end())
            {
                end = i%n + 1;
                break;
            }
            else if (!prev.empty() && prev.back().back() != words[i].front())
            {
                end = i % n + 1;
                break;
            }
            else prev.push_back(words[i]);
        }
        answer.push_back(end);
        answer.push_back(cnt[end].back());

    return answer;
}