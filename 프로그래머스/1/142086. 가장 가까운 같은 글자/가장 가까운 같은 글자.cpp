#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> alp(26,-1);
        for (int i = 0; i < s.size(); i++)
        {
            
            if (alp[ (s[i] - '0') %49] != -1) 
                answer.push_back(i - alp[(s[i] - '0') % 49]);
            else answer.push_back(-1);
            
            alp[(s[i] - '0') % 49] = i;
        }
    return answer;
}