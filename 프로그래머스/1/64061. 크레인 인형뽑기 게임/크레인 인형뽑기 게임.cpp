#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    	int answer = 0;

	vector<int> box;



	for (auto m : moves)
	{

		for (int i = 0; i < board.size(); i++)
		{
			if (board[i][m-1] == 0) continue;
			else
			{
				if (box.empty()) box.push_back(board[i][m - 1]);
				else
				{
					if (box.back() == board[i][m - 1])
					{
						box.pop_back();
						answer += 2;
					}
					else box.push_back(board[i][m - 1]);

				}

				board[i][m - 1] = 0;
				break;
			}
		}
	}
    return answer;
}