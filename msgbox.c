#include <stdio.h>
#include <windows.h>
#include <string.h>


int box(char* message, char* title, char* choice, UINT mbicon) {
    MessageBox(NULL, message, title, MB_OK | mbicon);
    return 0;
}

int main(int count, char* message[]) {
    if (count==1){
        printf("MessageBox help");
        printf("command:\nmsgbox ");
    }
    else if (count == 2) {
        box(message[1], "message", "", 0);
    } else if (count == 3) {
        box(message[1], message[2], "", 0);
    } else if (count == 4) {
        if (strcmp(message[3], "ok") == 0) {
            box(message[1], message[2], "", MB_OK);
        } else if (strcmp(message[3], "yn") == 0) {
            box(message[1], message[2], "", MB_YESNO);
        } else if (strcmp(message[3], "oc") == 0) {
            box(message[1], message[2], "", MB_OKCANCEL);
        }
    } else if (count == 5) {
        if (strcmp(message[4], "exl") == 0) {
            box(message[1], message[2], message[3], MB_ICONEXCLAMATION);
        } else if (strcmp(message[4], "err") == 0) {
            box(message[1], message[2], message[3], MB_ICONERROR);
        } else if (strcmp(message[4], "info") == 0) {
            box(message[1], message[2], message[3], MB_ICONINFORMATION);
        } else if (strcmp(message[4], "que") == 0) {
            box(message[1], message[2], message[3], MB_ICONQUESTION);
        }
        else if (strcmp(message[4], "excl") == 0) {
            box(message[1], message[2], message[3], MB_ICONEXCLAMATION);
        }
    }

    return 0;
}