#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    
    if(m == 1) return section.size();
    if(section.back()-section.front() < m) return 1;
    
    int NextPos = section[0]+m;
    int cnt = 1;
    for(int i = 1; i< section.size();i++)
    {
        if(section[i] < NextPos) continue;
        if(section[i] >= NextPos)
        {
            cnt++;
            NextPos = section[i]+m;
        }
        
    }
    return cnt;
}