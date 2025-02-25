#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int r = 3;
vector<bool> select(number.size(), false);
fill(select.begin(), select.begin() + r, true);

do {
    int sum = 0;
    for (int i = 0; i < number.size(); i++) {
        if (select[i]) sum += number[i];
    }
    if (sum == 0) answer++;
    
} while (prev_permutation(select.begin(), select.end()));
    return answer;
}