#include <bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<char>> &board, string &word, int i, int j, int k)
{
    if (k == word.length())
        return true;
    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[k])
        return false;
    char temp = board[i][j];
    board[i][j] = '#';
    bool found = dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i - 1, j, k + 1) ||
                 dfs(board, word, i, j + 1, k + 1) || dfs(board, word, i, j - 1, k + 1);
    board[i][j] = temp;
    return found;
}

bool exist(vector<vector<char>> &board, string word)
{
    int m = board.size();
    int n = board[0].size();

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (dfs(board, word, i, j, 0))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<vector<char>> board(m, vector<char>(n));
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> board[i][j];
            }
        }

        string word;
        cin >> word;

        cout << (exist(board, word) ? "true" : "false") << endl;
    }
    return 0;
}