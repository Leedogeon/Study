#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void generateCombinations(const string& s, map<string,int>& menu, const vector<int>& course)
{
    int n = s.size();
    vector<bool> mask(n, false);

    for (int r : course)
    {
        if (r > n) continue;
        fill(mask.begin(), mask.begin() + r, true);
        fill(mask.begin() + r, mask.end(), false);

        do {
            string subset = "";
            for (int i = 0; i < n; i++)
            {
                if (mask[i]) subset += s[i];
            }
            menu[subset]++;
        } while (prev_permutation(mask.begin(), mask.end()));
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    map<string, int> menu;
    vector<string> answer;

    for (auto& order : orders)
    {
        sort(order.begin(), order.end());
        generateCombinations(order, menu, course);
    }

    vector<pair<string, int>> vmenu(menu.begin(), menu.end());
    sort(vmenu.begin(), vmenu.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    map<int, int> maxFrequency;
    map<int, vector<string>> res;

    for (auto vm : vmenu)
    {
        int len = vm.first.size();
        int count = vm.second;

        if (count < 2) continue;
        if (find(course.begin(), course.end(), len) != course.end())
        {
            if (maxFrequency[len] == 0 || maxFrequency[len] == count)
            {
                maxFrequency[len] = count;
                res[len].push_back(vm.first);
            }
        }
    }

    for (auto& it : res)
    {
        answer.insert(answer.end(), it.second.begin(), it.second.end());
    }

    sort(answer.begin(), answer.end());
    return answer;
}