#include <stdio.h>
void print_board(char tic_tac[][2]);
void fill_array(char tic_tac[][2]);
int check_win(char tic_tac[][2]);
int main(void) {


	char tic_tac[2][2];
	print_board(tic_tac);
	fill_array(tic_tac);

	return 0;
}

void print_board(char tic_tac[][2]) {
	printf("   |\n");
	printf("  %c|%c \n", tic_tac[0][0], tic_tac[0][1]);
	printf(" __|__\n");
	printf("   |\n");
	printf("  %c|%c \n", tic_tac[1][0], tic_tac[1][1]);
	printf("   |\n");

}

void fill_array(char tic_tac[][2]) {
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			tic_tac[i][j] = ' ';
		}
	}


	int turn = 1;
	int game_over = 0;
	int row, col;

	while (game_over == 0) {
		printf("P%d turn: Row:", turn);
		scanf("%d", &row);
		printf("Col: ");
		scanf("%d", &col);
	
		if (turn == 1) {
			tic_tac[row][col] = 'x';
			turn = 2;
		}
		else{
			tic_tac[row][col] = 'o';
			turn = 1;
		}
		print_board(tic_tac);

	}

}

int check_win(char tic_tac[][2]) {
	int i, j;
	//check top left
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			//check right
			if (board[i][j] == board[i][j+1] {
				return 1;
			}
			//check down
			else if (board[i][j] == board[i + 1][j]) {
				return 1;
			}
			//check diagonally
			else if (board[i][j] == board[i = 1][j + 1]) {
				return 1;
			}
		}
	}

	//No win yet
	return 0;

}
