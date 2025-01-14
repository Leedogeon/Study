#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int cnt = 0;
    for(int i = phone_number.size()-1;i>=0;i--)
    {
        if(cnt <= 3)
        {
            cnt++;
            continue;
        }
        
        phone_number[i] = '*';
    }
    return phone_number;
}