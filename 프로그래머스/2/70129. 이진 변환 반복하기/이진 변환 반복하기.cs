using System;
using System.Linq;
public class Solution {
    public int[] solution(string s) {
        int[] answer = new int[2] { 0, 0 };

        while(s.Length != 1)
        {
            Console.WriteLine("s = " + s);

            int cnt = s.Where(x => x == '0').Count();
            int cnt2 = s.Where(x => x == '1').Count();

            answer[1] += cnt;
            s = Convert.ToString(cnt2, 2);

            answer[0]++;
        }
        return answer;
    }
}