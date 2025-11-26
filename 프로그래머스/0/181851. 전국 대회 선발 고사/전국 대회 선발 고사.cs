using System;
using System.Linq;
public class Solution {
    public int solution(int[] rank, bool[] attendance) {
        int[] rank2 = rank.Where((x,index) => attendance[index]).OrderBy(x=>x).ToArray();
        int answer = 0;
        answer += Array.IndexOf(rank, rank2[0]) * 10000;
        answer += Array.IndexOf(rank, rank2[1]) * 100;
        answer += Array.IndexOf(rank, rank2[2]);        
        return answer;
    }
}