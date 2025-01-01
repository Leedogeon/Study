#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(string s) {
    int answer = 0;
    string num = "";
    string res = "";
            for (auto q : s)
        {
            int sz = res.size();
            if (q <= '9' && q >= '0')
            {
                res += q;
                continue;
            }

            if (q <= 'z' && q >= 'a')
                num += q;
            
            if (num == "zero") res += '0';
            else if (num == "one") res += '1';
            else if (num == "two") res += '2';
            else if (num == "three") res += '3';
            else if (num == "four") res += '4';
            else if (num == "five") res += '5';
            else if (num == "six") res += '6';
            else if (num == "seven") res += '7';
            else if (num == "eight") res += '8';
            else if (num == "nine") res += '9';
            

            if (res.size() != sz) num = "";
        }

        int len = res.size() - 1;
        for (int i = 0; i <= res.size(); i++)
        {
            answer += (res[i] - '0') * (int)pow(10, len);
            len--;
        }
    return answer;
}