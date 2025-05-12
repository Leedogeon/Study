#include <string>
#include <vector>

using namespace std;
bool Go = false;
void Find(vector<string> board, int maxY, int maxX , int curY, int curX, char curS,vector<vector<bool>>& visited, bool& Yes)
{
	if(maxX == curX) return;
	if(maxY == curY) return;


	if (board[curY + 1][curX] != curS)
	{
		return;
	}

	if (board[curY][curX+1] != curS)
	{
		return;
	}

	if (board[curY + 1][curX+1] != curS)
	{
		return;
	}

	visited[curY][curX] = true;
	visited[curY+1][curX] = true;
	visited[curY][curX+1] = true;
	visited[curY + 1][curX+1] = true;

	Go = true;
}

void Drop(vector<string>& board, vector<vector<bool>> visited, int curY, int curX)
{
	int Up = 1;
	bool chk = false;
	while (board[curY - Up][curX] == ' ')
	{
		Up++;
		if (curY < Up)
		{
			chk = true;
			break;
		}
	}
	if (!chk)
	{
		board[curY][curX] = board[curY - Up][curX];
		board[curY - Up][curX] = ' ';
	}

}
int solution(int m, int n, vector<string> board) {
    int answer = 0;
    vector<vector<bool>> visited(m, vector(n, false));

bool Yes = false;

while (true)
{

	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] == ' ') continue;
			Find(board, m - 1, n - 1, i, j, board[i][j], visited, Yes);
		}
	}

	if (!Go) break;
	else Go = false;
	
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (visited[i][j] == true)
				board[i][j] = ' ';
		}
	}

	for (int i = 0; i < visited.size(); i++)
	{
		for (int j = 0; j < visited[i].size(); j++)
		{
			if (visited[i][j]) answer++;
		}
	}

	for (int i = board.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] != ' ') continue;

			Drop(board, visited, i, j);

		}
	}
	visited.assign(m, vector<bool>(n, false));
}
    return answer;
}