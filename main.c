    #include <stdio.h>
    #include <stdlib.h>



                             char arr[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
                             int c=0;
                             int z=0;
                             int i;
                             int print(){

                               printf("player 1 'X' and player 2 'O'\n\n");
                               printf("\t\t 1 | 2 | 3 \n");
                               printf("\t\t___|___|__\n");
                               printf("\t\t 4 | 5 | 6 \n");
                               printf("\t\t___|___|__\n");
                               printf("\t\t 7 | 8 | 9 \n");
                               printf("\t\t   |   |    \n");
                               printf("\nEnter a number from 1 to 9\n\n");
                               printf("\t\t %c | %c | %c \n",arr[0][0],arr[0][1],arr[0][2]);
                               printf("\t\t___|___|__\n");
                               printf("\t\t %c | %c | %c \n",arr[1][0],arr[1][1],arr[1][2]);
                               printf("\t\t___|___|__\n");
                               printf("\t\t %c | %c | %c \n",arr[2][0],arr[2][1] ,arr[2][2]);
                               printf("\t\t   |   |    \n");
                            }

                             int insert(int a,char arr[3][3]){

                                 if(a==1){
                                      if(c==0){
                                          arr[0][0]='X';
                                          c=1;
                                      }
                                      else {
                                        arr[0][0]='O';
                                        c=0;
                                      }
                                    system ("cls");
                                    print();
                                  }
                                  if(a==2){

                                    if(c==0){
                                          arr[0][1]='X';
                                          c=1;
                                      }
                                      else {
                                        arr[0][1]='O';
                                        c=0;
                                      }
                                    system ("cls");
                                    print();
                                  }
                                   if(a==3){
                                      if(c==0){
                                          arr[0][2]='X';
                                          c=1;
                                      }
                                      else {
                                        arr[0][2]='O';
                                        c=0;
                                      }
                                    system ("cls");
                                    print();
                                  }
                                   if(a==4){
                                  if(c==0){
                                      arr[1][0]='X';
                                      c=1;
                                  }
                                  else {
                                    arr[1][0]='O';
                                    c=0;
                                  }
                                system ("cls");
                                print();
                              }
                               if(a==5){
                                  if(c==0){
                                      arr[1][1]='X';
                                      c=1;
                                  }
                                  else {
                                    arr[1][1]='O';
                                    c=0;
                                  }
                                system ("cls");
                                print();
                              }
                               if(a==6){
                                  if(c==0){
                                      arr[1][2]='X';
                                      c=1;
                                  }
                                  else {
                                    arr[1][2]='O';
                                    c=0;
                                  }
                                system ("cls");
                                print();
                              }
                               if(a==7){
                                  if(c==0){
                                      arr[2][0]='X';
                                      c=1;
                                  }
                                  else {
                                    arr[2][0]='O';
                                    c=0;
                                  }
                                system ("cls");
                                print();
                              }
                               if(a==8){
                                  if(c==0){
                                      arr[2][1]='X';
                                      c=1;
                                  }
                                  else {
                                    arr[2][1]='O';
                                    c=0;
                                  }
                                system ("cls");
                                print();
                              }
                               if(a==9){
                                  if(c==0){
                                      arr[2][2]='X';
                                      c=1;
                                  }
                                  else {
                                    arr[2][2]='O';
                                    c=0;
                                  }
                                system ("cls");
                                print();
                              }
                              }

                          isWinning() {

                               if((arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X')
                                 || (arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X')
                                 || (arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')
                                 || (arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X')
                                 || (arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X')
                                 || (arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X')
                                 || (arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X')
                                 || (arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X')
                                      ){

                                  printf("\nplayer one is the winner\n");
                                  z=1;

                                }
                               else if((arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O')
                                      || (arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O')
                                      || (arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O')
                                      || (arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O')
                                      || (arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O')
                                      || (arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O')
                                      || (arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O')
                                      || (arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O')
                                       ) {

                                  printf("\nplayer two is the winner\n");
                                  z=1;

                                }

                                else if(i==8){
                                    printf("Tie");
                                }
                          }

                            int main()
                            {
                                int a;
                                char X , O;
                                 print();
                                 for( i=0;i<9;i++){

                                        if(z==1){
                                            break;
                                        }
                                  scanf("%d",&a);
                                  if(a>9||a<1){
                                    printf("please enter a number from 1 to 9\n");
                                    continue;
                                  }

                                  insert(a,arr);
                                  isWinning();
                                   }
                            }

