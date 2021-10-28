#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int player = 1;
int score[9] = {0,0,0,0,0,0,0,0,0};

// gotoxy funtion to move the cursor at different positions.
void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main()
{
     gotoxy(0,0);
     printf("READ THE FOLLOWING RULES,\n");
     printf("1-PRESS ENTER KEY 2 TIMES TO SECLECT ANY SPACE\n");
     printf("2-USE ARRAOW KEYS TO MOVE THE CURSOR\n");
     printf("DONOT PRESS ANY OTHER KEY WHILE PLAYING");
     printf("3-IF ANY PLAYERS CHOOSES ALREADY FILLED SPACE, IT WILL LOSE ITS TURN.\n");
     printf("PRESS ANY KEY TO START");
     getch();
     system("CLS");
     draw1();
     gotoxy(45,8);
     int player = 1;
     mover(1,&player);

     return 0;
}
 void draw1(){
 system("color 79");
     int x=45;
     int y,xx;
     for(x=38;x<93;x++){
    y=11;
    gotoxy(x,y);
    printf("_");
    y=18;
    gotoxy(x,y);
    printf("_");
    }
     x=55;
     xx=75;
     for(y=5;y<26;y++){
    gotoxy(x,y);
    printf("|");
    gotoxy(xx,y);
    printf("|");
    }}

    void mover(int box){
     int a=getch();
     a=getch();
     if(a==77){
       moverright(&box);
               }
     else if(a==75){

          moverleft(&box);
     }
     else if(a==80)
     {
          moverdown(&box);
     }
     else if(a==72){
          moverup(&box);
     }
     else if(a==13){
               if(player == 1){
                   score_writer(&box,&player);
                   player = 2;
                   determiner();
                   mover(box);
               }
               else {
                   score_writer(&box,&player);
                   player = 1;
                   determiner();
                   mover(box);
               }
     }

     }

void moverdown(int *val)
  {
       int box = *val;
       switch (box){
 case 1:
     moverdown1();
     break;
 case 2:
     moverdown2();
     break;
 case 3:
     moverdown3();
 case 4:
     moverdown4();
     break;
 case 5:
     moverdown5();
 case 6:
     moverdown6();
 case 7:
     mover(7);
     break;
 case 8:
     mover(8);
     break;
 case 9:
     mover(9);
 default:
      gotoxy(0,0);
     printf("wrong");
  }}

 void  moverright1(){
       gotoxy(45,8);
       gotoxy(63,8);

       mover(2);

  }

 void moverright(int *val){
      int box = *val;
      switch (box){
 case 1:
     moverright1();
     break;
 case 2:
     moverright2();
     break;
 case 3:
     mover(3);
     break;
 case 4:
     moverright4();
     break;
 case 5:
     moverright5();
 case 6:
     mover(6);
     break;
 case 7:
     moverright7();
     break;
 case 8:
     moverright8();
     break;
 case 9:
     mover(9);
 default:
      gotoxy(0,0);
     printf("wrong");
     break;
      }
 }

void moverright2(){
     gotoxy(63,8);
       gotoxy(83,8);
       mover(3);


}




void moverright4(){
     gotoxy(45,15);
       gotoxy(63,15);
       mover(5);
}

void moverright5(){
     gotoxy(63,15);
       gotoxy(83,15);
       mover(6);

}

void moverright7(){
   gotoxy(45,22);
       gotoxy(63,22);
       mover(8);

}

void moverright8()
{
     gotoxy(63,22);
       gotoxy(83,22);

       mover(9);
}

void moverleft(int *val){
     int box = *val;
     switch(box){
 case 1:
     mover(1);
     break;
 case 2:
     moverleft2();
     break;
 case 3:
      moverleft3();
      break;
 case 4:
     mover(4);
     break;
 case 5:
     moverleft5();
     break;
 case 6:
     moverleft6();
     break;
 case 7:
     mover(7);
     break;
 case 8:
     moverleft8();
     break;
 case 9:
     moverleft9();
     break;
 default:
     break;}
          }

void moverleft2(){
     gotoxy(63,8);
       gotoxy(45,8);
       mover(1);
}

void moverleft3(){
       gotoxy(83,8);
       gotoxy(63,8);
       mover(2);
}

void moverleft5(){
     gotoxy(63,15);
       gotoxy(45,15);
       mover(4);}

void moverleft6(){
     gotoxy(83,15);
       gotoxy(63,15);
       mover(5);}

void moverleft8(){
     gotoxy(63,22);
       gotoxy(45,22);
       mover(7);
}

void moverleft9(){
     gotoxy(83,22);
       gotoxy(63,22);
       mover(8);}

