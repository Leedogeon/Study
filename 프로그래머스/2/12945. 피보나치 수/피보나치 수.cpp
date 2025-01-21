#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<long long> arr = {0,1};
    if(n <=1) return arr[n]%1234567;
    
    for(int i = 2; i<=n;i++)
    {
        arr.push_back(arr[i-2]%1234567+arr[i-1]%1234567);
    }
    
    return arr.back()%1234567;
}