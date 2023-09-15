#include<stdio.h>
#include"character.c"
#include"Story.c"

int check=1;

int main(){
    printf("Welcome to the game \"Ghost, haunted spirit\"\nPress 1 : Start game.\nPress 0 : Exit.\n");
    scanf("%d", &check);
    if( check == 0){
        return 0;
    }
    while(check == 1){
        if(process == 0){
        act1_morning();
        act1_lunch();
        act1_evening();
        }
        if(continue_story(check) == 1 && act == 2){
            act2_behindschool();
            printf("%d", check);
        }
    }
}
