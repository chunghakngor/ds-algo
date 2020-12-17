#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// INCOMPLETE CODE BELOW
/*  things to do still
    computer side
    win logic
    ai computer side isntead of random num
*/

const int convertTo25[9] = {6,7,8,11,12,13,16,17,18,};

enum {CIRCLE, CROSS, BORDER, EMPTY};
enum {USERWIN, COMPWIN, DRAW}; 

void InitBoard(int *board){
    int index = 0;
    /* fill the border of board */
    for (index = 0; index < 25; index++){
        board[index] = BORDER;
    }

    /* fill the middle of the board */
    for (index = 0; index < 9; index++){
        board[convertTo25[index]] = EMPTY;
    }
}

void makeMove(int *board, const int square, const turn){
    /* set the index of the board to the side */
    board[square] = turn;
}

int isEmtpy(const int *board){
    /* check the whole board to see if there is a space */
    /* used to check if there are any moves left */
    int index = 0;
    for (index = 0; index < 9; index++){
        if (board[convertTo25[index] == EMPTY]) return 1;
    }
    return 0;
}

void printBoard(const int *board){
    int index = 0;
    char pieces[] = {"OX|-"};
    printf("\n Tic Tac Toe  \n\n");
    for (index = 0; index < 9; index++){
        /* If the index is at the end of the row, print a new line*/
        if (index != 0 && index % 3 == 0){
            printf("\n\n");
        }
        /* print the character inside the piece array at the board index */
        printf("%4c", pieces[board[convertTo25[index]]]);
    }
    printf("\n");
}

int getComputerMoves(const int *board){
    int index = 0;
    int freeLocation  = 0;
    int availableMoves[9];
    int randMove = 0;
    for (index = 0; index < 9; ++index){
        if (board[convertTo25[index]] == EMPTY){
            availableMoves[freeLocation++] = convertTo25[index];
        }
    }
    randMove = (rand() % freeLocation;)
    return availableMoves[randMove];
}


int getUserMove(const int *board){
    char userInput[4];
    int moveOk = 0;
	int move = -1;
	while (moveOk == 0) {
		printf("Please enter a move from 1 to 9:");		
		fgets(userInput, 3, stdin);
        /* fgets the first 3 and the rest is flush */
		fflush(stdin);
		if(strlen(userInput) != 2) {
			printf("Invalid length\n");
			continue;			
		}
		if( sscanf(userInput, "%d", &move) != 1) {
			move = -1;
			printf("Invalid move\n");
			continue;
		}
		if( move < 1 || move > 9) {
			move = -1;
			printf("Invalid range\n");
			continue;
		}
		// Zero indexing
		move--; 
        // check the move location to check if it is not empty
		if( board[convertTo25[move]] != EMPTY) {
			move=-1;
			printf("Square not available\n");
			continue;
		}
		moveOk = 1;
	}
	printf("Making Move...%d\n",(move+1));
	return convertTo25[move];
}

void runGame(){

    int gameOver = 0;
    int turn = CIRCLE;
    int lastMove = 0;
    int board[25];

    InitBoard(&board[0]);
    printBoard(&board[0]);

    while(!gameOver){
        if (turn == CIRCLE){
            getUserMove(&board[0]);
        } else {
            getComputerMoves(&board[0]);
            turn = CIRCLE;
        }
         printBoard(&board[0]);
    }
}

int main(){
    srand(time(NULL));
    runGame();
    return 0;
}