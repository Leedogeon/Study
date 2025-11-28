public class Solution {
    public string solution(string s, int n) {
        string answer = "";
        for(int i=0;i<s.Length;i++)
        {
            if (s[i] == ' ')
            {
                answer += ' ';
                continue;
            }
            if (char.IsUpper(s[i]))
            {
                if (s[i] + n > 'Z')
                {
                    answer += (char)(s[i] + n - 26);
                    continue;
                }
            }
            else if (char.IsLower(s[i]))
            {
                if (s[i] + n > 'z')
                {
                    answer += (char)(s[i] + n - 26);
                    continue;
                }
            }
            answer += (char)(s[i] + n);
        }
        return answer;
    }
}