#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <ctype.h>
#include <string.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Read characters until a newline or end of file is encountered
    }
}
int terminalRes(){
    int rows, cols;
    FILE *pipe = popen("tput lines", "r");
    if (pipe != NULL) {
        fscanf(pipe, "%d", &rows);
        pclose(pipe);
    }

    pipe = popen("tput cols", "r");
    if (pipe != NULL) {
        fscanf(pipe, "%d", &cols);
        pclose(pipe);
    }
    while (rows < 30 || cols < 100) {
        printf("\033[%d;1H", rows-1);
        printf("\033[0;31m\nPlease adjust the terminal resolution minimum to 100x30\033[0m");
        pipe = popen("tput lines", "r");
        if (pipe != NULL) {
            fscanf(pipe, "%d", &rows);
            pclose(pipe);
        }
        pipe = popen("tput cols", "r");
        if (pipe != NULL) {
            fscanf(pipe, "%d", &cols);
            pclose(pipe);
        }
    }
    return rows;
}

int frameCreate(){
    int rows = terminalRes();
    //clearTeminal
    for (int k = 0; k< 30; k++){
        printf("\033[%d;0H", rows-(30+k));
        for (int l = 0; l<200; l++){
            printf(" ");
        }
    }
    printf("\033[%d;0H", rows-29);
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 100; j++){
            if (j == 0 && i == 0){
                printf("┌");
            }
            else if (j == 99 && i == 0){
                printf("┐");
            }
            else if (i == 29 && j == 0){
                printf("└");
            }
            else if (i == 29 && j == 99){
                printf("┘");
            }
            else if (i == 20 && j == 0 || (i == 27 && j == 0)){
                printf("├");
            }
            else if (i == 20 && j == 99 || (i == 27 && j == 16)){
                printf("┤");
            }
            else if (i == 20 && j == 16){
                printf("┬");
            }
            else if (i == 29 && j == 16){
                printf("┴");
            }
            else if (i > 20 && i != 29 && j == 16){
                printf("│");
            }
            else if (i == 0 || i == 20 || i == 29|| (i == 27 && i != 0 && j < 16)){
                printf("─");
            }
            else if (j == 0 || j == 99){
                printf("│");
            }
            else{
                printf(" ");
            }
        }
        
        printf("\033[%d;0H", rows-28+i);
    }
    return 0;
}

void inFramePrint(const char *text) {
    int rows = terminalRes();
    int delaychar = 50000;
    int delaydialog = 2500000;
    frameCreate();
    printf("\033[%d;5H", rows-1);
    printf("Narrator");

    //first print condition
    //printname
    int firstslice = 0;
    for (int m = 0; m < 10; m++){
        if(text[m] == ':' && text[m+1] == ' '){
            printf("\033[%d;2H", rows-1);
            printf("               ");
            printf("\033[%d;8H", rows-1);
                for (int j = m; j > 1; j--){
                    printf("%c",text[(m-j)]);
                }
                firstslice = m+2;
                break;
            }
        }
    //check line overflow
    int new_line = 0;
    printf("\033[%d;18H", rows-8+new_line);
    int max_text_width = 82;
    int count = 0;
    while (text[count] != '\n'){
        count++;
    }
    if (count > 82){
        int find_blank = 0;
        while (text[81-find_blank] != ' '){
            find_blank++;
        }
        max_text_width = 82-find_blank;
    }
    else{
        max_text_width = 82;
    }

    //main print
    for (int i = 0+firstslice; text[i] != '\0'; i++) {
        if (text[i] == '\n') { //nextdialog
            rows = terminalRes();
            frameCreate();
            new_line = 0;
            count = 0;
            usleep(delaydialog);
            printf("\033[%d;18H", rows-8);
            i++;
            for (int l = 0; l < 8; l++){
                printf("\033[%d;18H", rows-8+l);
                for (int j = 0; j < 82; j++) {
                    printf(" ");
                }
            }
            printf("\033[%d;5H", rows-1);
            printf("Narrator");
            int name_lenth = 0;
            for (int m = i; m-i < 10; m++){
                if(text[m] == ':' && text[m-1] == ' '){
                    printf("\033[%d;2H", rows-1);
                    printf("               ");
                    printf("\033[%d;8H", rows-1);
                    for (i; i < m; i++){
                        printf("%c",text[i]);
                        name_lenth++;
                    }
                    i+=2;
                    break;
                }
            }
            while (text[i+count] != '\n'){
                count++;
            }
            if (count > 82){
                int find_blank = 0;
                while (text[i+81-find_blank] != ' '){
                    find_blank++;
                }
                max_text_width = 82-find_blank;
            }
            else{
                max_text_width = 82;
            }
            printf("\033[%d;18H", rows-8);
            delaychar = 50000;
            delaydialog = 2500000;
        }
        max_text_width--;
        if(max_text_width <= 0){
            new_line++;
            count = 0;
            while (text[i+count] != '\n'){
                count++;
            }
            if (count > 82){
                int find_blank = 0;
                while (text[i+81-find_blank] != ' '){
                    find_blank++;
                }
                max_text_width = 82-find_blank;
            }
            else{
                max_text_width = 82;
            }
            printf("\033[%d;18H", rows-8+new_line);
        }
        printf("%c", text[i]);
        fflush(stdout);


        // Read keyboard
        struct timeval tv;
        fd_set fds;
        tv.tv_sec = 0;
        tv.tv_usec = 0;
        FD_ZERO(&fds);
        FD_SET(STDIN_FILENO, &fds);
        select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv);
        if (FD_ISSET(STDIN_FILENO, &fds)) {
            int ch = getchar();
            if (ch == ' ') {
                delaychar = 0;
                delaydialog = 0;
            }
        }
        usleep(delaychar);
    }
}

