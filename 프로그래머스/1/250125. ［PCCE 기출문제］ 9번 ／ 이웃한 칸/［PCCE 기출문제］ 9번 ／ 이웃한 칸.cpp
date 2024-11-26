#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    	string find = board[h][w];

	if (h > 0)
	{
		if (board[h - 1][w] == find)
			answer++;
	}
	if (h < board.size() - 1)
	{
		if (board[h + 1][w] == find)
			answer++;
	}

	if (w > 0)
	{
		if (board[h][w-1] == find)
			answer++;
	}
	if (w < board[0].size() - 1)
	{
		if (board[h][w+1] == find)
			answer++;
	}
    return answer;
}