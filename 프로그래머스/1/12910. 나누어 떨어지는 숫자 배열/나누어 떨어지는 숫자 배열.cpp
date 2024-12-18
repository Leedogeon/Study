#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    set<int> res;
    for(auto a : arr)
    {
        if(a%divisor == 0) res.insert(a);
    }
    // 문제가 원하는 반환형이 vector<int>라서 {-1}
    if(res.empty()) return {-1};
    
    for(auto r :res)
    {
        answer.push_back(r);
    }
    
    return answer;
}