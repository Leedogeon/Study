#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
        for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            char shifted = (s[i] - 'A' + n) % 26 + 'A';
            answer += shifted;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            char shifted = (s[i] - 'a' + n) % 26 + 'a';
            answer += shifted;
        }
        else
        {
            answer += s[i];
        }
    }
    return answer;
}