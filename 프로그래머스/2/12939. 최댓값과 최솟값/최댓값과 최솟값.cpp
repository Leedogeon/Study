#include <string>
#include <vector>
#include <climits>
using namespace std;

string solution(string s) {
    string answer = "";
    int big = INT_MIN;
    int small = INT_MAX;
    
    string temp = "";
    for(int i = 0; i< s.size();i++)
    {
        if(s[i] == ' ')
        {
            if(big < stoi(temp)) big = stoi(temp);
            if(small > stoi(temp)) small = stoi(temp);            
            temp = "";
        }
        else temp += s[i];        
    }
    if(big < stoi(temp)) big = stoi(temp);
    if(small > stoi(temp)) small = stoi(temp);
    
    answer += to_string(small);
    answer += ' ';
    answer += to_string(big);
    
    
    return answer;
}