#include<stdio.h>
#include<unistd.h>
#include"decision.c"

void is_over();
void continue_story();
int check,act=1,process=0;

void Act_1(){
    char di_act1[] = 
    "Students gathered together to find something to do while waiting in line.\n"
    "07:22 At somewhere in the school.\n"
    "Ton : \"I'm bored lately. Is there anything I can do?\"\n"
    "Poom : \"That said, it's boring. You still do your homework. There's still a lot left.\"\n"
    "Hon : \"Has Teacher Anu's homework been done yet? I have a terrible headache.\"\n"
    "Ton : \"Oh shit, I completely forgot. So have you done with that, Ball?\"\n"
    "Ball : \"Do we even have that homework?\"\n"
    "After Ball's words, they looked at each other and laughed.\n"
    "Hon : \"Because of this, maybe we can be friends.\"\n"
    "Ton : \"I just realized. Have you guys ever heard the myth of the 6th floor at our school?\"\n"
    "Ball : \"What kind of myth is this? A myth that fools my children. I don't want it.\"\n"
    "Ton : \"The myth is that there is a room on the 6th floor where at night the room lights turn on by themselves. And when you look into the room, you will find that there are students all over the room, but the characteristics of the students found are different.\"\n"
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
    "They lined up and didn't talk about it at all. Until the time passed until lunch break.\n"
    
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
    "Then they went up to their room to continue studying in the afternoon. and wait until after school in the evening\n"
    
    "After school, they gathered together at the same marble table. To discuss and arrange things to do tonight.\n"
    "Ball : \"So what's the plan?\"\n"
    "Ton : \"You'll just walk in mid and killed the sniper. Then we ran into b short after that....\"\n"
    "Once again, Ton got hit on the head by Poom.\n"
    "Ton : \"Ouch!!, sorry.\"\n"
    "Poom : \"We were joined then. Be little more serious.\"\n"
    "Ton : \"Okay, let's start. As everyone knows, behind the school we have a wall that seniors often climb to skip class. So I think we should probably use that road to enter the school.\"\n"
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
    "Ton : \"Well, it's just a choice. I'll repeat it again. We meet behind the school at 9:45 p.m. Bring as little stuff as possible. The important thing is not to forget your phone. And if it's better, wear long pants that allow you to run easily, OK.\"\n"
    "Hon : \"OK, clear.\"\n"
    "Poom : \"Whoever misses the appointment, I hope the ghost will haunt him every night.\"\n"
    "Ball : \"Haha, I hope it's like that too. Because I definitely won't do that.\"\n"
    "Ton : \"Let's keep it real, haha.\"\n"
    "Poom : \"Let's go home. See you at the appointed time.\"\n"
    "Hon : \"See you soon.\"\n"
    "After that, they went their separate ways and went home. Do their own activities while waiting for your appointment time.\t\t\t\n";
    frameCreate();
    inFramePrint("Act 1 : Curiosity is the cause.\nOne day as usually in the morning at the school.\n",act1_img);
    frameCreate();
    inFramePrint(di_act1,school_img);
    continue_story();
}

