#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i = 0; i< s.size();i++)
    {
        
        for(int j = 0; j<index;j++)
        {
            s[i]+=1;
            if(s[i] >'z') s[i] = 'a';
            while(find(skip.begin(),skip.end(),s[i])!= skip.end())
            {
            s[i]+=1;
                if(s[i] >'z') s[i] = 'a';
            }
        }
        
        
        answer+= s[i];
    }
    return answer;
}