

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int screen_bottom = 15;


int nkey=0;

void drawit()
{
  int i = screen_bottom ; 
  color_set( 0, NULL );
  mvprintw( i++,0,"|   A   | |   B   | |   C   | |   D   | |   E   | |   F   |");
  mvprintw( i++,0,"    " );
  color_set( 2, NULL );
  mvprintw( i,0,"RAD POLAR   CHARS     MODES     MEMORY    STACK   PREV MENU");
  color_set( 7, NULL );
  mvprintw( i++,0,"RAD");
  color_set( 0, NULL );
  mvprintw( i++,0,"|  MTH  | |  PRG  | |  CST  | |  VAR  | |  ^^^  | |  NXT  |");
  color_set( 3, NULL );
  mvprintw( i++,0,"       G         H         I         J         K         L");
  mvprintw( i++,0,"    " );
  color_set( 2, NULL );
  mvprintw( i,0,"UP   HOME DEF   RCL >NUM UNDO PICTURE     VIEW      SWAP  ");
  color_set( 7, NULL );
  mvprintw( i++,0,"UP");
  color_set( 0, NULL );
  mvprintw( i++,0,"|  ''   | |  STO  | |  EVAL | |  <--  | |  vvv  | |  -->  |");
  color_set( 3, NULL );
  mvprintw( i++,0,"       M         N         O         P        Q          R");
  mvprintw( i++,0,"    " );
  color_set( 2, NULL );
  mvprintw( i++,0,"ASIN   $d ACOS   $i ATAN   $s x^2 sqrty 10^x  LOG e^x    LN ");
  color_set( 0, NULL );
  mvprintw( i++,0,"|  SIN  | |  COS  | |  TAN  | |  sqr  | |  y^x  | |  1/x  |");
  color_set( 3, NULL );
  mvprintw( i++,0,"       S         T         U         V        W          X");


  i = screen_bottom -2;
  color_set( 0, NULL );
  mvprintw( i++,0,"|VECT>|MATR>|LIST>|HYP>|REAL>|BASE>|" );
  mvprintw( 0,0,"|n48|{ HOME }|    " );
  //mvprintw( 0,0,"%d", nkey );
}


int main(){
  int gameover = 0; 
  initscr();                      
  keypad(stdscr, true);
  curs_set( 0 );
  noecho();
  start_color();
  init_pair(0, COLOR_WHITE,   COLOR_BLACK);
  init_pair(1, COLOR_RED,     COLOR_BLACK);
  init_pair(2, COLOR_GREEN,   COLOR_BLACK);
  init_pair(3, COLOR_BLUE,    COLOR_BLACK);
  init_pair(4, COLOR_CYAN,    COLOR_BLACK);
  init_pair(6, COLOR_YELLOW,  COLOR_BLACK);
  init_pair(7, COLOR_MAGENTA, COLOR_BLACK);
  color_set( 0, NULL );
  while ( gameover == 0)
  {
           erase();
           drawit();
           refresh();                      /* Print it on to the real screen */                                       
           nkey = getch();                        /* Wait for user input */                                                  
  }
  endwin();
  return 0;                                                                                                  
}                                                                                                                  

