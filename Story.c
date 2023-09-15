#include<stdio.h>
#include<unistd.h>
#include"decision.c"

void slowPrint(const char *text);
void is_over();
int continue_story(int num);
int check,act=1,process=0,retry=0;

void act1_morning(){
    char di_morning[] = 
    "One day as usually in the morning at the school.\nStudents gathered together to find something to do while waiting in line.\n"
    "07:22 At somewhere in the school.\n"
    "Ton : \"I'm bored lately. Is there anything I can do?\"\n"
    "Poom : \"That said, it's boring. You still do your homework. There's still a lot left.\"\n"
    "Hon : \"Has Teacher Anu's homework been done yet? I have a terrible headache.\"\n"
    "Ton : \"Oh shit, I completely forgot. So have you done with that, Ball?\"\n"
    "Ball : \"Do we even have that homework?\"\n"
    "After Ball's words, they looked at each other and laughed.\n"
    "Hon : \"Because of this, maybe we can be friends.\"\n"
    "Ton : \"I just realized. Have you guys ever heard the legend of the 6th floor at our school?\"\n"
    "Ball : \"What kind of legend is this? A legend that fools my children. I don't want it.\"\n"
    "Ton : \"The legend is that there is a room on the 6th floor where at night the room lights turn on by themselves.\n      And when you look into the room, you will find that there are students all over the room, but the characteristics of the students found are different.\"\n"
    "Poom : \"Does our school organize night classes? Or how about a pajama party in that room, haha.\"\n"
    "After that, Ton's face became solemn and he said seriously.\n"
    "Ton : \"Everyone who saw it in the room You will see that they are lifeless, some have beachheads, some have missing arms, some have blood all over their bodies.\"\n"
    "Ball : \"Isn't that true? You were tricked by someone.\"\n"
    "Hon : \"You might be hallucinating yourself. Have you taken any? haha\"\n"
    "Poom : \"I guess we don't have to line up. We'd better take Ton to the doctor, haha.\"\n"
    "Ton : \"I say, if you guys don't believe it. Let's go prove it?\"\n"
    "Ton's words caused the group's atmosphere to fall into silence for a while. And it was shattered by the sound of the school's buzzer in line.\n"
    "Poom : \"Just forget it. Come on, let's get in line first, then we'll talk about it.\"\n"
    "Hon : \"Okay, let's go get in line first.\"\n"
    "They lined up and didn't talk about it at all. Until the time passed until lunch break.\n\n";
    printf("\nAct 1 : Curiosity is the cause.\n\n");
    printf(di_morning);
}

void act1_lunch(){
    char di_lunch[] = 
    "12:06 At the marble table under the school building.\n"
    "Hon : \"Sign!, why does Teacher Preecha give so much homework?\"\n"
    "Poom : \"Yes, can I make it in time to send it next week?\"\n"
    "Hon : \"You say that but always finish it in time.\"\n"
    "Ball : \"Well, I haven't finished any of my homework yet.\"\n"
    "The three of them nodded in agreement while they ate lunch.\n"
    "Ball : \"So what's wrong with you, Ton? You've been quiet since we came to sit at the table.\"\n"
    "Suddenly, Ton put his hands together and placed on the table. With a solemn expression (the same pose as Conan) and said,\n"
    "Ton : \"I'm waiting for you guys to talk about me. Hehe.\"\n"
    "After Ton's voice ended Poom slapped Ton's head and said.\n"
    "Ton : \"Ouch!!\"\n"
    "Poom : \"What's wrong with you? Say it out.\"\n"
    "Ton : \"Okay, calm down, that's what I'm trying to tell you.\"\n"
    "Ball : I think it's definitely something we talked about in the morning.\n"
    "Ball turned to whisper in Hall's ear.\n"
    "Ton : \"I know you guys might think I'm delusional or whatever. But I really want to know.\"\n"
    "Ball : \"What do you really want to know? I'm really asking you.\"\n"
    "Hon : \"Yes, do you really think that's true?\"\n"
    "Ton : \"I understand, but if you don't prove it, how will you know the truth?\"\n"
    "Hon : \"It mean, you really want to prove it.\"\n"
    "Ton : \"Of course, that's why I want to invite you all to join me.\"\n"
    "Poom : \"Let's go big already. I think you should go back and rest.\"\n"
    "Then there was a small argument among friends. Until Ball stopped this argument by slapping the table. Stand up and say...\n"
    "Ball : \"Fine, I'll join you, okay?\n"
    "Hon and Poom looked shocked at what Ball said.\n"
    "Poom : \"You're serious.\"\n"
    "Hon : \"What the hell did you just say. You should resist, not join.\"\n"
    "Ton : \"That's my bro.\"\n"
    "Ball : \"I know, but I'm just annoyed. Just go and prove it until it's over. You know his personality, right?\"\n"
    "Poom : \"I understand, but I just don't want my friend to be credulous about something that doesn't matter.\"\n"
    "Hon : \"Sign!!!\"\n"
    "Ton : \"And you too?\"\n"
    "Ton spoke while making an funny face.\n"
    "Hon : \"Aright, I'm in.\"\n"
    "Poom : \"Oh fuck, you join with him too. Oh god\"\n"
    "Ton : \"Mr.Poom, I'm waiting for that words.\"\n"
    "Poom : \"Okay!!!, I'm join too\"\n"
    "Poom said while sighing heavily. But Ton had a happy face and acted like he had returned from the battlefield with a great victory.\n"
    "Ton : \"We will talk again in the evening. And then we must expose the truth. and spread the truth to the world!!!!.\"\n"
    "Hon : \"Don't overact!. Shit head.\"\n"
    "Ton : \"Haha, sorry.\"\n"
    "Ball : \"So which day should we do?\"\n"
    "Ton : \"Great question.It tonight.\"\n"
    "Hon : \"Just a moment, man. Tonight?\"\n"
    "Ton : \"Yes, what's wrong?\"\n"
    "Poom : \"Haha. This guy must have gone crazy.\"\n"
    "They laugh at each other, and a few moment later...\n"
    "12:57 The school bell rang.\n"
    "Hon : \"Okay, let's go to the classroom.\"\n"
    "Poom : \"Alright, we'll take about it in the evening.\"\n"
    "Then they went up to their room to continue studying in the afternoon. and wait until after school in the evening\n\n";
    printf(di_lunch);
}

