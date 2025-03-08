#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
        for (int i = 0; i < s.size(); i++)
    {
        vector<char> temp;
        bool chk = true;
        for (int j = 0; j < s.size(); j++)
        {
            char input = s[(i + j) % s.size()];
            if (input == '{' || input == '(' || input == '[')
            {
                temp.push_back(input);
            }
            else
            {
                if (temp.empty())
                {
                    chk = false;
                    break;
                }

                if (input == '}')
                {

                    if(temp.back() == '{')                
                        temp.pop_back();
                    else
                    {
                        chk = false;
                        break;
                    }

                }

                if (input == ')')
                {

                    if (temp.back() == '(')
                        temp.pop_back();
                    else
                    {
                        chk = false;
                        break;
                    }

                }
                if (input == ']')
                {

                    if (temp.back() == '[')
                        temp.pop_back();
                    else
                    {
                        chk = false;
                        break;
                    }

                }
            }
        }
        if (temp.empty() && chk) answer++;
    }
    return answer;
}