void moverdown1(){
     gotoxy(45,8);
     gotoxy(45,15);
     mover(4);

}

void moverdown2(){
     gotoxy(63,8);
     gotoxy(63,15);
     mover(5);
}

void moverdown3(){
     gotoxy(83,8);
     gotoxy(83,15);
     mover(6);
}

void moverdown4(){
     gotoxy(45,15);
     gotoxy(45,22);
     mover(7);}

 void moverdown5(){
     gotoxy(63,15);
     gotoxy(63,22);
     mover(8);
}

void moverdown6(){
     gotoxy(83,15);
     gotoxy(83,22);
     mover(9);
}

void moverup(int *val){
     int box = *val;
     switch(box){
 case 1:
     mover(1);
     break;
 case 4:
     moverup4();
     break;
 case 7:
      moverup7();
      break;
 case 2:
     mover(2);
     break;
 case 5:
     moverup5();
     break;
 case 6:
     moverup6();
     break;
 case 3:
     mover(3);
     break;
 case 8:
     moverup8();
     break;
 case 9:
     moverup9();
     break;
 default:
      printf("upwrong");
     break;}
          }

 void moverup4(){
     gotoxy(45,15);
     gotoxy(45,8);
     mover(1);
}

void moverup5(){
     gotoxy(63,15);
     gotoxy(63,8);
     mover(2);
}

void moverup6(){
     gotoxy(83,15);
     gotoxy(83,8);

     mover(3);
}

void moverup7(){
     gotoxy(45,22);
     gotoxy(45,15);
     mover(4);
}

void moverup8(){
     gotoxy(63,22);
     gotoxy(63,15);
     mover(5);
}

void moverup9(){
     gotoxy(83,22);
     gotoxy(83,15);
     mover(6);
}

void score_writer(int *val,int *play){
     int p1 = *play;
     int box = *val;
     if (p1 == 1){
          if (score[box-1] != 2){
               score[box-1] = 1;
               printf("P1");
          }
          else {
          gotoxy(0,0);
          printf("BOX ALREADY FILLED. PlAYER 1 LOST ITS TURN");
          sleep(2);
          gotoxy(0,0);
          printf("                                          ");
     }

     }
     else if(p1 == 2){
          if (score[box-1] != 1){
               score[box-1] = 2;
               printf("P2");

          }
          else {
          gotoxy(0,0);
          printf("BOX ALREADY FILLED. PlAYER 2 LOST ITS TURN");
          sleep(2);
          gotoxy(0,0);
          printf("                                          ");
     }
     }

}

# this function onthe basis of score decides if any player wins or not.
int determiner(){
     if (score[0] == score[1] && score[1] == score[2] && score[0] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
          }
     else if(score[3] == score[4] && score[4] == score[5] && score[3] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }
     else if(score[6] == score[7] && score[7] == score[8] && score[8] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }
     else if(score[0] == score[3] && score[3] == score[6] && score[0] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }
     else if(score[1] == score[4] && score[4] == score[7] && score[1] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }
     else if(score[2] == score[5] && score[5] == score[8] && score[2] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }
     else if(score[0] == score[4] && score[4] == score[8] && score[0] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }
     else if(score[2] == score[4] && score[4] == score[6] && score[2] == 1){
          gotoxy(0,0);
          printf("PLAYER 1 WINS");
          getch();
          exit(0);
     }

     if (score[0] == score[1] && score[1] == score[2] && score[0] ==2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");
          printf("4");
          getch();
          exit(0);
          }
     else if(score[3] == score[4] && score[4] == score[5] && score[3] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");
          printf("3");
          getch();
          exit(0);
     }
     else if(score[6] == score[7] && score[7] == score[8] && score[8] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");
          getch();
          exit(0);
     }
     else if(score[0] == score[3] && score[3] == score[6] && score[0] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");

          getch();
          exit(0);
     }
     else if(score[1] == score[4] && score[4] == score[7] && score[1] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");
          getch();
          exit(0);
     }
     else if(score[2] == score[5] && score[5] == score[8] && score[2] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");

          getch();
          exit(0);
     }
     else if(score[0] == score[4] && score[4] == score[8] && score[0] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");
          getch();
          exit(0);
     }
     else if(score[2] == score[4] && score[4] == score[6] && score[2] == 2){
          gotoxy(0,0);
          printf("PLAYER 2 WINS");
          getch();
          exit(0);
     }
     if(score[0] != 0 && score[1] != 0 && score[2] != 0 && score[3] != 0 && score[4] != 0 && score[5] != 0 && score[6] != 0 && score[7] != 0 && score[8] != 0 )
     {
          gotoxy(0,0);
          printf("GAME TIED");
          getch();
          exit(0);
     }

     return 0;
}

