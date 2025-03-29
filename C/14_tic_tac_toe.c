#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


void print_board();
void player_input();
void computer_input();
char check_winner();
void reset_board();
int checkFreeSpaces();
void print_Winner();

char board [3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';
char winner = ' ';



int main(){

    
    reset_board();
    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        print_board();
        player_input();
        winner = check_winner();
        if (winner != ' ' || checkFreeSpaces() ==0)
        {
            break;
        }
        computer_input();

        winner = check_winner();
        if (winner != ' ' || checkFreeSpaces() ==0)
        {
            break;
        }
    }
    print_board();
    print_Winner(winner);

    return 0; 
}




void print_board(){
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    
}



void player_input(){
    int x;
    int y;
    printf("Enter x co-ordinate: 1-3 ");
    scanf("%d", &x);
    x--;
    printf("Enter the y co-ordinate:1-3 ");
    scanf("%d", &y);
    y--;

    if (board[x][y] != ' ')
    {
        printf(" This co-ordinate is not free\n");
    }
    do{
       board[x][y] = PLAYER;
       break; 

    }while (board[x][y] !=' ');
}



void computer_input(){
   srand(time(0));
   int x;
   int y;

   if (checkFreeSpaces() > 0)
   {
    do
    {
       x= rand() %3;
       y = rand() %3;
       
    } while (board[x][y] !=' ');

    board[x][y]= COMPUTER;
   }
   else{
    print_Winner();
   }
}




char check_winner(){
  for (int i = 0; i < 3; i++)
  {
    if (board[i][0]==board[i][1] && board[i][2] ==board[i][0])
    {
     return board[i][0];
    }
    
    if (board[0][i]==board[1][i] && board[2][i]==board[0][i])
    {
       return board[0][i];
    }
    if (board[0][0]==board[1][1] && board[0][0]==board[2][2])
    {
       return board [0][0];
    }
    if (board[0][2]==board[1][1] && board[0][2]==board[2][0]){
        return board[0][2];
    }

    return ' ';  
  }
}



void reset_board(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
        
    }
}



int checkFreeSpaces(){
     int free_spaces = 9;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (board[i][j] != ' ')
        {
            free_spaces-- ;
        }
    
      }
      return free_spaces;
    }
}



void print_Winner(){
    if (winner == PLAYER){
       printf("YOU WIN!\n");
    }

    else if (winner== COMPUTER)
    {
       printf("YOU LOOSE\n");
    }
    else{
        printf("IT IS A NO GAME\n");
    }
    
}