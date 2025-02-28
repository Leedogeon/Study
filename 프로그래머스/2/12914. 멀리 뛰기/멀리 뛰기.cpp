#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<long long> cnt{1,1};
    for(int i=1;i<n;i++)
    {
        cnt.emplace_back((cnt[i-1]+cnt[i])%1234567LL);
    }
    return cnt.back();
}