void act2_1_behindschool(){
    char sneakin[] = 
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
    "Hon : \"You're that afraid. That myth is not true.\"\n"
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
    "Ton : \"Now we are behind the school. We will go to that room on the 6th floor. First you have to pass the teacher on duty building and walk up the stairs next to the governing room.\"\n"
    "Hon : Why did we go to that side? We can go up to the side of Building 4.\"\n"
    "Poom : \"No, there are only two way to go up the building because they have closed all. The other way is that we have to take the elevator.\"\n"
    "Hon : \"Ah, it's hard. Because the teacher on duty and the guard should come and inspect that area often.\"\n"
    "Ball : \"But if we can go up, there won't be any difficulty. Be careful not to get caught.\"\n"
    "Ton : \"True. So let's go.\"\n";
    
    char headtostairs[] = 
    "The guard passed by as if nothing had happened.\n"
    "Ton : \"Guard had already passed by. Let's go.\"\n"
    "The four of them then got up and headed towards the stairs next to the governing room. While they were walking, they had some small talk.\n"
    "Ball : \"Well, we've come this far and I still don't know. Which room is it?\"\n"
    "Poom : \"Oh, I forgot to think. Which room is it?\"\n"
    "Ton : \"Be honest, I don't know too.\"\n"
    "Ball : \"Hey, weren't you the one who brought us here? How can you not know?\"\n"
    "Ton : \"Well, from what I've heard, it's not the same room in every nights.\"\n"
    "Hon : \"Great. The damn event happened randomly room.\"\n"
    "Ton : \"You can say that. Therefore, we had to go up and look before we knew which room it was.\"\n"
    "Ball : \"But don't you have any doubts? The building is not tall enough to reach the sky.  Myth room on the 6th floor, there is only one room. Why don't the teachers or the guards know?\"\n"
    "Poom : \"There's a reason, but what if he knows but pretends not to know?\"\n"
    "Ball : \"You can think from that point. But it still makes me suspicious.\"\n"
    "Ton : \"You starting to wonder right now?\"\n"
    "Ball : \"I'm just realized this now.\"\n"
    "While they were talking softly along the way, Suddenly, a mysterious black object fell from a high place. causing a loud sound\n"
    "Ton : \"Shhh!!. Wait. Are you heard about that.\"\n"
    "Hon : \"With my both ears.\"\n"
    "Poom : \"I heard it too.\"\n"
    "Ball : \"What is that shit sound?\"\n"
    "Ton : \"I don't know, but the sound probably came from that direction.\"\n"
    "And then Ton pointed his finger at the source of the sound.\n"
    "Hon : \"There's something black.\"\n"
    "Poom : \"What is it? I can't see clearly.\"\n"
    "Ton : \"I don't know either. Do you want to go and see?\"\n"
    "Hon : \"Going is crazy, but if you go you have to go all together.\"\n"
    "At that moment, the mysterious black object stretched upwards. like a human being standing straight.\n"
    "Hon : \"Hey, it's stretched up?\"\n"
    "Poom : \"I don't know, but at first it wasn't this high, right?\"\n"
    "Hon : \"It's true. So what do you do next? Do you want to go see it?\"\n"
    "Poom : \"I don't dare. It's strangely creepy.\"\n"
    "While they were wondering. In the blink of an eye only.\n"
    "Ton : \"Just a moment, you guys. Where has it gone?\"\n"
    "After Ton's words, the three of them turned to look. and found that the object had disappeared.\n"
    "Hon : \"Where have it gone?\"\n"
    "Ball : \"Look, it's on the school building.\"\n"
    "Poom : \"What is it and what is it going to do?\"\n"
    "Hon : \"How do I know? Line and ask it?. If you want to know that much\"\n"
    "Ton : \"I have a strange feeling. It's probably not what I thought, right?\"\n"
    "Poom : \"Being up there so quickly and standing up there right now couldn't have been anything else.\"\n"
    "Suddenly, a black object fell from the top of the building onto the ground.\n and produced a sound as if human bones had hit a hard object. This made the four of them tremble with fear.\n"
    "Poom : \"I'm getting goosebumps. I haven't even gotten into the building yet and I'm being welcomed.\"\n"
    "Hon : \"I'm about to pee. There's hardly any strength in the legs.\"\n"
    "Ball : \"What should we do next?, Ton. Or is this enough?\"\n"
    "Ton : \"I'm afraid too. But having come this far, let's continue.\"\n"
    "They continued walking until they were almost in front of the duty teacher's building.\n They talked together and came up with a plan to get past the building.\n";

    char stairtosixth[] = 
    "And then they reached the stairs next to the governing room.\n"
    "Ton : \"We've arrived. Let's go up.\"\n"
    "After that, they walked up.\n"
    "Hon : \"It's the first time I've ever seen the inside of a school at night like this.\"\n"
    "Ball : \"The governing room that we walked through was quiet and no one was there.  It's worth picking up a behavior sheet to actually increase your score.\"\n"
    "Hon : \"Haha, you often break the rules, especially about being late.\"\n"
    "Ball : \"What can I do? My house is far away and the traffic is stuck.  By the time the bus passes by my house, it's already late. Sometimes there would be a car accident and I wouldn't be able to go.\"\n"
    "Hon : \"Haha, life is truly unlucky, but I understand that cause I'm late too.\"\n"
    "Ball : \"But your house is next to the school. Are you still late?\"\n"
    "Hon : \"The bed won't let me go. I couldn't get up so I continued to sleep.\"\n"
    "Poom : \"You two always been like this.\"\n"
    "Ton : \"Haha. But is there something strange?\"\n"
    "Ball : \"What's the matter? Why don't I feel it?\"\n"
    "Ton : \"Why do I feel like I'm walking in the same place?\"\n"
    "Hon : \"Hm, really?\"\n"
    "When they turned to look at the floor labels posted on every floor. They then discovered that they were just on the second floor.\n"
    "Poom : \"Hey, I think we've been walking for quite a long time, but why did we just reach the 2nd floor?\"\n"
    "Ball : \"I don't know what happened too. You guys are waiting here.\"\n"
    "Poom : \"What are you going to do?\"\n"
    "Suddenly Ball ran down the stairs. and came back up quickly\n"
    "Ball : \"You guys, the last floor was the second floor.\"\n"
    "Ton : \"What, that's crazy. How can it be the same floor?\"\n"
    "Poom : \"Have you had a good look yet? I think you're see mistakenly.\"\n"
    "Ball : \"I'm telling the truth. Do you want to go down and see?\"\n"
    "Poom : \"Okay, I'll go to see.\"\n"
    "Poom walked downstairs and returned with a startled expression.\n"
    "Poom : \"I went to look and it's not the second floor.\"\n"
    "Ton : \"See, I told you that..\"\n"
    "Poom : \"It's a dead end!!!\"\n"
    "After they heard this, they were very shocked. and began to think of a solution to this matter.\n"
    "Ton : \"It's better to stay calm and find a solution. Shall we walk up first? At least look at that floor as well.\"\n"
    "Poom : \"Okay.\"\n"
    "Then they walked up and found the balcony of the corridor on each floor of the normal school building.\nWhen they saw this, they began to talk and plan again.\n"
    "Ton : \"What floor are we in now?\"\n"
    "Ball : \"It doesn't have a sign.\"\n"
    "Hon : \"OMG!!, even the floor we're on doesn't know.\"\n"
    "Ton : \"Please calm down. I think we should go look at the elevator. In case you find a clue as to what floor this is.\"\n"
    "Poom : \"Good, let's go.\"\n"
    "They decided to walk over to the elevator to see the floor numbers. But the number displayed is 9.\n"
    "Ball : \"Our school only has 7 floors, isn't it? Why is it 9?\"\n"
    "Ton : \"I don't know but if we go to the 6th floor, we have to go down, right? Then let's find a way down.\"\n"
    "Hon : \"Okay, hope that's the right choice.\"\n"
    "Ton : \"Let's stick together. Don't separate at all.\"\n"
    "They walked forward to take another path down.\n"
    "Poom : \"The balcony walkway has moonlight shining in. But why does it look dark?\"\n"
    "Hon : \"It maybe a lunar eclipse, so it looks dark.\"\n"
    "Ball : \"You are funny in every situation, even like this.\"\n"
    "Hon : \"I want you all to feel comfortable.\"\n"
    "Ball : \"Up to you, but definitely don't go overboard at this point.\"\n"
    "Hon : \"Okay\"\n"
    "When they had been walking for a while and were about to reach another path down. There was a hand holding Poom's leg."
    "Poom : \"You guys help me. I don't know what caught me.\"\n"
    "The three of them turned to Bhumi and were shocked to find that there was actually a hand holding Poom's leg.\nAnd behind them, as they walked past, it was completely dark, as if there was no light at all.\n"
    "Ball : \"What the fuck is that!!\"\n"
    "Poom : \"I don't know but please help me quickly.\"\n"
    "Ton : \"You try kicking his hand. It might fall off.\"\n"
    "Before Poom kicked the hand holding his leg. The hand slowly dragged his feet into the darkness.\nThat caused Bhumi to fall down and slowly be dragged away."
    "Poom : \"Please help meeeee.\"\n"
    "When Poom's voice died, he was completely dragged into the darkness. That made the other 3 people helpless."
    "Hon : \"Poom has been dragged away. What should I do?\"\n"
    "Ton : \"I don't know. Can you try to throwing a amulet in there?\"\n"
    "Hon : \"Would you be crazy if they took my amulet away? I have nothing left to protect.\"\n"
    "Ball : \"So what do we do? Shall we walk in?\"\n"
    "Hon : \"I don't dare. It's so dark.\"\n"
    "Suddenly, there was a howling sound in the darkness. Making the three of them instantly startled.\n"
    "Ball : \"What is that noise?\"\n"
    "Hon : \"I don't know. It came out loud in the dark.\"\n"
    "Ton : \"Settle conscious. Then come face to face with it.\"\n"
    "Hon : \"What are you going to do?\"\n"
    "Ton : \"If there was a ghost, it would only have one pair of feet. But there are 3 of us, which means we have 3 pairs of feet.\"\n"
    "Ball : \"That's true. Okay. Let's face it\"\n";

    char doorofquestion1 [] = 
    "Poom : \"Ouch!, what the hell are you guys doing?\"\n"
    "The thing came out was Poom that was dragged into the darkness.\n"
    "Poom : \"It hurts that you threw it to me.\"\n"
    "Ton : \"I'm sorry, I didn't know it was you.\"\n"
    "Ball : \"How are you? Do you still have all 32 organs?\"\n"
    "Poom : \"I'm fine, my friend.\"\n"
    "Ton : \"OK, let's move on, shall we?\"\n"
    "They continuing down to the 8th floor.\nBut when they was about to continue down to the 7th floor, they found that it was a wall with no way down.\n"
    "Ton : \"The way down here is closed again. We have to walk in the same direction as before.\"\n"
    "Ball : \"Wait a minute, there's an unknown door here.\"\n"
    "Hon : \"What door is that? The door is really big.\"\n"
    "Ball : \"It has a label attached to it as well. It's like there's something written on it.\"\n"
    "Ton : \"What is it written?\"\n"
    "Ball : \"Those intellectuals who wanted to pass through this gate You must prepare yourself and answer all the questions correctly.\nWhen you are ready, knock on the door 3 times.\"\n"
    "Hon : \"Retarded door. We'd better go the other way.\"\n"
    "Suddenly, a thick wall surrounded them in a square with that door.\n"
    "Hon : \"It imprisoned us. Does that mean we really have to play a guessing game with it?\"\n"
    "Poom : \"There's no other way. We must try it once.\"\n"
    "Hon : \"But if we answer incorrectly, what will it do to us? Is it written anywhere or not?\"\n"
    "Ball : \"No, I can't find it at all.\"\n"
    "Ton : \"Well, let's play with it a little.\"\n"
    "Then Ton knocked on the door 3 times. On the door was a board with a message written on it.\n";

    char doorofquestion2 [] =
    "Hon : \"I have 16 feet of fabric, cut 2 feet per day, 8 divided by 2, 8 days for sure, so can I answer it?\"\n"
    "Ton : \"Wait, I don't think so.\"\n"
    "Hon : \"Why is 16 divided by 2 equal to 8, right?\"\n"
    "Ton : \"Yes, but they said how many days it takes to cut the final piece of fabric, right? That's like it takes 7 days.\"\n"
    "Hon : \"Why 7?\"\n"
    "Ton : \"On the 7th day, you cut 14 feet, which means there are 2 feet of fabric left. It doesn't have to be cut, right?\"\n"
    "Poom : \"Oh, right. Answer it now.\"\n"
    "When Ton answered 7, the door was silent for a moment. After that, the door opened with a new question.\n";

    char doorofquestion3 [] =
    "Ball : \"What's the question? I have a headache.\"\n"
    "Poom : \"Are you okay? You can sit and rest first.\"\n"
    "Ball : \"So I take a break for a bit.\"\n"
    "Ton : \"It's 100 years old but it's only been held 25 times. Is that possible? And arrange it every time and never miss it.\"\n"
    "Poom : \"I feel strange, like I've encountered this kind of problem before.\"\n"
    "Ton : \"Really? What is the answer?\"\n"
    "Poom : \"I'm trying, but it's stuck at the end.\"\n"
    "Hon : \"February 29\"\n"
    "Poom : \"Huh. What did you say just now?\"\n"
    "Hon : \"Every 4 years there is 1 extra day, making the year 366 days. That was February 29th, correct or not?\"\n"
    "Poom : \"Every 4 years... Oh, yes, like you said.\"\n"
    "Ton : \"OK, I'm answer now.\"\n"
    "After answering the door was still as before. and come up with new problems.\n";

    char doorofquestion4[] = 
    "Ton : \"This time it's in English. I don't even know much about it.\"\n"
    "Hon : \"I'm the same way. It's a word, not a sentence, right?\"\n"
    "Ton : \"If follow it as written, yes, but how is it possible? Subtracting just one digit it becomes 12.\"\n"
    "Hon : \"You should know because you are good at English, Poom?\"\n"
    "Poom : \"I'm thinking.\"\n"
    "Ton : \"12 What is this? Number of words or something else?\"\n"
    "Hon : \"12 I can only think of twelve.\"\n"
    "Ton : \"You're too direct, you don't even think about the quantity or else?\"\n"
    "Poom : \"Number... 12... Oh, I got it.\"\n"
    "Ton : \"What is it?\"\n"
    "Poom : \"It dozens, guys. If it adds s, it means several dozen. If you subtract s, you get a dozen equal to 12. I'll answer now.\"\n"
    "After Poom answered, the door was silent and there was no response.\n";

    char onewaytogo [] =
    "Poom : \"Hey, did I answer wrong? Or is there something wrong?\"\n"
    "But soon the door opened, revealing a white light inside the door that looked like nothing at all.\nThat made Poom feel relieved."
    "Ton : \"The door has open. Ball we gonna keep going.\"\n"
    "Ball : \"Okay, let's go.\"\n"
    "The four of them slowly walked into the door one by one, and when the last person entered, the door closed and disappeared.\n"
    "Poom : \"Why is it so bright? I can't see anything.\"\n"
    "Ball : \"My eyes couldn't open them. Has anyone seen anything yet?\"\n"
    "When everyone on the other side of the door. The bright white light gradually decreased to normal.\nIt thus shows an auditorium with no lights in the room but faintly visible."
    "Ball : \"Which part of it in our school?\"\n"
    "Hon : \"It's like an auditorium. There's also a stage.\"\n"
    "Ton : \"So why did it bring us here? It's a different direction than the one we have to go.\"\n"
    "Poom : \"Wait a minute in the auditorium, were there ever have a bleacher?"
    "Ton : \"What are you saying?\"\n"
    "When they realized this, the room's lights turned on. But the room was filled with unexpected things.\n"
    "Ball : \"What the fuck? Why is it full of skeletons?\"\n"
    "Poom : \"It was all over the place, both the bleacher and the ground.\"\n"
    "Ton : \"Now it seems like the floor has changed. How did it become grass?\"\n"
    "Hon : \"Really, after looking at it carefully, what should I do next? Do I have to play football with them?\"\n"
    "Ball : \"Are you crazy. Where is the exit?\"\n"
    "Ton : \"I don't know either. Is that way?\"\n"
    "Ball : \"Wait. There's have the way.\"\n"
    "Ton : \"What do you mean there have a way too?\"\n"
    "Poom : \"I think there's more than that. Try looking around.\"\n"
    "When they looked around, they saw that there was a path that could be passed by these skeletons as if it had given way.\n"
    "Hon : \"There are so many ways. Which way should we choose?\"\n"
    "Ton : \"Each path has different characteristics. Or is there only one is right way?\"\n"
    "Poom : \"Probably yes, but which way is the right way?\"\n"
    "Ton : \"I don't know, let's discuss first what each way is like.\"\n"
    "Way 1 : There are pieces of rotted wood all over the floor.\n"
    "Way 2 : There have coins all over the floor.\n"
    "Way 3 : There are mysterious pieces of paper all over the floor.\n"
    "Way 4 : There have only ants and various insects running around.\n"
    "Way 5 : There are incense sticks and candles all over the place.\n"
    "Ton : \"Let's take a look at each route and see which way to go. Does anyone have any ideas?\"\n"
    "Ball : \"The road with only ants and insects is not worth going. It's disgusting.\"\n"
    "Poom : \"As for me, I think we should go in the direction where there are incense sticks and candles.  I think it looks like something religious.\"\n"
    "Hon : \"But what if it happened the opposite result? Actually, it's the path of ghosts.\"\n"
    "Poom : \"It really thought about it that way. But it was my feeling at first glance.\"\n"
    "Ton : \"The next way is the way with paper. What kind of paper is it?\"\n"
    "Poom : \"Is it a death certificate if it comes like this?\"\n"
    "Ton : \"Maybe so, but can you go look to be sure?\"\n"
    "Ball : \"I'll go look at it for you.\"\n"
    "When Ball was moved to see what it was. But it was like there was a thin layer of air blocking it like an illusion.\n"
    "Ball : \"I tried to walk over and take a look, but it seemed like it was some kind of dimension.\"\n"
    "Hon : \"Again, since that door?\"\n"
    "Ton : \"Okay, come back first. Then let's look at another way. Next is the way have with pieces of rotted wood.\"\n"
    "Hon : \"There probably isn't anything. Just a piece of ordinary wood.\"\n"
    "Poom : \"Probably so, because what we see now may just be an illusion.\"\n"
    "Ball : \"Another way is the one with coins. Look, it's just an ordinary baht coin.\"\n"
    "Ton : \"But it can be interpreted as money from a ghost's mouth. Relatives will put it in the dead person's mouth before putting the body in the coffin.\"\n"
    "Ball : \"Why did he put it in? I don't understand.\"\n"
    "Ton : \"It is believed that the deceased will have money with them to use in the afterlife.\"\n"
    "Ball : \"If that's the case, it's disgusting. I don't know what the damn coin has been through.\"\n"
    "Ton : \"That's why we have to decide on the right path. Well, have you all decided yet? Let's choose our next path.\"\n"
    "When the time to choose comes, what will their path be next? You have to choose it for them.\n";

    frameCreate();
    inFramePrint("Act 2.1 : Open your eyes.\n",act2_1_img);
    frameCreate();
    inFramePrint(sneakin,back_schoo_img);

    while(process == 0){
        check = decisionPrint("The three of them nodded in agreement together and is about to walk to the destination But suddenly, a flashlight was shining on them.\nWhat should they do?\n1 : Hide behind pile of broken chairs\n2 : Make noises meow like cat.\n3 : Throw rocks to distract.\n",flashlight_event_img);
        event_1_flashlight(check);
        is_over();
    }
    if(over_yet==1){
        process = 0;
        frameCreate();
        inFramePrint(headtostairs,stair_img);
        char des1 [] = "Ton : \"Okay, now we're in front of the teacher on duty building.\n What should we do?\"\n1 : Send someone to see if anyone is in the room.\n2 : Wait until someone walks out.\n3 : Just walk past, don't pay any attention.\n";
        while(process == 0){
            check = decisionPrint(des1,event_2_teacher_on_duty_building_img);
            event_2_teacher_on_duty_building(check);
            is_over();
        }
    }
    if(over_yet==1){
        process = 0;
        frameCreate();
        inFramePrint(stairtosixth,stair_img);
        char des2 [] = "The three of them stood in line in front of the board, preparing to deal with the unknown.\nAnd that mysterious voice was getting closer and closer to them.\nWhat should they do?\n1 : Charge!!!. \n2 : Throwing shoes. \n";
        while(process == 0){
            check = decisionPrint(des2,event_3_unknown_in_the_dark_img);
            event_3_unknown_in_the_dark(check);
            is_over();
        }
    }
    if(over_yet==1){
        process = 0;
        frameCreate();
        inFramePrint(doorofquestion1,doorofquestion_img);
        char des3 [] = "A tailor has a piece of cloth that is 16 feet long, and he cuts 2 feet of cloth every day.\nHow many days does it take him to cut the last piece of cloth? What is answer.\n1 : seven days. \n2 : eight days. \n3 : nine days. \n4 : zero day. \n";
        while(process == 0){
            check = decisionPrint(des3,doorofquestion_img);
            event_4_question1(check);
            is_over();
        }
    }
    if(over_yet == 1){
        process = 0;
        frameCreate();
        inFramePrint(doorofquestion2,doorofquestion_img);
        char des4 [] = "An old man aged 100 years and a few months. But he's only had 25 birthday parties, even though he's had them since he was born.\nNever missed a single time. Why is that?\nWhat is answer.\t\t\t\n1 : He forgot to count for 75 years.\t\t\t\n2 : He forgot his age.\t\t\t\n3 : He remembered his birthday incorrectly. So it was counted incorrectly.\t\t\t\n4 : He was born on February 29th.\n";
        while(process == 0){
            check = decisionPrint(des4,doorofquestion_img);
            event_4_question2(check);
            is_over();
        }
    }
    if(over_yet==1){
        process = 0;
        frameCreate();
        inFramePrint(doorofquestion3,doorofquestion_img);
        char des5[] = "I'm is a 6 letter english word. Subtract one letter and I'm left with 12. What is my word?\nWhat is answer.\n1 : Twelve.\n2 : Dozens.\n3 : Sibsong.\n4 : Ohf..k.\n\t\t\t\n";
        while(process == 0){
            check = decisionPrint(des5,doorofquestion_img);
            event_4_question3(check);
            is_over();
        }
    }
    if(over_yet == 1){
        process = 0;
        frameCreate();
        inFramePrint(onewaytogo,audi_img);
    }
    continue_story();
}

