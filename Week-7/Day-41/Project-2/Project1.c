#include <stdio.h>
#include <stdlib.h>

char board[3][3];

// Function to initialize the game board
void initializeBoard() 
{
  int i,j;	
  // Fill the board with empty spaces
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }
}

// Function to display the game board
void displayBoard() 
{
  int i,j;
  printf("  | 1 | 2 | 3 \n");
  printf("--+---+---\n");
  for (i = 0; i < 3; i++) {
    printf("%d ", i + 1);
    for (j = 0; j < 3; j++) {
      printf("| %c ", board[i][j]);
    }
    printf("|\n");
    printf("--+---+---\n");
  }
}

// Function to check if a player has won
int checkWinner() 
{
  int i,j;
  // Check rows
  for ( i = 0; i < 3; i++) 
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') 
	{
      return board[i][0]; // Return the winning character
    }
  }

  // Check columns
  for (j = 0; j < 3; j++) 
  {
    if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') 
	{
      return board[0][j];
    }
  }

  // Check diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') 
  {
    return board[0][0];
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
  {
    return board[0][2];
  }
  // Check for draw
  for (i = 0; i < 3; i++) 
  {
    for (j = 0; j < 3; j++) 
	{
      if (board[i][j] == ' ') 
	  {
        return 0; // Game not over
      }
    }
  }

  // It's a draw
  return -1;
}

// Function to get player's move
int getPlayerMove(char player) 
{
  int row, col;

  while (1) {
    printf("Player %c, enter your move (row col): ", player);
    scanf("%d %d", &row, &col);

    // Validate move
    if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') 
	{
      printf("Invalid move. Please try again.\n");
      continue;
    }

    return (row - 1) * 3 + col - 1; // Convert row, col to a single index
  }
}

int main() 
{
  char player = 'X';

  initializeBoard();

  while (1)
  {
    displayBoard();

    int move = getPlayerMove(player);
    board[move / 3][move % 3] = player;

    int winner = checkWinner();

    if (winner != 0) 
	{
      displayBoard();
      if (winner == -1) 
	  {
        printf("It's a draw!\n");
      } 
	  else 
	  {
        printf("Player %c wins!\n", winner);
      }
      break;
    }

    // Switch player
    player = (player == 'X') ? 'O' : 'X';
  }

  return 0;
}

