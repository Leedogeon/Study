#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
        bool fst = true;
    for (auto q : s)
    {
        if (q == ' ')
        {
            answer += q;
            fst = true;
            continue;
        }

        if (fst)
        {
            fst = false;
            if (q <= 'z' && q >= 'a')
                answer += (q - 32);
            else answer += q;
        }
        else
        {
           if (q <= 'Z' && q >= 'A')
                answer += (q + 32);
           else answer += q;
        }
    }
    return answer;
}