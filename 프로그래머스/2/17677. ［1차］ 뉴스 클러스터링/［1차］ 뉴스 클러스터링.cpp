#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
        unordered_map<string, int> m1, m2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

    for (int i = 0; i < str1.size() - 1; ++i)
    {
        if (isalpha(str1[i]) && isalpha(str1[i + 1]))
        {
            string key = str1.substr(i, 2);
            m1[key]++;
        }
    }

    for (int i = 0; i < str2.size() - 1; ++i)
    {
        if (isalpha(str2[i]) && isalpha(str2[i + 1]))
        {
            string key = str2.substr(i, 2);
            m2[key]++;
        }
    }

    int inter = 0;
    int sum = 0;
    unordered_map<string, int> allKeys = m1;
    for (auto& [k, v] : m2)
        allKeys[k] = max(allKeys[k], v);

    for (auto& [k, v] : allKeys)
    {
        int c1 = m1[k];
        int c2 = m2[k];
        inter += min(c1, c2);
        sum += max(c1, c2);
    }

    if (sum == 0) return 65536;
    return int(65536 * ((double)inter / sum));
}