void act1_evening(){
    char di_evening[] = 
    "After school, they gathered together at the same marble table. To discuss and arrange things to do tonight.\n"
    "Ball : \"So what's the plan?\"\n"
    "Ton : \"You'll just walk in mid and killed the sniper. Then we ran into b short after that....\"\n"
    "Once again, Ton got hit on the head by Poom.\n"
    "Ton : \"Ouch!!, sorry.\"\n"
    "Poom : \"We were joined then. Be little more serious.\"\n"
    "Ton : \"Okay, let's start. As everyone knows, behind the school we have a wall that seniors often climb to skip class.\n      So I think we should probably use that road to enter the school.\"\n"
    "Hon : \"And what time do we meet?\"\n"
    "Ton : \"How about 09:45 p.m.?\"\n"
    "Ball : \"That's good. Do you need to prepare anything?\"\n"
    "Ton : \"I don't think so, just a phone should be enough. You have to think about running away from guards or teachers who are on duty.\"\n"
    "Poom : \"Haha. We are very much like thieves. It's like coming in and stealing things.\"\n"
    "Hon : \"I want to ask to be sure. Is there a backup plan in case the back wall of the school becomes impassable for some reason?\"\n"
    "Ton : \"Why are you asking? Or is there another entrance besides this one?\"\n"
    "Hon : \"I'm just asking just in case. Suppose there was a teacher on duty or a guard there. We won't be able to enter.\"\n"
    "Ton : \"There's a reason, but I can't think of any other entrances.\"\n"
    "Poom : \"Hey, I thought of another way.\"\n"
    "Ton : \"Which way?\"\n"
    "Poom : \"It's the one next to the gymnasium. There's a broken wire fence.\"\n"
    "Ball : \"That road is full of grass. Are you going to run towards a king cobra?\"\n"
    "Poom : \"I told you just in case, if you can't enter that way, you can enter this way.\"\n"
    "Ton : \"Well, it's good to have many options. If so, it might be better to wear long pants.\"\n"
    "Ball : \"I definitely won't go that way.\"\n"
    "Ton : \"Well, it's just a choice. I'll repeat it again. We meet behind the school at 9:45 p.m. Bring as little stuff as possible.\n      The important thing is not to forget your phone. And if it's better, wear long pants that allow you to run easily, OK.\"\n"
    "Hon : \"OK, clear.\"\n"
    "Poom : \"Whoever misses the appointment, I hope the ghost will haunt him every night.\"\n"
    "Ball : \"Haha, I hope it's like that too. Because I definitely won't do that.\"\n"
    "Ton : \"Let's keep it real, haha.\"\n"
    "Poom : \"Let's go home. See you at the appointed time.\"\n"
    "Hon : \"See you soon.\"\n"
    "After that, they went their separate ways and went home. Do their own activities while waiting for your appointment time.\nBut did you know that while they were meeting to plan, someone overheard what they were talking about?\n\n";
    printf(di_evening);
}

