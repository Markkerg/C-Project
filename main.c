#include<stdio.h>
#include"character.c"
#include"Story.c"

int main(){
    printf("Welcome to the game \"Ghost, haunted spirit\"\nPress 1 : Start game.\nPress 0 : Exit.\n");
    scanf("%d", &check);
    if( check == 0){
        return 0;
    }
    Loading();
    while(check == 1){
        if(act == 1){
        Act_1();
        }
        if(continue_story(check) == 1 && act == 2){
            Loading();
            act2_1_behindschool();
            if(continue_story(check) == 1 && act == 3){
                Loading();
                act2_2_roadtothatroom();
            }
        }
    }
    slowPrint("Thank for playing.");
}
