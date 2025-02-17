#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    if (n % 2 == 1) return 0;
    
    const int MOD = 1000000007;
    vector<long long> arr(n + 1, 0);
    arr[0] = 1;
    arr[2] = 3;

    for (int i = 4; i <= n; i += 2)
    {
        long long sum = (3 * arr[i - 2]) % MOD;
        for (int j = 0; j < i - 2; j += 2)
        {
            sum = (sum + (2 * arr[j]) % MOD) % MOD;
        }
        arr[i] = sum;
    }

    return (int)arr[n];
}