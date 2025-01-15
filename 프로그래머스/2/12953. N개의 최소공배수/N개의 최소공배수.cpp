#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i = 1; i< arr.size();i++)
    {
        if(arr[i] == 1) continue;
        
        int LCD = 0;
        
        int big = max(answer,arr[i]);
        int small = min(answer,arr[i]);
        if(big%small == 0) LCD = small;
        else
        {
            int n = big%small;
            int s = small;
            while(s%n != 0)
            {
                int temp = n;
                n = s%n;
                s = temp;
            }
            LCD = n;
        }
        int GCD = big*small / LCD;
        answer = GCD;
    }
    
    return answer;
}