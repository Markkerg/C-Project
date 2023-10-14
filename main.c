#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include"Story.c"


int main(){

    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    char welcom [] = "Welcome to the game \"Ghost Room\"\n1 : Start game. \n2 : Exit. \n";
    int check = decisionPrint(welcom);
    if(check == 2){
        char thank [] = "Thank you for playing";
        inFramePrint(thank);
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        return 0;
    }
    Loading();
    while(check == 1){
        if(act == 1){
        Act_1();
        }
        if(check == 1 && act == 2){
            Loading();
            act2_1_behindschool();
            if(check == 1 && act == 3){
                Loading();
                act2_2_roadtothatroom();
                if(check == 1 && act == 4){
                    Loading();
                    act3_endingofstory();
                }
            }
        }else{
            char thank [] = "Thank you for playing";
            inFramePrint(thank);
            tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
            return 0;
        }
    }
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