int decisionPrint(const char *text){
    int rows = terminalRes();
    char choice[10][85];
    int numchoice = 1;
    int firstchoice = -1;
    int count = 0;
    int max_text_width = 82;
    int new_line = 0;
    frameCreate();
    printf("\033[%d;5H", rows-1);
    printf("Decission");
    printf("\033[%d;18H", rows-8);
    int line = 0;
    while (text[count] != '\n'){
                count++;
    }
    if (count > 82){
        int find_blank = 0;
        while (text[81-find_blank] != ' '){
            find_blank++;
        }
        max_text_width = 82-find_blank;
    }
    else{
        max_text_width = 82;
    }
    //clear array
    for (int cl = 0; cl < 10; cl++){
        size_t size = sizeof(choice[cl]);
        memset(choice[cl], '\0', size);
    }

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            max_text_width = 82;
            line++;
            printf("\033[%d;18H", rows-8+line+new_line);
            i++;
            int count = 0;
            while (text[i+count] != '\n'){
                count++;
            }
            if (isdigit(text[i])){
                if (firstchoice == -1){
                    firstchoice = line+new_line;
                }
                for (int copy = 0; copy < count; copy++){
                    choice[numchoice][copy] = text[i+copy];
                }
                choice[numchoice][count+1] = '\0';
                numchoice++;
            }
        }
        if (8-(new_line+line) > 0){
            printf("%c", text[i]);
        }else{
            break;
        }
        fflush(stdout);
        max_text_width--;
        if(max_text_width <= 0){
            new_line++;
            count = 0;
            while (text[i+count] != '\n'){
                count++;
            }
            if (count > 82){
                int find_blank = 0;
                while (text[i+81-find_blank] != ' '){
                    find_blank++;
                }
                max_text_width = 81-find_blank;
            }
            else{
                max_text_width = 82;
            }
            printf("\033[%d;18H", rows-8+new_line);
        }
        usleep(50000);
    }
    int select = 0;
    while(1){
        int ch = getchar();
        fflush(stdout);
        if (ch == '1') {
            fflush(stdout);
            printf("\033[30;47m");
            printf("\033[%d;18H", rows-8+firstchoice);
            printf("%s",choice[1]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+1);
            printf("%s",choice[2]);

            if (choice[3][0] == '3'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+2);
                printf("%s",choice[3]);
            }

            if (choice[4][0] == '4'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+3);
                printf("%s",choice[4]);
            }
            if (choice[5][0] == '5'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+4);
                printf("%s",choice[5]);
            }
            select = 1;
        }else if (ch == '2'){
            fflush(stdout);
            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice);
            printf("%s",choice[1]);

            printf("\033[30;47m");
            printf("\033[%d;18H", rows-8+firstchoice+1);
            printf("%s",choice[2]);

            if (choice[3][0] == '3'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+2);
                printf("%s",choice[3]);
            }

            if (choice[4][0] == '4'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+3);
                printf("%s",choice[4]);
            }
            if (choice[5][0] == '5'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+4);
                printf("%s",choice[5]);
            }
            select = 2;
        }else if (ch == '3' && choice[3][0] == '3'){
            fflush(stdout);
            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice);
            printf("%s",choice[1]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+1);
            printf("%s",choice[2]);

            printf("\033[30;47m");
            printf("\033[%d;18H", rows-8+firstchoice+2);
            printf("%s",choice[3]);

            if (choice[4][0] == '4'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+3);
                printf("%s",choice[4]);
            }
            if (choice[5][0] == '5'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+4);
                printf("%s",choice[5]);
            }
            select = 3;
        }else if (ch == '4' && choice[4][0] == '4'){
            fflush(stdout);
            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice);
            printf("%s",choice[1]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+1);
            printf("%s",choice[2]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+2);
            printf("%s",choice[3]);

            printf("\033[30;47m");
            printf("\033[%d;18H", rows-8+firstchoice+3);
            printf("%s",choice[4]);

            if (choice[5][0] == '5'){
                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+4);
                printf("%s",choice[5]);
            }
            
            select = 4;
        }else if (ch == '5' && choice[5][0] == '5'){
            fflush(stdout);
            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice);
            printf("%s",choice[1]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+1);
            printf("%s",choice[2]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+2);
            printf("%s",choice[3]);

            printf("\033[0;0m");
            printf("\033[%d;18H", rows-8+firstchoice+3);
            printf("%s",choice[4]);

            printf("\033[30;47m");
            printf("\033[%d;18H", rows-8+firstchoice+4);
            printf("%s",choice[5]);
            select = 5;
        }else if (ch == '\n'){
            if (select == 0){
                fflush(stdout);
                printf("\033[30;47m");
                printf("\033[%d;18H", rows-8+firstchoice);
                printf("%s",choice[1]);

                printf("\033[0;0m");
                printf("\033[%d;18H", rows-8+firstchoice+1);
                printf("%s",choice[2]);

                if (choice[3][0] == '3'){
                    printf("\033[0;0m");
                    printf("\033[%d;18H", rows-8+firstchoice+2);
                    printf("%s",choice[3]);
                }

                if (choice[4][0] == '4'){
                    printf("\033[0;0m");
                    printf("\033[%d;18H", rows-8+firstchoice+3);
                    printf("%s",choice[4]);
                }
                if (choice[5][0] == '5'){
                    printf("\033[0;0m");
                    printf("\033[%d;18H", rows-8+firstchoice+4);
                    printf("%s",choice[5]);
                }
            select = 1;
            }else{
                printf("\033[0;0m");
                return select;
            }
        }
    }
}
