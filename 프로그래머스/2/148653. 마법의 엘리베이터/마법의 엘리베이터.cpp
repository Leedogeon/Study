#include <string>
#include <vector>

using namespace std;

int solution(int storey) {
    int answer = 0;
    string num = to_string(storey);
    vector<int> arr(num.size()+1,0);
    int rnum = 0;
    for(int i = num.size()-1;i>=0;i--)
    {
        arr[rnum++] = num[i]-'0';
    }
    
    for(int i = 0; i<arr.size()-1;i++)
    {
        if(arr[i] == 0) continue;
        
        if(arr[i] == 10)
        {
             arr[i+1]++;
            continue;
        }
        
        
        if (arr[i] == 5)
        {
            if (arr[i + 1] >= 5)
            {
                arr[i + 1] += 1;
                answer += 10 - arr[i];
            }
            else answer += arr[i];
        }
        else if (arr[i] >= 6)
        {
            arr[i+1]++;
            answer += 10 - arr[i];
        }
        else answer += arr[i];
    }
    answer += arr.back();
    
    return answer;
}