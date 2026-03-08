#include <stdio.h>
#include <ctype.h>
#include <string.h>

int checkLogin(char *u, char *p);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];

    printf("Enter login : ");
    gets(login);
    printf("Enter password : ");
    gets(password);

    if (checkLogin(login, password)) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    if (checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}

int checkValidPass(char *ps) {
    int len = strlen(ps);
    int digitCount = 0;
    int uniqueUpper = 0;
    char foundUpper[10] = "";
    int i, j;

    if (len < 5 || len > 8) return 0;

    for (i = 0; i < len; i++) {
        if (isdigit(ps[i])) {
            digitCount++;
        }
        
        if (isupper(ps[i])) {
            int isRepeat = 0;
            for (j = 0; j < uniqueUpper; j++) {
                if (foundUpper[j] == ps[i]) {
                    isRepeat = 1;
                    break;
                }
            }
            if (!isRepeat) {
                foundUpper[uniqueUpper++] = ps[i];
            }
        }
    }

    return (digitCount >= 2 && uniqueUpper >= 2);
}

int checkLogin(char *u, char *p) {
    if (strcmp(u, "student1") == 0 && strcmp(p, "mypass") == 0) {
        return 1;
    }
    return 0;
}
