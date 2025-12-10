using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        Dictionary<int,int> dict = new Dictionary<int,int>();
        foreach(var item in lottos)
        {
            if(dict.ContainsKey(item))
            {
                dict[item]++;
            }
            else
            {
                dict.Add(item,1);
            }
        }
        foreach(var item in win_nums)
        {
            if(dict.ContainsKey(item))
            {
                dict[item]++;
            }
            else
            {
                dict.Add(item,1);
            }
        }
        
        int score = 0;
        int cnt = 0;
        foreach(var item in dict)
        {
            if(item.Key == 0)
            {
                cnt = item.Value;
            }
            else if(item.Value == 2) score++;
        }
        int[] answer = new int[2];
        answer[0] = 7- (score+cnt >=2 ? score+cnt : 1);
        answer[1] = 7 - (score >=2 ? score : 1);
        
        return answer;
    }
}