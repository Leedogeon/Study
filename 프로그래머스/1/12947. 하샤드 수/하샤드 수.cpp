#include <string>
#include <vector>
using namespace std;

bool solution(int x) {
    bool answer = true;
    string num = to_string(x);
    int sum = 0;
    for(auto n : num)
    {
        sum += n-'0';
    }
    if(x%sum == 0) answer = true;
    else answer = false;
    return answer;
}