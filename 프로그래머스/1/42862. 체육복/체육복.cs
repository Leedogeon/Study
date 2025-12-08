using System;

public class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        bool[] dont = new bool[n];
        bool[] give = new bool[n];
        foreach(var item in lost)
        {
            dont[item-1] = true;
        }
        foreach(var item in reserve)
        {
            give[item-1] = true;
        }
        for(int i = 0; i<n;i++)
        {
            if(dont[i] && give[i])
            {
                dont[i] = false;
                give[i] = false;
            }
        }
        for(int i = n-1; i>=0;i--)
        {
            if(!dont[i]) continue;
            if(i != n-1)
            {
                if(give[i+1])
                {
                    give[i+1] = false;
                    dont[i] = false;
                    continue;
                }
            }
            if(i != 0)
            {
                if(give[i-1])
                {
                    give[i-1] = false;
                    dont[i] = false;
                    continue;
                }
            }
            
        }
        foreach(var item in dont)
        {
            if(!item) answer++;
        }
        
        return answer;
    }
}