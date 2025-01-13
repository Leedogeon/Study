#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
            int answer = -1;
        vector<int> num(number + 1, 1);
        for (int i = 1; i <= number; i++)
        {
            for (int j = 1; j <= i / 2; j++)
            {
                if (i%j == 0) num[i]++;
            }
        }

        for (auto n : num)
        {
            if (n > limit) answer += power;
            else answer += n;
        }
    return answer;
}