void act2_2_roadtothatroom(){
    char truthofway[] = 
    "Ton : \"Well, it's time for us to choose our path. But before going in, I'd like to say something.\"\n"
    "Ton made a serious face and looked at his friends' faces.\n"
    "Ball : \"What's wrong with you all of a sudden? What are you going to say?\"\n"
    "Ton : \"I want to say it right now. I want to thank you all for walking along this journey with me until now.\"\n"
    "Poom : \"Oh, drama.\"\n"
    "Ton : \"It was my curiosity and selfishness that brought you here. The reason I was able to arrive was because you guys were waiting with me. There are currently 5 paths that will determine the outcome of our decisions. No matter what happens, we will get through it together.\"\n"
    "Hon : \"Haha, what are you talking about now? I came with you because we are curious too.\"\n"
    "Ball : \"Even though there were many events that happened, it was fun.\"\n"
    "Poom : \"Don't think too much. We're friends, aren't we?\"\n"
    "When Ton heard the three of them say that, he couldn't hold back his tears.\n"
    "Ball : \"You're crying. Haha.\"\n"
    "Ton wipes away the tears that flow.\n";
    
    frameCreate();
    inFramePrint("\nAct 2.2 : Truth of Ways.\n",act2_2_img);
    frameCreate();
    inFramePrint(truthofway,audi_img);
    char way[] = "Ton : \"Nothing, let's make a choice. Our next path is ....\"\n1st Way : There are pieces of rotted wood all over the floor.\n2nd Way : There have coins all over the floor.\n3rd Way : There are mysterious pieces of paper all over the floor.\n4th Way : There have only ants and various insects running around.\n5th Way : There are incense sticks and candles all over the place.\n";
    check = decisionPrint(way,audi_img);
    event_choose_your_way(check);
    continue_story();
}

