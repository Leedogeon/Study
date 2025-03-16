#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
        unordered_map<char, int> res;
    
    res['A'] = 0;
    res['N'] = 0;
    res['C'] = 0;
    res['F'] = 0;
    res['M'] = 0;
    res['J'] = 0;
    res['R'] = 0;
    res['T'] = 0;


    for (int i = 0; i < survey.size(); i++)
    {
        if (choices[i] == 1)
        {
            res[survey[i][0]] += 3;
        }
        else if (choices[i] == 2)
        {
            res[survey[i][0]] += 2;
        }
        else if (choices[i] == 3)
        {
            res[survey[i][0]] += 1;
        }
        else if (choices[i] == 4)
        {
            continue;
        }
        else if (choices[i] == 5)
        {
            res[survey[i][1]] += 1;
        }
        else if (choices[i] == 6)
        {
            res[survey[i][1]] += 2;
        }
        else if (choices[i] == 7)
        {
            res[survey[i][1]] += 3;
        }
    }

    if (res['T'] <= res['R'])
    {
        answer.push_back('R');
    }
    else answer.push_back('T');

    if (res['C'] >= res['F'])
    {
        answer.push_back('C');
    }
    else answer.push_back('F');

    if (res['M'] <= res['J'])
    {
        answer.push_back('J');
    }
    else answer.push_back('M');

    if (res['A'] >= res['N'])
    {
        answer.push_back('A');
    }
    else answer.push_back('N');
    return answer;
}