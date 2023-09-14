#include<stdio.h>
#include<unistd.h>
#include"character.c"
#include"act1.c"

void slowPrint(const char *text);
int check,process=0;

int main(){
    printf("Welcome to the game \"Ghost, haunted spirit\"\nPress 1 : Start game.\nPress 0 : Exit.\n");
    scanf("%d", &check);
    if( check == 0){
        return 0;
    }
    while(1){
        mornigatschool();
    }
}

void slowPrint(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout); // อัพเดทข้อมูลที่ถูกบันทึกไว้ใน stdout
        usleep(7000); // หน่วงเวลา 50 ไมโครวินาที (0.05 วินาที)
    }
}