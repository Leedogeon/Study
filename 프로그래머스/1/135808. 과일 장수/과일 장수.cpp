#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(),score.rend());
    
    int sum = 0;
    int stack = 0;
    for(auto s : score)
    {
        if(s > k) continue;
        
        sum+=s;
        stack++;
        if(stack == m)
        {
            answer += s*m;
            stack = 0;
        }
    }
    
    return answer;
}