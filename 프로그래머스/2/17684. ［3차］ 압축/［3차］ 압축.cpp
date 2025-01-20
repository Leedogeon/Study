#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int FindWord(vector<pair<string,int>>& alp, string find)
{
    auto it = find_if(alp.begin(), alp.end(), [&](const pair<string, int>& p) {
        return p.first == find;
        });

    if (it != alp.end()) return it->second;
    else return 0;
}
vector<int> solution(string msg) {
    vector<int> answer;
    vector<pair<string, int>> alp;
string A = "A";
alp.push_back({ " ", 0 });
for (int i = 1; i <= 26; i++)
{
    alp.push_back({A,i});
    A[0] += 1;
}
string res = "";
for (int i = 0; i<msg.size();)
{
    res = msg[i];
    if (i == msg.size() - 1)
    {
        answer.push_back(FindWord(alp, res));
        break;
    }
    int cnt = 1;
    string prev = res;
    while (FindWord(alp, res) != 0 && i+cnt != msg.size()+1)
    {
        prev = res;
        res += msg[i+cnt];
        cnt++;
    }
    alp.push_back({ res,alp.size()});
    
    i += cnt - 1;
    answer.push_back(FindWord(alp, prev));
}
    return answer;
}