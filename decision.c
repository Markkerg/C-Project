#include<stdio.h>

int over_yet;

void event_1_flashlight(int num){
    if(num == 1){
        printf("\nThey chose to hide behind a pile of broken chairs.\nBut they didn't know that there were tiny holes through which they could be seen being caught.\n");
        printf("Guard : \"Yare yara(jojo ref). You little. You've already been caught.\"\n\n");
        over_yet = 0;
    }
    else if(num == 2){
        printf("\nWhat the hell were you thinking to do that?. But then, when they did that, the guard then...\n");
        printf("Guard : \"It's just the sound of a cat, let it be.\"\n");
        over_yet = 1;
    }
    else{
        printf("\nIt worked. Guard walking to the place where the stone was thrown. And they all slowly walked away, but...\n");
        printf("Guard : \"Oh, you guys look down on my keen eyesight as a guard too much, little one.\"\n\n");
        over_yet = 0;
    }
}

