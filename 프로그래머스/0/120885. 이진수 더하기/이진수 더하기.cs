using System;

public class Solution {
    public string solution(string bin1, string bin2) {
        int answer = Convert.ToInt32(bin1, 2) + Convert.ToInt32(bin2, 2);
        return Convert.ToString(answer,2);
    }
}