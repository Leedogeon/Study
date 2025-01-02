#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> num;
    while(n!=0)
    {
        num.push_back(n%3);
        n/=3;
    }
    int len = 0;
    for(auto it = num.rbegin();it!=num.rend();it++)
    {
        answer += *it * (int)pow(3,len);
        len++;
    }
    
    return answer;
}