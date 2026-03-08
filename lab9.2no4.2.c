#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verifyUser(char *user, char *pwd);
int isStrongPassword(char *p);

int main() {
    char user[64], pwd[64];

    printf("Enter login : "); 
    gets(user);
    printf("Enter password : "); 
    gets(pwd);

    if (verifyUser(user, pwd)) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    if (isStrongPassword(pwd)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}

int isStrongPassword(char *p) {
    int len = strlen(p);
    int d_count = 0, u_count = 0;

    if (len < 5 || len > 8 || isdigit(*p)) {
        return 0; 
    }

    char *ptr = p;
    while (*ptr) {
        if (isdigit(*ptr)) d_count++;
        if (isupper(*ptr)) u_count++;
        ptr++;
    }

    return (d_count >= 2 && u_count >= 2);
}

int verifyUser(char *user, char *pwd) {
    if (strcmp(user, "student1") == 0 && strcmp(pwd, "mypass") == 0) {
        return 1;
    }
    return 0;
}
