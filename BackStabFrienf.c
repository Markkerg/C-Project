#include<stdio.h>
#include<unistd.h>

void window(){
    for(int i=1; i<=20; i++){
        for(int j=1; j<=50; j++){
            if((i==1 || i==20) || (j==1 || j==50)){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int start;
    printf("Welcome to the Game\n");
    printf("Press 1 to start\n");
    printf("Press 0 to exit\n");
    scanf("%d", &start);
    if(start==1){
        window();
        char text[] = {"เมื่อนานมาแล้วมีเจ้าหยิงเจ้าชาย"};
        for (int i = 0; text[i] != '\0'; i++) {
        putchar(text[i]);
        fflush(stdout);  // อย่าลืม flush เพื่อให้ข้อความปรากฏทันที
        usleep(100000);;  // หน่วงเวลา 1 วินาที
    }
    }
    return 0;
}