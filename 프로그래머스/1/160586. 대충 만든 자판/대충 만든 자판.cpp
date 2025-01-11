#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
            vector<int> alp(26, 0);
        for (int i = 0; i < keymap.size(); i++)
        {
            for (int j = 0; j < keymap[i].size(); j++)
            {
                int place = (keymap[i][j] - 0) % 65;
                if (alp[place] == 0)  alp[place] = j+1;
                else alp[place] = min(alp[place], j+1);
            }
        }

                for (int i = 0; i < targets.size(); i++)
        {
            int sum = 0;
            bool chk = false;
            for (int j = 0; j < targets[i].size(); j++)
            {
                if (alp[(targets[i][j] - 0) % 65] == 0)
                {
                    chk = true;
                    break;
                }
                sum += alp[(targets[i][j] - 0) % 65];
            }
            if (chk) answer.push_back(-1);
            else answer.push_back(sum);
        }
    return answer;
}