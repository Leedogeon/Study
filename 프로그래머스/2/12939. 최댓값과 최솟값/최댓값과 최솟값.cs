using System.Linq;
public class Solution {
    public string solution(string s) {
        string answer = "";
        int[] num = s.Split(' ').Select(int.Parse).ToArray();
        answer = num.Min().ToString() + " " + num.Max().ToString();
        return answer;
    }
}