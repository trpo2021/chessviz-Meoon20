#include <iostream>
#include <string>

using namespace std;

string board[9][9];
bool board_b[9][9];

struct figura {
    string KING_W, QUEEN_W, BISHOP_W, KNIGHT_W, ROOK_W, PAWNS_W; // белые фигуры
    string KING_B, QUEEN_B, BISHOP_B, KNIGHT_B, ROOK_B, PAWNS_B; // черные фигуры

    figura() 
        // Названия черных фигур
     :    KING_B{"Kb"},
          QUEEN_B{"Qb"},
          BISHOP_B{"Bb"},
          KNIGHT_B{"KNb"},
          ROOK_B{"Rb"},
          PAWNS_B{"Pb"},
        // Названия белых фигур
          KING_W{"Kw"},
          QUEEN_W{"Qw"},
          BISHOP_W{"Bw"},
          KNIGHT_W{"KNw"},
          ROOK_W{"Rw"},
          PAWNS_W{"Pw"}
    {

    }
};
void ChessBoard()
{
    char num = 'a';
    for (int i = 0; i < 8; i++) {
        //cout << "\t\t\t" << 8 - i;
        for (int j = 0; j < 9; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
   // cout << "\t\t\t";

}
void ChessBoard_DefaultPosition()
{
    figura f;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            board[i][j] = "|__|";
            board_b[i][j] = 0;
        }
    }
    for (int i = 0; i < 9; i++) {
        board[1][i] = "|" + f.PAWNS_B + "|"; board[1][i] = 1;
        board[6][i] = "|" + f.PAWNS_W + "|"; board[6][i] = 1;
    }
    board[0][1] = board[0][8] = "|" + f.BISHOP_B + "|";
    board_b[0][1] = board_b[0][8] = 1;

    board[7][1] = board[7][8] = "|" + f.BISHOP_W + "|";
    board_b[7][1] = board_b[7][8] = 1;

    board[0][2] = board[0][7] = "|" + f.KING_B + "|";
    board_b[0][2] = board_b[0][7] = 1;

    board[7][2] = board[7][7] = "|" + f.KING_W + "|";
    board_b[7][2] = board_b[7][7] = 1;

    board[0][3] = board[0][6] = "|" + f.ROOK_B + "|";
    board_b[0][3] = board_b[0][6] = 1;

    board[7][3] = board[7][6] = "|" + f.ROOK_W + "|";
    board_b[7][3] = board_b[7][6] = 1;

    board[0][4] = "|" + f.QUEEN_B + "|";
    board_b[0][4] = 1;

    board[0][5] = "|" + f.KNIGHT_B + "|";
    board_b[0][5] = 1;

    board[7][4] = "|" + f.QUEEN_W + "|";
    board_b[7][4] = 1;

    board[7][5] = "|" + f.KNIGHT_W + "|";
    board_b[7][5] = 1;

    ChessBoard();
}
int main()
{
    ChessBoard_DefaultPosition();
}