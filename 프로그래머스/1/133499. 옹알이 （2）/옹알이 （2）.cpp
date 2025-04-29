#include <string>
#include <vector>
#include<regex>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    regex reg("^(?:(aya)(?!\\1)|(ye)(?!\\2)|(woo)(?!\\3)|(ma)(?!\\4))*$");
    for (auto i : babbling)
    {
        if (regex_match(i, reg))
        {
            answer++;
        }
    }
    return answer;
}