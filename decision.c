#include<stdio.h>
#include"GUI.c"

int over_yet;

void event_1_flashlight(int num){
    if(num == 1){
        char choose1[] = 
        "They chose to hide behind a pile of broken chairs.\nBut they didn't know that there were tiny holes through which they could be seen being caught.\n"
        "Guard : \"Yare yara(jojo ref). You little. You've already been caught.\"\n\n";
        inFramePrint(choose1);
        over_yet = 0;
    }
    else if(num == 2){
        char choose2[] = 
        "What the hell were you thinking to do that?. But then, when they did that, the guard then...\n"
        "Guard : \"It's just the sound of a cat, let it be.\"\n";
        inFramePrint(choose2);
        over_yet = 1;
    }
    else if (num == 3){
        char choose3[] = 
        "It worked. Guard walking to the place where the stone was thrown. And they all slowly walked away, but...\n"
        "Guard : \"Oh, you guys look down on my keen eyesight as a guard too much, little one.\"\n\n";
        inFramePrint(choose3);
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
        inFramePrint(choose1);
        over_yet = 0;
    }
    else if(num == 2){
        char choose2[] = 
        "They chose to wait for someone to come out of the room to Make sure it's easy to walk past.\nBut they waited and waited and no one came out until...\n"
        "Teacher on duty : \"What are you guys doing here so late at night?\"\n"
        "Poom : \"Oh no.\"\n\n";
        inFramePrint(choose2);
        over_yet = 0;
    }
    else{
        char choose3[] = 
        "Ton : \"I don't think anyone should be there.\"\n"
        "Hon : \"Seriously, what if there was one?\"\n"
        "Ton : \"Belive me, my bro\"\n"
        "After that, they walked past the duty teacher's building easily. Because there was no one there.\n";
        inFramePrint(choose3);
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
        inFramePrint(choose1);
        over_yet = 0;
    }
    else{
        char choose2[] = 
        "Ton : \"Ton took off one shoe.\"\n"
        "Hon : \"What are you going to do?\"\n"
        "Ton : \"You wait and see.\"\n"
        "When that thing comes out Ton immediately threw that shoe at that thing.\n";
        inFramePrint(choose2);
        over_yet = 1;
    }
}

