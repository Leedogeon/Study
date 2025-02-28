#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> que;
    
    for(int i =0; i<score.size();i++)
    {
        if(que.size() == k)
        {
            if(que.top() <score[i])
            {
                que.pop();
                que.push(score[i]);
            }
        }
        else que.push(score[i]);
        
        answer.push_back(que.top());
    }
    return answer;
}