#include <string>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
        map<int,int> arr;
    int len = 0;
    for (int i = 1;; i++)
    {
        if ((long)pow(10, i) >= n)
        {
            len = i;
            break;
        }
    }
    len--;
    while (len != -1)
    {
        long l = (long)pow(10, len);
        int num = n / l;
        arr[num] += 1;
        n -= num*l;
        len--;
    }

    len = 0;
    for (auto m : arr)
    {
        for (int i = 0; i < m.second; i++)
        {
            answer += (long)m.first * (long)pow(10, len);
            len++;
        }
    }
    return answer;
}