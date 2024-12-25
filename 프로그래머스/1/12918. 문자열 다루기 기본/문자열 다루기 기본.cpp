#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.size() == 4 || s.size() ==6)
    {
        for(auto q : s)
        {
            if(q >='0' && q<='9') continue;
            else
            {
                answer = false;
                break;
            }
        }
    }
    else return answer = false;
    return answer;
}