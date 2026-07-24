#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "rudra";
    char s1[] = "rudra";
    char s2[] = " brooo";

    // printf("%d", strlen(st));

    char source[] = "harry";
    char target[30];
    strcpy(target, st); // target now contains "rudra"
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "rudra brooo" <no space in between>
    // printf("%s", s1);

    // strcmp("far", "joke"); // Negative value
    // strcmp("joke", "far"); // Positive value

    int a = strcmp("far", "joke"); // first is negative and if second comes then it will give positive value
    printf("%d", a);

    return 0;
}