#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
        for (int i = 0; i < t.size() - p.size() +1; i++)
    {
        string num = "";
        for (int j = i; j < i+ p.size(); j++)
        {
            num += t[j];
        }
        if (stoll(num) <= stoll(p)) answer++;
    }
    return answer;
}