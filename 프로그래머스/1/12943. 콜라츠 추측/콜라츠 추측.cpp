#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long lnum = num;
    int cnt = 0;
    while(cnt != 500)
    {
        if(lnum == 1) break;
        
        if(lnum%2 == 0) lnum/=2;
        else lnum = lnum*3+1;
        
        cnt++;
    }
    if(cnt < 500) return cnt;
    else return -1;
}