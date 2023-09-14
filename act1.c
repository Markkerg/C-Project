#include<stdio.h>
#include<unistd.h>

void slowPrint(const char *text);

void dialogue_mornig(){
    char di1[] = "One day as usually in the morning at the school\nStudents gathered together to find something to do while waiting in line.\nThere was a friend in the group who spoke up.";
    char Ton1[] = "\"I'm bored lately. Is there anything I can do?\"";
    char Poom1[] = "\"That said, it's boring. You still do your homework. There's still a lot left.\"";
    char Hon1[] = "\"Has Teacher Anu's homework been done yet? I have a terrible headache.\"";
    char Ton2[] = "\"Oh shit, I completely forgot. So have you done with that, Ball?\"";
    char Ball1[] = "\"Do we even have that homework?\"";
    char di2[] = "After Ball's words, they looked at each other and laughed.";
    char Hon2[] = "\"Because of this, maybe we can be friends.\"";
    char Ton3[] = "\"I just realized. Have you guys ever heard the legend of the 6th floor at our school?\"";
    char Ball2[] = "\"What kind of legend is this? A legend that fools my children. I don't want it.\"";
    char Ton4[] = "\"The legend is that there is a room on the 6th floor where at night the room lights turn on by themselves. And when you look into the room, you will find that there are students all over the room, but the characteristics of the students found are different.\"";
    char Poom2[] = "\"Does our school organize night classes? Or how about a pajama party in that room, haha.\"";
    char di3[] = "After that, Ton's face became solemn and he said seriously.";
    char Ton5[] = "\"Everyone who saw it in the room You will see that they are lifeless, some have beachheads, some have missing arms, some have blood all over their bodies.\"";
    char Ball3[] = "\"Isn't that true? You were tricked by someone.\"";
    char Hon3[] = "\"You might be hallucinating yourself. Have you taken any? haha\"";
    char Poom3[] = "\"I guess we don't have to line up. We'd better take Ton to the doctor, haha.\"";
    char Ton6[] = "\"I say, if you guys don't believe it. Let's go prove it?\"";
    char di4[] = "Ton's words caused the group's atmosphere to fall into silence for a while. And it was shattered by the sound of the school's buzzer in line.";
}

void slowPrint(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout); // อัพเดทข้อมูลที่ถูกบันทึกไว้ใน stdout
        usleep(7000); // หน่วงเวลา 50 ไมโครวินาที (0.05 วินาที)
    }
}