void event_4_question1(int num){
    if(num == 1){
        over_yet = 1;
    } 
    else if(num == 2){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
    else if(num == 3){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
    else{
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
}

void event_4_question2(int num){
    if(num == 1){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    } 
    else if(num == 2){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
    else if(num == 3){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
    else{
        over_yet = 1;
    }
}

void event_4_question3(int num){
    if(num == 1){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    } 
    else if(num == 2){
        over_yet = 1;
    }
    else if(num == 3){
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
    else{
        char wrong[] = 
        "After answering the board on the door transformed into a large mouth with sharp teeth and said…\n"
        "Door : \"You gave the wrong answer, you fool.\"\n"
        "The door then absorb everyone's flesh in and then disappeared. Turning the four of them into lifeless skeletons.\n";
        inFramePrint(wrong);
        over_yet = 0;
    }
}

void event_choose_your_way(int num){
    inFramePrint("\nOnce they had decided on a route, they headed straight away.\nIn front of them was the path they had chosen, but behind the path no one knew anything.");
    inFramePrint("Ton : \"Let's go, guys.\"\nThey all walked into the path one by one.\nAnother side of the dimension.\n");
    if(num == 1){
        char way1[] = 
        "Ton : \"Are we all together? So is anyone get hurt?\"\n"
        "Poom : \"I'm still here and safe. You okay, Hon?.\"\n"
        "Hon : \"I'm alright. Is Ball alright?\"\n"
        "Ball : \"I'm fine, but why are there dim lights?\"\n"
        "Poom : \"It seems like it's evening. But the environment looks familiar.\"\n"
        "Hon : \"Same, hey, what's that in front of you?\"\n"
        "Ton : \"Is it someone's house? It seems like there are people living there.\"\n"
        "Poom : \"This is an old Thai wooden house. What era are we in?\"\n"
        "While they were wondering, there was a girl. Came up from behind them and walked past them.\n"
        "Poom : \"Where did she come from? Follow us into the dimension?\"\n"
        "Ton : \"It's impossible. No one will definitely follow us, I'm sure. Moreover,\n      she just walked past us like we didn't even exist.\"\n"
        "Hon : \"That girl walked towards that house. Shall we follow her?\"\n"
        "Ton : \"Okay, in case we will know something.\"\n"
        "They followed the girl to that house. And when they went up to the house, they found a grandmother lying there.\n"
        "Girl : \"Grandma, how are you?\"\n"
        "Grandma : \"I'm fine. There's nothing to worry about.\"\n"
        "Girl : \"I only have you left. How can I not be worried?\"\n"
        "Grandma : \"I'm healthy. Have you eaten anything yet? I'll make you eat it.\"\n"
        "Girl : \"I've eaten. Have you eaten and take the medicine yet?\"\n"
        "Grandma : \"I've eaten, and taken medicine already.\"\n"
        "Girl : \"So Grandma, take a rest first. I'll go do housework.\"\n"
        "The girl got up and walked downstairs.\n"
        "Hon : \"What am I seeing? What is this?\"\n"
        "Poom : \"I don't know, but it's like it's trying to tell us some kind of story.\"\n"
        "Ton : \"I'm feel like that. Because right now \n      it's like the dimension is speeding up time to nighttime.\"\n"
        "Ball : \"Oh, that's true. Looking out, it's really dark.\"\n"
        "Later, the girl walked up to the house with a lantern.\nWalked over to where Grandma lay, put the lantern down next to her, and sat down next to Grandma."
        "Ball : \"The story will begin to be told again.\"\n"
        "Ton : \"Let's take a closer look.\"\n"
        "The girl struck up a conversation with the grandmother lying next to her.\n"
        "Girl : \"Grandma, if I grow up I want to be a flight attendant. I want to take Grandma on a trip around the world.\n       When that time comes, where does Grandma want to go?\"\n"
        "Grandma was silent.\n"
        "Girl : \"I suspect she slept very deeply. Anyway, Grandma is very tired after taking care of me all this time,\n       but I want Grandma to know my dreams. Grandma will be at ease.\"\n"
        "Grandma is still unresponsive. This made the girl very curious so she shook her grandmother slightly.\n"
        "Girl : \"Grandma, are you still asleep?\"\n"
        "The little girl slowly began to shake her grandmother harder. But there was still no response.\nThe girl immediately checked her pulse. But there was no longer Grandma's vital sign.\n"
        "Girl : \"Grandma, please wake up.\"\n"
        "The girl began to cry and immediately got up to get a clear look at her grandmother's condition.\nBut when the girl got up, her leg kicked the lamp, causing the oil in the lamp to spill on the floor.\n"
        "Hon : \"I think it's not good. I need to get that lamp away from the oil.\"\n"
        "Ball : \"Hon, be careful!\"\n"
        "Hon ran to grab the lit lantern and get away from the spilled oil.\nWhen his hand reached the lamp he could not take it.\n"
        "Hon : \"Guys, I can't catch it.\"\n"
        "And when the fire in the lamp met the oil spilled on the floor, a fire occurred.\nPlus the floor is wooden, causing it to spread quickly. Crying girl tries to wake up her grandmother.\nShe noticed that the house was on fire.\n"
        "Girl : \"Grandma, there's a fire in the house. Grandma, wake up.\"\n"
        "The four people were looking for a way to do something, but it didn't work.\n"
        "Ton : \"Damn it, we couldn't catch anything. Like this, we can't help at all.\"\n"
        "Poom : \"Why does it have to be like this? I don't want it.\"\n"
        "The girl, both scared and sad, realized the hopelessness she faced.\nThe girl decided to abandon everything and wish for happiness for herself and her grandmother in the next life.\n"
        "The four of them could only stand and watch the scene in front of them without being able to do anything.\nThis made them unable to hold back their tears and feel great heartache.\n"
        "Hon : \"What is this crazy thing? Why did it let me see something like this?\"\n"
        "Ton : \"Damn, so sad. I wish that girl to be as happy in her next life.\"\n";
    }
    else if(num == 2){
        char way2[] =
        "Ton : \"Anyone hurt?\"\n"
        "Poom : \"I'm fine. What about the other two\"\n"
        "Hon : \"I'm here but where is Ball?\"\n"
        "The three of them looked at each other and started to worry.\nBecause where they were right now was a construction site.\n"
        "Hon : \"Where is your ball?\"\n"
        "Ball : \"I'm here.\"\n"
        "When the three of them heard that response, they immediately ran over.\n"
        "Hon : \"Why are you here? We are worried.\"\n"
        "Ball : \"I don't know, it's like I was kicked and sent here.\n       But come look at the place where they built it.\"\n"
        "Poom : \"Why? Hmm?\"\n"
        "Ton : \"This area is like our school.\"\n"
        "Hon : \"Probably yes, but is the area like this?\"\n"
        "Poom : \"It may have been a long time ago. Now we don't even know what year it is.\"\n"
        "? : \"The area here is good. It's very wide and has a lot of usable space.\"\n"
        "? : \"Yes, I am the owner of this place.\"\n"
        "While they were talking, the sounds of two people talking could be heard. Make them turn and look.\n"
        "Man : \"This area right here. I received it as an inheritance but I don't know what to use it for.\nSo I'm offering it for sale to you.\"\n"
        "Uncle : \"Haha, I really like this area.\n        I'm glad you offered me this low price because I'm going to build the greatest industry in this province.\"\n"
        "Man : \"I was happy to hear that. But if I want to add a little more\"\n"
        "Uncle : \"No matter how much you want to add, take it. I'm a generous person.\"\n"
        "Man : \"Thank you very much.\"\n"
        "Ball : \"The dimension will tell me the business talk of someone I don't know, for what reason?\"\n"
        "Ton : \"I don't know, but hey, it seems like the clouds are moving faster.\"\n"
        "In the blink of an eye, time turned into night. And the location changed to being inside someone's house.\n"
        "Hon : \"Are we traveling through time?\"\n"
        "Poom : \"I don't know, but in front of me there was a uncle during the daytime.\"\n"
        "Ton : \"Is he talking on the phone? Let's go listen a little bit.\"\n"
        "Uncle : \"Is the target in range? OK. That's him. Go ahead and shoot it.\"\n"
        "Ball : \"What? Who shot what?\"\n"
        "Hon : \"I don't know.\"\n"
        "In a split second, they were teleported into someone's car.\n"
        "Ball : \"We got warped again. Now we're at that guy's car.\"\n"
        "Poom : \"Talking on the phone while driving. It's dangerous.\"\n"
        "Man : \"We're rich. I earned a lot. How did I get it? I tricked to selling the land to that idiot.\n      He also believes that this is the inheritance that I received."
        "Hon : \"I want to punch this motherfucker. How can you do this?\"\n"
        "Poom : \"Even if you're angry, you won't be able to punch him. So please stay calm.\"\n"
        "Hon : \"Damn it!!\"\n"
        "Man : \"And that area over there? It belongs to someone I don't know.\n      I impersonated it and made fake documents...\"\n"
        "At that moment, a bullet shot through the car's window and hit the man in the head.\nThis caused the car he was driving to lose control and crash into a tree on the side of the road."
        "Ball : \"What the fuck is this? What kind of event is this?\"\n"
        "Ton : \"Or was it the uncle from just now who gave the order to shoot?\"\n"
        "Poom : \"Even though what this man did was wrong, was it necessary to kill each other?\"\n"
        "And immediately they were teleported again.\n"
        "Ton : \"It's like we're warping again. And now it's raining...oh.\"\n"
        "Hon : \"What story will the dimensions convey?\"\n"
        "Ton : \"I don't know, but why aren't there any workers? Where have they all gone?\"\n"
        "Poom : \"You guys come look at this.\"\n"
        "When they turned to look, they saw that there was a sign on the board that said about the work.\nIt was found that he had been working for 204 days and the number of deaths was more than 23 people.\n"
        "Poom : \"More than 20 people have died at this construction site. What the fuck is this?\"\n"
        "? : \"It's all gone. What is this, this area? Does it have a mystery or what?\n   Why isn't it finished? Why? Why?\"\n"
        "In the midst of the raging rain, there was a man crying in sorrow.\nAnd that man was the nameless uncle whose name they didn't know.\n"
        "Uncle : \"My factory, my money, my business, everything was destroyed. Why did happen!!!\"\n"
        "Hon : \"That's that uncle. Don't you feel sorry for the workers who died?\n      You only worried about myself. Damn it.\"\n"
        "Ball : \"Hey, hey, what is this uncle going to do?\"\n"
        "Poom : \"It gun!!!. Don't tell me next!!.\"\n"
        "Suddenly, that uncle fired a shot at his own head. and the body fell down and became lifeless.\n"
        "Poom : \"Again, this too much. What story is it trying to convey? I don't understand.\"\n"
        "Ton : \"No one understands. The story was cut like this. I don't know where it came from...\"\n";
    }
    else if(num == 3){

    }
    else if(num == 4){

    }
    else{

    }
    inFramePrint("Then time sped up and took the four of them somewhere.\nPoom : \"Oh, what the fuck? Did we get warped again?\"\nTon : \"That's probably right. Where did we get teleported to?\"\nHon : \"Hey guys, this is our school.\"\nTon : \"Oh, that's true. And what part of the school are we in?\"\nBall : \"A balcony walkway like this. Hmm. You guys look at that room.\"\nEveryone turned to look at one of the classrooms that had light shining out of it.\nTon : \"We've arrived, right? On the 6th floor.\"\nPoom : \"I don't know, but please, I'm so tired.\"\nBall : \"There was something unknown in the shape of a person walking out of the room.\"\nTon : \"Everyone, stay sharp!!\"\nThe light in the room shone through something like a shadow of a person outside the room.\nAnd that thing was walking out until it appeared in front of them.\nTeacher : \"What are you all doing here so late at night?\"\n\n");
}

void event_5_first_attempt(int num){
    if(num == 1){
        char open[] = 
        "When Hall opened the door, he found that There was nothing on the other side of the door,\nwhich made me feel relieved. But behind him, there was the sound of gunfire behind him,\nand when he turned around.\n"
        "Hon : \"Oh no.\"\n"
        "In front of him was a man holding a gun and the corpses of his friends who had been shot silently.\n"
        "Man : \"I just forgot to shoot someone. Thank you for opening the door for me and goodbye.\"\n";
        inFramePrint(open);
        over_yet = 1;
    } else {
        char notopen[] =
        "Hall chose not to open it and backed away from the door.\nBut on the other side of the door, he started pounding on the door harder and harder. Along with saying....\n"
        "? : \"Don't let me go in. You brats, I'm going to shoot you all.\"\n";
        inFramePrint(notopen);
        over_yet = 0;
    }
}

void event_6_confused(int num){
    if(num == 1){
        char open[] =
        "When Bhumi opened the door, he found a man standing covered in blood.\n"
        "Man : \"I thank you very much. If you don't open it, I will definitely die.\n      Even though I'm already dead, haha. But it would be better if you died with me.\"\n"
        "The man then grabbed Phum's head and twisted Phum's neck, causing Poom to die.\n";
        inFramePrint(open);
        over_yet = 1;
    } else {
        over_yet = 0;
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