void act2_behindschool(){
    char appoint[] = 
    "21:27 At the meeting point behind the school.\n"
    " ? : \"Do you think it'll come?\"\n"
    " ? : \"Who do you mean?\"\n"
    " ? : \"Well, those other two?\"\n"
    " ? : \"They must come. The reason you're asking is there's nothing to do, right?\"\n"
    " ? : \"What do you think? We arrived almost 20 minutes before the appointed time.\"\n"
    " ? : \"That's right, but I can't believe that the person looking forward to is you, Poom.\"\n"
    "Poom : \"Well, if you can't resist, just join in, right?. Ball\"\n"
    "Ball : \"Haha. So what time is it now?\"\n"
    "Poom : \"21:32 It's only pass 5 minutes. Take it easy.\"\n"
    "Suddenly, a person appeared and walked towards them.\n"
    " ? : \"What's up guy. You're all excited so had arrived before appoint time. And then Ton came?\"\n"
    "Poom : \"Not yet, but he might be close.\"\n"
    "Hon : \"Okay, so what's the way in like?\"\n"
    "Ball : \"Clear, no one has come.\"\n"
    "Hon : \"Good, then let's wait a little longer. What did you two bring.\"\n"
    "Poom : \"I only brought my phone and a flashlight.\"\n"
    "Ball : \"I brought my phone, candy, and amulets.\"\n"
    "Hon : \"You're that afraid. That legend is not true.\"\n"
    "Ball : \"Having it gives me peace of mind. If it really happened, what would you do?\"\n"
    "Hon : \"A lottery number. My mom want to win the lotterry.\"\n"
    "Poom : \"Haha, I think if we really found it, we would definitely run without thinking about our lives.\"\n"
    "Ball : \"True, haha\"\n"
    "21:41 Ton appeared at the meeting point.\n"
    "Ton : \"How you guy? Come early. Everyone have phone?\"\n"
    "The three of them nodded and showed their phones.\n"
    "Ton : \"Good, when something happened we can contact each other immediately. But I wish there was nothing like that.\"\n"
    "Hon : \"Ton is here. Shall we go in, shall we\"\n"
    "Ton : \"Is the way clear.\"\n"
    "Ball : \"Of course. I already checked.\"\n"
    "Ton : \"Okay, Let's go\"\n"
    "The four of them climbed up the back wall of the school, one by one. Until all 4 people entered.\n"
    "Ton : \"Now we are behind the school. We will go to that room on the 6th floor.\n      First you have to pass the teacher on duty building and walk up the stairs next to the governing room.\"\n"
    "Hon : Why did we go to that side? We can go up to the side of Building 4.\"\n"
    "Poom : \"No, there are only two way to go up the building because they have closed all. The other way is that we have to take the elevator.\"\n"
    "Hon : \"Ah, it's hard. Because the teacher on duty and the guard should come and inspect that area often.\"\n"
    "Ball : \"But if we can go up, there won't be any difficulty. Be careful not to get caught.\"\n"
    "Ton : \"True. So let's go.\"\n\n"
    "The three of them nodded in agreement together and is about to walk to the destination But suddenly, a flashlight was shining on them.\n";
    printf("\nAct 2 : Open your eyes.\n\n");
    printf(appoint);
    while(process == 0){
        printf("What will they do :\n1 : Hide behind pile of broken chairs\n2 : Make noises meow like cat.\n3 : Throw rocks to distract.\n");
        scanf("%d", &check);
        event_1_flashlight(check);
        is_over();
    }
}

void slowPrint(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            usleep(2500000); // หน่วงเวลา 2.5 วินาที หลังขึ้นบรรทัดใหม่
        }
        printf("%c", text[i]);
        fflush(stdout); // อัพเดทข้อมูลที่ถูกบันทึกไว้ใน stdout
        usleep(50000); // หน่วงเวลา 50 มิลลิวินาที (0.05 วินาที) ระหว่างแต่ละตัวอักษร
    }
}

int continue_story(int num){
    printf("Continue....?\n1 : Yes.\n0 : No.\n");
    scanf("%d", &check);
    printf("\n\n");
    if(check == 1){
        act++;
        return num = 1;
    } else {
        return num = 0;
    }
}

void is_over(){
    if(over_yet == 0){
        printf("Game Over\nDo you want to retry?\n1 : Retry.\n0 : Give up.\n");
        scanf("%d", &check);
        if(check == 1){
            process = 0;
            printf("\n");
        } else {
            process = 1;
            printf("\n");
        }
    } else {
        process = 1;
        printf("\n");
    }
}