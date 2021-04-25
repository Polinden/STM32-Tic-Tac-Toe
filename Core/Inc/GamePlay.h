
#define COMPUTER -1 
#define HUMAN -1
#define SIDE 3 
#define COMPUTERMOVE 'O' 
#define HUMANMOVE 'X' 


class GamePlay {
public:
	GamePlay();
	int move(int ind);
	void initialise();
	void setMode(int i);
private:
	char board[SIDE][SIDE];
	int  whoseTurn;
	int  moveIndex;
	bool finished;
	int  mode;
    bool gameOver(char board[SIDE][SIDE]);
	void declareWinner(int whoseTurn);
	bool rowCrossed(char board[SIDE][SIDE]); 
 	bool columnCrossed(char board[SIDE][SIDE]); 
	bool  diagonalCrossed(char board[SIDE][SIDE]); 
	int minimax(char board[SIDE][SIDE], int depth, bool isAI);
	int bestMove(char board[SIDE][SIDE], int moveIndex);
};

