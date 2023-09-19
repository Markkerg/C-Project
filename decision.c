#include<stdio.h>

int over_yet;

void event_1_flashlight(int num){
    if(num == 1){
        char choose1[] = 
        "They chose to hide behind a pile of broken chairs.\nBut they didn't know that there were tiny holes through which they could be seen being caught.\n"
        "Guard : \"Yare yara(jojo ref). You little. You've already been caught.\"\n\n";
        printf(choose1);
        over_yet = 0;
    }
    else if(num == 2){
        char choose2[] = 
        "What the hell were you thinking to do that?. But then, when they did that, the guard then...\n"
        "Guard : \"It's just the sound of a cat, let it be.\"\n";
        printf(choose2);
        over_yet = 1;
    }
    else{
        char choose3[] = 
        "It worked. Guard walking to the place where the stone was thrown. And they all slowly walked away, but...\n"
        "Guard : \"Oh, you guys look down on my keen eyesight as a guard too much, little one.\"\n\n";
        printf(choose3);
        over_yet = 0;
    }
}

void event_2_teacher_on_duty_building(int num){
    if(num == 1){
        char choose1[] = 
        "They chose to send someone to look to make sure no one was there, but....\n"
        "Ton : \"You go.\"\n"
        "Poom : \"Why me? No, you go.\"\n"
        "Ton : \"I'm not going. You go.\"\n"
        "Afterwards, they quarreled until an outcry was heard throughout the area.\nThis made the guards and teachers aware of them and captured them.\n\n";
        printf(choose1);
        over_yet = 0;
    }
    else if(num == 2){
        char choose2[] = 
        "They chose to wait for someone to come out of the room to Make sure it's easy to walk past.\nBut they waited and waited and no one came out until...\n"
        "Teacher on duty : \"What are you guys doing here so late at night?\"\n"
        "Poom : \"Oh no.\"\n\n";
        printf(choose2);
        over_yet = 0;
    }
    else{
        char choose3[] = 
        "Ton : \"I don't think anyone should be there.\"\n"
        "Hon : \"Seriously, what if there was one?\"\n"
        "Ton : \"Belive me, my bro\"\n"
        "After that, they walked past the duty teacher's building easily. Because there was no one there.\n";
        printf(choose3);
        over_yet = 1;
    }
}

void event_3_unknown_in_the_dark(int num){
    if(num == 1){
        char choose1[] = 
        "Ton : \"Whatever comes out Let's beat it up, okay?\"\n"
        "Hon : \"I'm very ready.\"\n"
        "When that thing came out, the three of them ran over to swarm and stomp on that thing mercilessly.\nThen suddenly the previously dark path opened, resulting in enough light to reach that thing, which is Poom.\n"
        "Poom : \"Why are you guys stomping on me?\"\n";
        printf(choose1);
        over_yet = 0;
    }
    else{
        char choose2[] = 
        "Ton : \"Ton took off one shoe.\"\n"
        "Hon : \"What are you going to do?\"\n"
        "Ton : \"You wait and see.\"\n"
        "When that thing comes out Ton immediately threw that shoe at that thing.\n";
        printf(choose2);
        over_yet = 1;
    }
}


void slowPrint(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            usleep(2500000);
        }
        printf("%c", text[i]);
        fflush(stdout);
        usleep(50000);
    }
}