void act3_endingofstory(){
    char truthofroom[] =
    "Teacher : \"What are you all doing here so late at night?\"\n"
    "Ton : \"Teacher Jom?\"\n"
    "Teacher : \"But let it be. Students enter the room first.\"\n"
    "They saw the worried face of the teacher. So they entered the room without saying anything.\nWhen they entered the room, they found that a guard was also in the room.\n"
    "Hon : \"How did Uncle Chai come to live here?\"\n"
    "Uncle Chai is the guard at this school.\n"
    "U.Chai : \"I'm always here. Is there something wrong?\"\n"
    "Poom : \"Are you in this room all the time? If so, at the wall behind the school....\"\n"
    "T.Jom : \"Can you all tell me? What are you guys doing this late at school?\"\n"
    "Hon : \"It's like... we come to find things at night.\"\n"
    "Ton : (My friend is good at lying. Awesome, friend.)\n"
    "T.Jom : \"Tell the truth, don't lie.\"\n"
    "Poom : \"Ton brought we here to hunt ghosts.\"\n"
    "Ton : \"Oh bastard, you're have a big mouth.\"\n"
    "T.Jom : \"I already knew what you were doing late at night. But none of you were hurt, right?\"\n"
    "Ton : \"No, we're fine, but I have a question. Why are you and Uncle Chai in this room? Because...\"\n"
    "T.Jom : \"Is it a haunted room that turns on its own lights at night?\"\n"
    "Ton : \"Yes.\"\n"
    "Teacher Jom sighed and began to tell the story.\n"
    "T.Jom : \"There were only 4 people who came, right? No one besides these came.   Then the teacher will briefly tell you the history of our school.\"\n"
    "\"Going back to 26 years ago when the teacher was still a trainee teacher.\nA teacher came to train at this school, and one day he noticed something strange.\"\n"
    "\"For example, seeing a person whose body was engulfed in flames walking in front of the room.\nSome people have conditions that are not like people walking in school.\"\n"
    "\"When I saw this, I was shocked and searched for information and history of the school\nand found that this area of land was used to build the school.\"\n"
    "\"It was initially obtained unfairly by the desire of powerful people to build factories.\nAnd the story after that was followed by many stories that destroyed people's lives.\"\n"
    "\"Through many stories, this school was finally able to be built,\nbut the spirits of those people still cling to this place.\"\n"
    "\"This is the reason why our school probably has a lot of stories about ghost hooves.\nAll these stories are like this.\"\n"
    "Ball : \"Does Uncle Chai know about this too?\"\n"
    "U.Chai : \"Of course, I was here before Teacher Jom.\"\n"
    "After Teacher Chom finished telling the story Ton raised his hand and asked.\n"
    "Ton : \"Teacher, what does it have to do with this room? What I heard is that this room is a haunted room.\"\n"
    "T.Jom : \"There are no ghosts in this student room and it is the only room that does not.\"\n"
    "Hon : \"Why, what does this room have?\"\n"
    "T.Jom : \"It's nothing at all. And now what are you going to do?\"\n"
    "Ton : \"I don't know. After knowing the truth, I don't know what to do next.\"\n"
    "T.Jom : \"Now you have a choice between waiting here in this room or going home.   You guys can talk first and then tell me.\"\n"
    "They turned to face each other and discussed what to do next.\n"
    "Ton : \"We'll wait here until morning or we'll go home.\"\n"
    "Poom : \"It's almost midnight now. If you wait, it's only another 6 hours.\"\n"
    "Ball : \"But I want to go home. I'm so scared that I want to go home and sleep.\"\n"
    "Ton : \"So let's vote on what we'll choose, okay?\"\n"
    "When they voted, they came to the conclusion that.\n"
    "Ton : \"Teacher Jom, we will be waiting here.\"\n"
    "T.Jom : \"If you choose to stay here, that's fine.   But Uncle Chai and I had to go out and inspect other places as part of our duty. So you can live by yourself, right?\"\n"
    "Ton : \"Yes, no problem.\"\n"
    "Before Teacher Jom walks out He said in the end that\n"
    "T.Jom : \"I forgot to tell you. The door will be closed and no matter what happens,   don't open it until morning. Do you understand?\"\n"
    "Ton : \"Yes, but won't you come back here?\"\n"
    "T.Jom : \"No, Uncle Chai and I will go to the teacher's building.   So do as I tell you strictly and except there is a necessary reason.\"\n"
    "The four of them just nodded and looked at the door that slowly closed.\n"
    "Poom : \"Have to wait another 6 hours. What should we do?\"\n"
    "Hon : \"Do you play games? Everyone has a mobile phone.\"\n"
    "Ball : \"Let's play this game. It can be played together too.\"\n"
    "Poom : \"What's the name of the game? Let's take a look.\"\n"
    "The four of them played games to pass the time. When the game started for a while,\noutside the room there was a knock on the door and someone said..\n"
    "? : \"Student, I forgot something in the room. Can you please open the door?\"\n"
    "Hon : \"Hmm, it seems like the teacher forgot something. I'll go open the door for a moment.\"\n"
    "Poom : \"Wait a minute, Hon, have you forgotten what the teacher said?\"\n"
    "Hon's hand holding the door latch suddenly stopped for a moment."
    "Hon : \"It's true, I forgot.\"\n"
    "Poom : \"Absolutely do not open it at all. No matter what happens\"\n"
    "But the sound outside the room continued to make noise.\n"
    "? : This is Teacher Jom. Please open it. I really forgot something.\"\n"
    "Hon : \"I'm starting to think he's the real teacher.\"\n"
    "Ton : \"Please don't, or we'll all die.\"\n"
    "Ball : \"Hon, don't listen. Come back, friends.\"\n";

    char untilmorning[] =
    "Ball : \"Come back here quickly, friend.\"\n"
    "Hon : \"Holy shit, I almost got tricked.\"\n"
    "Poom : \"Good, just almost unopened As long as it's not open, we're still safe.\"\n"
    "Ton : \"Okay, let's continue playing the game. Let's get through this night together.\"\n"
    "01:09\n"
    "Hon : \"Our phone's battery is dead. What should I do?\"\n"
    "Poom : \"I don't know, but I'm really sleepy right now. Shall we sleep?\"\n"
    "Ball : \"That's good. I'm sleepy too.\"\n"
    "Ton : \"So I'm going to turn off the light.\"\n"
    "Ton went to turn off the lights and the room became dark.\nThe four of them then gathered in front of the class where there was enough space for them to sleep.\nThen they started to sleep.\n"
    "02:21\n"
    "Ball woke up in the middle of the night and got up. He found that his friends were sleeping.\nSo he lay down again, but when he looked at the end of the room, he saw that there was someone watching them.\n"
    "Ball : \"What is that? Why it looking at me? Go away.\"\n"
    "He picked up the amulet he had prepared and clasped his hands in prayer for what he saw to disappear.\nBut as he looked, the thing was still there, causing him to poke his friend next to him.\n"
    "Ball : \"Hon, are you awake?\"\n"
    "Hon : \"....\"\n"
    "Ball : \"This guy is in such a deep sleep, I forgot. Is Poom still awake?\"\n"
    "Poom : \"....\"\n"
    "Ball : \"There's only one person left. Ton, are you awa...\"\n"
    "When he looked at Ton, he found that Ton was awake, but Ton had signaled to him to be quiet.\nand started whispering to each other\n"
    "Ball : \"Are you see same like me, right?\"\n"
    "Ton : \"Yes, I saw it, but I didn't know what it was.\"\n"
    "Ball : \"So what next? I'm afraid.\"\n"
    "Ton : \"Poom has a flashlight. How about you and me get up and look at it together.\"\n"
    "Ball : \"Ok.\"\n"
    "Ton picked up Poom's flashlight and stood up with the ball. And when Ton turned on the flashlight to look at the end of the room, he found that.\n"
    "Ton : \"Damn, the flashlight didn't turn on. We probably had to walk closer to take a look.\"\n"
    "Ball : \"You go first.\"\n"
    "The two of them slowly walked closer and closer to the thing. It shows people's faces clearly.\nUntil we got very close, we found that it was just a sculpture with a human face used as a model for the drawing.\n"
    "Ton : \"I was completely shocked. It was actually just a statue.\"\n"
    "Ball : \"I'm about to pee. It's so scary. Oh.\"\n"
    "Ton : \"What's wrong with you?\"\n"
    "Ball : \"I want to pee. Go to the toilet with me.\"\n"
    "Ton : \"We're not allowed to open the door.\"\n"
    "Ball : \"That's right, but if it's necessary. It probably doesn't matter.\"\n"
    "Ton : \"Fine, let go and be careful.\"\n"
    "Then the two of them walked out of the room and went to the bathroom.\n"
    "02:56\n"
    "Poom : Ouch!! What the heck.\n"
    "Hon's arm flickered and hit Poom. Therefore causing Poom to wake up.\n"
    "Poom : \"What with your position to sleep. What time is it? I forget that our phone battery ran out. Oh, where did the other two go?\"\n"
    "When Phum got up and looked around the room, there was no sign of Ton or Ball.\nTherefore became worried. After that, there was a knock at the door.\n"
    "Poom : (Who's knocking? Or will it be those two? But I don't think that's the case.)\n"
    "? : \"Poom, please open the door for me and the ball. I can't go in.\"\n"
    "Poom : (Those two people weren't there or they went out of the room and couldn't get in?)\n"
    "Since Poom had just woken up, he couldn't think of much. he chose to wake up Hon first.\n"
    "Poom : \"Hon, something has happened. Get up and help me.\"\n"
    "Hon : \"....\"\n"
    "Poom : \"Shit, you're probably dead. Okay, what should I do?\"\n"
    "The knocking had begun again, but it was loud and rapid.\n"
    "? : \"Poom, is there somethings outside. Hurry and open it for me. Quickly!!\"\n"
    "Poom : (The teacher told me not to open it, but those two weren't here either.  What should I do? Let's take a chance and see.)\n";

    char endofstory[] =
    "The noise at the door had quietened and there was no sound at all. Makes Poom sigh after going through the events.\n But suddenly there was a sound as the door at the back of the room opened.\n"
    "Poom : (Wait, there are two ways here? Don't tell me it comes in the other way. Shit.)\n"
    "And when the door behind opened...\n"
    "Ton : \"Oh, Poom, you're awake. Why aren't you awake?\"\n"
    "Poom : \"Sigh, I thought they had come in already.\"\n"
    "Ton : \"What do you mean?\"\n"
    "Poom : \"Nothing. And, where have you guys gone?\"\n"
    "Ton : \"I take Ball to the toilet. So why did you wake up?\"\n"
    "Poom : \"It's just Hon. He's struggling. Come on, let's go back to sleep.\"\n"
    "They went back to sleep and the time ticked until the birds began to chirp, signaling the arrival of morning.\n"
    "06:13\n"
    "Ton : \"Yawning. What time is it?\"\n"
    "Ton woke up first and got up to check things. When he saw three of his friends sleeping together,\nhe was relieved and went to open the window. Image of soft morning sunlight\nThe sun is rising and the birds are leaving their nests.\n"
    "Ton : \"It's really beautiful. Really lucky to have survived.\"\n"
    "Poom : \"Yes, we can do it when we are together.\"\n"
    "Ball : \"When monkeys unite it will become strong. Is that right?\"\n"
    "Hon : \"This must be celebrated. Do you want to eat grilled pork this evening?\"\n"
    "The morning time at school was quiet with the laughter of 4 people who had gone through many events together.\nThe story after that, the four of them went back home to change clothes and return to school as usual that day,\nand not long after that, they graduated from this school. The stories of that night were just the four of them.\nUncle Chai and Teacher Chom who know.....eh.....Teacher Chom....? But who is Teacher Chom?\nThere's no need to know. Just knowing this name is enough.\n"
    "3 years later at a temple\n"
    "? : \"Have you guys brought all your stuff yet?\"\n"
    "? : \"I think that's all. Let's go.\"\n"
    "Four people walked in to offer alms to the monks and walked out to a stupa.\n"
    "? : \"We're here, teacher. Although, We're a little late.\"\n"
    "? : \"If that day we didn't have a teacher to help us. I don't know what it will be like. Thank you very much.\"\n"
    "? : \"Going back to that time, there were many things. I miss it.\"\n"
    "? : \"Well, we went through a lot together that day.\n    But if I go back and do it again, I won't take it anymore, haha.\"\n"
    "? : \"Haha me too. So we're just here to visit. We're taking leave.\"\n"
    "? : \"The four of them paid their respects again and walked away.\"\n"
    "Completely End.\n";

    frameCreate();
    inFramePrint("\nAct 3 : Wait Or Exit.\n",act3_img);
    frameCreate();
    inFramePrint(truthofroom,hallway_img);
    while (process == 0){
        check = decisionPrint("Hon : \"What should I do? Open or not open?\"\n1 : Open the door.\n2 : Do not open the door.\n",doorofquestion_img);
        event_5_first_attempt(check);
        is_over();
    }
    if(over_yet==1){
        process = 0;
        frameCreate();
        inFramePrint(untilmorning,dark_img);
        while(process == 0){
            check = decisionPrint("Poom : I choose to...\n1 : Open the door.\n2 : Do not open.\n",doorofquestion_img);
            event_6_confused(check);
            is_over();
        }
    }
    if(over_yet == 1){
        frameCreate();
        inFramePrint(endofstory,school_img);
    }
}

void Loading(){
    printf("\n");
    char load[] = "Loading....";
    inFramePrint(load,title_img);
    printf("\n");
}

void is_over(){
    if(over_yet == 0){
        check = decisionPrint("Game Over\nDo you want to retry?\n1 : Retry.\t\n2 : Give up.\t\n",title_img);
        if(check == 1){
            process = 0;
        } else {
            process = 1;
        }
    } else {
        process = 1;
    }
}

void continue_story(){
    char continues [] = "Continue....?  \n1 : Yes.  \n2 : No.  \n";
    check = decisionPrint(continues,title_img);
    if (check == 1){
        act++;
    }else{
        check = 0;
    }
}

