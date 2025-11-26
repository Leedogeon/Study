public class Solution {
    public string solution(string s) {
        string answer = "";
        int n = 0;
        foreach(char c in s)
        {
            if(c == ' ')
            {
                n = 0;
                answer += " ";
                continue;
            }
            
            if(n%2 == 0)
            {
                answer += char.ToUpper(c);
                n++;
            }
            else 
            {
                answer += char.ToLower(c);
                n++;
            }
            
        }
        return answer;
    }
}