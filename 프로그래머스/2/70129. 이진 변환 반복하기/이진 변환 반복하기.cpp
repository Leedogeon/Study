#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
            vector<int> answer(2, 0);
        vector<int> num;
        for (auto q : s)
        {
            num.push_back(q - '0');
        }
        int cnt = 0;
        while (num.size()!= 1)
        {

            for (auto n : num)
            {
                if (n == 1) cnt++;
                else answer[1]++;
            }
            num.clear();
            while (cnt != 0)
            {
                num.push_back(cnt%2);
                cnt /= 2;
            }
            answer[0]++;
        }

    return answer;
}