#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int res = 0;
    sort(d.begin(),d.end());
    
    for(auto q : d)
    {
        if(res + q <= budget)
        {
            res += q;
            answer ++;
        }
        else break;
    }
    return answer;
}