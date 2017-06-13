// 09.03.2013
//

#include <iostream>

char Movies[3][3] ={
       {'-','-','-'},
       {'-','-','-'},
       {'-','-','-'}
};

int FirstMove, SecondMove, ThirdMove,FourthMove;

void PrintBoard(){
     char board[100];
     std::printf("| %c | %c | %c |\n| %c | %c | %c |\n| %c | %c | %c |\n",Movies[0][0],Movies[0][1],Movies[0][2],Movies[1][0],Movies[1][1],Movies[1][2],Movies[2][0],Movies[2][1],Movies[2][2]);
     std::cout << board << std::endl;
}

void PlayerTurn(int move){
     switch(move){
        case 1: Movies[0][0] = 'X';break;
        case 2: Movies[0][1] = 'X';break;
        case 3: Movies[0][2] = 'X';break;
        case 4: Movies[1][0] = 'X';break;
        case 5: Movies[1][1] = 'X';break;
        case 6: Movies[1][2] = 'X';break;
        case 7: Movies[2][0] = 'X';break;
        case 8: Movies[2][1] = 'X';break;
        case 9: Movies[2][2] = 'X';break;
    }
}

void BotTurn(int turn){
     if(turn == 1){
         for(int i; i < 3; i++){ // 1 ход
             if(Movies[0][i] == 'X')
                  Movies[1][1] = 'O';
             else if(Movies[1][i] == 'X'){
                  switch(i){
                      case 0: Movies[1][1] = 'O';break; // 1 2 3
                      case 1: Movies[0][0] = 'O';break; // 4 5 6
                      case 2: Movies[1][1] = 'O';break; // 7 8 9
                  }
             }
             else if(Movies[2][i] == 'X')
                  Movies[1][1] = 'O';
         }
     }
     if(turn == 2){
         for(int i; i < 3; i++){
             switch(FirstMove){
                 case 1:{
                     if(SecondMove == 2){ Movies[0][2] = 'O'; break;}
                     else if(SecondMove == 3){ Movies[0][1] = 'O';break;}
                     else if(SecondMove == 4){ Movies[2][0] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 7){ Movies[1][0] = 'O';break;}
                     else if(SecondMove == 8){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 9){ Movies[0][2] = 'O';break;}
                 }
                 case 2:{
                     if(SecondMove == 1){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 2){ std::cout << "Error\n";break;}
                     else if(SecondMove == 3){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 4){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 7){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 8){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 9){ Movies[0][0] = 'O';break;}
                 }
                 case 3:{
                     if(SecondMove == 1){ Movies[0][1] = 'O';break;}
                     else if(SecondMove == 2){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 3){ std::cout << "Error\n";break;}
                     else if(SecondMove == 4){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 7){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 8){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 9){ Movies[1][2] = 'O';break;}
                 }
                 case 4:{
                     if(SecondMove == 1){ Movies[2][0] = 'O';break;}
                     else if(SecondMove == 2){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 3){ Movies[2][0] = 'O';break;}
                     else if(SecondMove == 4){ std::cout << "Error\n";break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 7){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 8){ Movies[0][1] = 'O';break;}
                     else if(SecondMove == 9){ Movies[0][0] = 'O';break;}
                 }
                 case 5:{
                     if(SecondMove == 1){ std::cout << "Error\n";break;}
                     else if(SecondMove == 2){ Movies[2][1] = 'O';break;}
                     else if(SecondMove == 3){ Movies[2][0] = 'O';break;}
                     else if(SecondMove == 4){ Movies[1][2] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[1][0] = 'O';break;}
                     else if(SecondMove == 7){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 8){ Movies[0][1] = 'O';break;}
                     else if(SecondMove == 9){ Movies[2][0] = 'O';break;}
                 }
                 case 6:{
                     if(SecondMove == 1){ Movies[2][1] = 'O';break;}
                     else if(SecondMove == 2){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 3){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 4){ Movies[2][1] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ std::cout << "Error\n";break;}
                     else if(SecondMove == 7){ Movies[2][1] = 'O';break;}
                     else if(SecondMove == 8){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 9){ Movies[0][2] = 'O';break;}
                 }
                 case 7:{
                     if(SecondMove == 1){ Movies[1][0] = 'O';break;}
                     else if(SecondMove == 2){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 3){ Movies[1][2] = 'O';break;}
                     else if(SecondMove == 4){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 7){ std::cout << "Error\n";break;}
                     else if(SecondMove == 8){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 9){ Movies[2][1] = 'O';break;}
                 }
                 case 8:{
                     if(SecondMove == 1){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 2){ Movies[1][2] = 'O';break;}
                     else if(SecondMove == 3){ Movies[1][2] = 'O';break;}
                     else if(SecondMove == 4){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 7){ Movies[2][2] = 'O';break;}
                     else if(SecondMove == 8){ std::cout << "Error\n";break;}
                     else if(SecondMove == 9){ Movies[2][0] = 'O';break;}
                 }
                 case 9:{
                     if(SecondMove == 1){ Movies[0][1] = 'O';break;}
                     else if(SecondMove == 2){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 3){ Movies[1][2] = 'O';break;}
                     else if(SecondMove == 4){ Movies[0][0] = 'O';break;}
                     else if(SecondMove == 5){ std::cout << "Error\n";break;}
                     else if(SecondMove == 6){ Movies[0][2] = 'O';break;}
                     else if(SecondMove == 7){ Movies[2][1] = 'O';break;}
                     else if(SecondMove == 8){ Movies[2][0] = 'O';break;}
                     else if(SecondMove == 9){ std::cout << "Error\n";break;}
                 }
             }
         }
     }
     if(turn == 3){
         switch(FirstMove){
             case 1:{
                  switch(SecondMove){
                      case 2:{
                           switch(ThirdMove){
                               case 4:{Movies[2][0] = 'O'; std::cout << "I win!\n";break;}
                               case 6:{ Movies[2][0] = 'O'; std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 4:{std::cout << "You win =(\n";break;}
                                        case 6:{
                                             Movies[1][0] = 'O';
                                             std::cout << "I think, a draw here!\n";
                                             break;
                                        }
                                    }
                                    break;
                               }
                               case 8:{ Movies[2][0] = 'O'; std::cout << "I win!\n"; break;}
                               case 9:{ Movies[2][0] = 'O'; std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 4:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 6: std::cout << "I think, a draw here!\n"; Movies[2][2] = 'O'; break;
                                    }
                                    break;
                               }
                               case 9:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 4:{
                           switch(ThirdMove){
                               case 2:{ Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 8: std::cout << "I think, a draw here!\n"; Movies[2][2] = 'O'; break;
                                        case 6: Movies[2][1] = 'O'; std::cout << "I win!\n"; break;
                                        case 9: Movies[2][1] = 'O'; std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{ Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{ Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{ Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 2:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 2: Movies[1][0] = 'O';std::cout << "I think, a draw here!\n";break;
                                        case 4: Movies[0][1] = 'O';std::cout << "I win!\n";break;
                                        case 9: Movies[0][1] = 'O';std::cout << "I win!\n";break;
                                    }
                                    break;
                               }
                               case 8:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 2:{ Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{ Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 2: Movies[0][2] = 'O';std::cout << "I think, a draw here!\n";break;
                                        case 3: Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{ Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{ Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 2:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 2: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4: std::cout << "You win =(\n"; break;
                                        case 9: std::cout << "You win =(\n"; break;
                                    }
                                    break;
                               }
                               case 9:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 2:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                     Movies[1][2] = 'O';
                                     switch(FourthMove){
                                         case 2: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                         case 4: std::cout << "You win =(\n"; break;
                                         case 8: std::cout << "You win =(\n"; break;
                                     }
                                     break;
                               }
                               case 8:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                  }break;
             }
             case 2:{
                  switch(SecondMove){
                      case 1:{
                           switch(ThirdMove){
                               case 4:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 6: Movies[2][1] = 'O';std::cout << "I think, a draw here!\n";break;
                                        case 8: Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9: Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 4:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 4: Movies[2][1] = 'O';std::cout << "I think, a draw here!\n";break;
                                        case 7: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 8: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 4:{
                          switch(ThirdMove){
                               case 2:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{ Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3: Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6: Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8: Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 1:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 4: Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8: Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9: Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{ Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 3: std::cout << "You win =(\n"; break;
                                        case 4: Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8: Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;

                               }
                               case 3:{ Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{ Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{ Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 1:{Movies[2][0] = 'O';std::cout << "I win!\n"; break; }
                               case 2:{Movies[2][0] = 'O';std::cout << "I win!\n"; break; }
                               case 4:{Movies[2][0] = 'O';std::cout << "I win!\n"; break; }
                               case 6:{Movies[2][0] = 'O';std::cout << "I win!\n"; break; }
                               case 7:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 1: Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 4: Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 6: Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 9:{Movies[2][0] = 'O';Movies[0][0] = 'O';std::cout << "I win!\n"; break; break;}
                           }
                           break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 3:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 4: Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 8: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3: Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6: Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8: Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 4: Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7: Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8: Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 3: Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6: Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8: Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4: Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6: Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                  }break;
             }
             case 3:{
                  switch(SecondMove){
                      case 1:{
                           switch(ThirdMove){
                               case 4:{Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 4: Movies[2][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7: Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 9: Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 9:{Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 2:{
                           switch(ThirdMove){
                               case 4:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 6: Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7: Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8: Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 4:{
                           switch(ThirdMove){
                               case 2:{Movies[2][2] = 'O'; break;}
                               case 6:{Movies[2][2] = 'O'; break;}
                               case 7:{Movies[2][2] = 'O'; break;}
                               case 8:{Movies[2][2] = 'O'; break;}
                               case 9:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 2:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4:Movies[2][4]= 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:std::cout << "You win =(\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 1:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                  }break;
             }
             case 4:{
                  switch(SecondMove){
                      case 1:{
                           switch(ThirdMove){
                               case 2:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 2:{
                           switch(ThirdMove){
                               case 3:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                       case 6: Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                       case 7: Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                       case 8: Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 9:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 2:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 2:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:std::cout << "You win =(\n"; break;
                                    }
                                    break;
                               }
                               case 9:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 2:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                  }break;
             }
             case 5:{
                 switch(SecondMove){
                     case 2:{
                           switch(ThirdMove){
                               case 3:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 9:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 2:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 4:{
                           switch(ThirdMove){
                               case 2:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 9:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 3:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                           }
                           break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 2:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 2:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 3:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 2:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                      }
                 }break;
             }
             case 6:{
                   switch(SecondMove){
                       case 1:{
                           switch(ThirdMove){
                               case 2:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;}
                               case 3:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                       }
                       case 2:{
                           switch(ThirdMove){
                               case 1:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                       }
                       case 3:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                       }
                       case 4:{
                           switch(ThirdMove){
                               case 1:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                       }
                       case 7:{
                           switch(ThirdMove){
                               case 1:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 4:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                       }
                       case 8:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }
                           break;
                       }
                       case 9:{
                           switch(ThirdMove){
                               case 1:{Movies[2][0] = 'O'; break;}
                               case 2:{Movies[2][0] = 'O'; break;}
                               case 4:{Movies[2][0] = 'O'; break;}
                               case 7:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{Movies[2][0] = 'O'; break;}
                           }break;
                       }
                   }break;
             }
             case 7:{
                  switch(SecondMove){
                      case 1:{
                           switch(ThirdMove){
                               case 2:{Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[1][2] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 2:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 9:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                           }break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 1:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[0][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[2][2] = 'O';std::cout << "I win!\n"; break;
                                        case 9:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 4:{
                           switch(ThirdMove){
                               case 2:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[2][2] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 1:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                  }break;
             }
             case 8:{
                  switch(SecondMove){
                       case 1:{
                           switch(ThirdMove){
                               case 2:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{
                                    Movies[0][1] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{ Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                           }break;
                      }
                      case 2:{
                           switch(ThirdMove){
                               case 2:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[2][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[0][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 2:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 9:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 9:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 4:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}

                           }break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[1][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 1:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 2:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 9:{
                           switch(ThirdMove){
                               case 1:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                  }break;
             }
             case 9:{
                  switch(SecondMove){
                      case 1:{
                           switch(ThirdMove){
                               case 3:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{ Movies[2][1] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }break;
                      }
                      case 2:{
                           switch(ThirdMove){
                               case 3:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 4:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[1][2] = 'O';std::cout << "I win!\n";
                                        case 6:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[1][2] = 'O';std::cout << "I win!\n";
                                    }
                                    break;
                               }
                               case 8:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 3:Movies[1][0] = 'O';std::cout << "I win!\n";
                                        case 4:Movies[0][2] = 'O';std::cout << "I win!\n";
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n";
                                    }
                                    break;
                               }
                           }break;
                      }
                      case 3:{
                           switch(ThirdMove){
                               case 1:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                               case 8:{Movies[1][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 4:{
                           switch(ThirdMove){
                               case 2:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 6:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 7:Movies[2][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 8:Movies[2][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 6:{
                                    Movies[0][2] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[2][0] = 'O';std::cout << "I win!\n"; break;
                                        case 7:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 8:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 7:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 3:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{
                                    Movies[2][0] = 'O';
                                    switch(FourthMove){
                                        case 2:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                           }break;
                      }
                      case 6:{
                           switch(ThirdMove){
                               case 1:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                               case 7:{
                                    Movies[2][1] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[0][0] = 'O';std::cout << "I think, a draw here!\n"; break;
                                        case 4:Movies[0][1] = 'O';std::cout << "I win!\n"; break;
                                    }
                                    break;
                               }
                               case 8:{Movies[2][0] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 7:{
                           switch(ThirdMove){
                               case 1:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{
                                    Movies[1][0] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 3:Movies[1][2] = 'O';std::cout << "I win!\n"; break;
                                        case 6:Movies[0][2] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 3:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 4:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][1] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                      case 8:{
                           switch(ThirdMove){
                               case 1:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 2:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 3:{
                                    Movies[1][2] = 'O';
                                    switch(FourthMove){
                                        case 1:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 2:Movies[1][0] = 'O';std::cout << "I win!\n"; break;
                                        case 4:Movies[0][1] = 'O';std::cout << "I think, a draw here!\n"; break;
                                    }
                                    break;
                               }
                               case 4:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                               case 6:{Movies[0][2] = 'O';std::cout << "I win!\n"; break;}
                           }break;
                      }
                  }break;
             }
         }
     }
}

int main(){
    std::cout << "| 1 | 2 | 3 |\n| 4 | 5 | 6 |\n| 7 | 8 | 9 |\n" << "\n";
    // 1 ход
    std::cin >> FirstMove;
    PlayerTurn(FirstMove);
    PrintBoard();
    // ход бота
    BotTurn(1);
    PrintBoard();
    // 2 ход
    std::cin >> SecondMove;
    PlayerTurn(SecondMove);
    PrintBoard();
    // 2 ход бота
    BotTurn(2);
    PrintBoard();
    //
    std::cin >> ThirdMove;
    PlayerTurn(ThirdMove);
    PrintBoard();
    //
    BotTurn(3);
    PrintBoard();
    //
    std::cin >> FourthMove;
    PlayerTurn(FourthMove);
    PrintBoard();
    //
    BotTurn(3);
    PrintBoard();
    system("Pause");
    return 1;
}
