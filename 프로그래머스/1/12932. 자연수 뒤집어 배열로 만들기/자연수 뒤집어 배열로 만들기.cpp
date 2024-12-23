#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(n>0)
    {
        long long num = n%10;
        answer.push_back((int)num);
        n -= num;
        n /= 10;
    }
    
    
    
    return answer;
}