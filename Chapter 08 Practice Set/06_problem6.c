#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "mere ghar me 1 crore rupay rakhe hue hai";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s", str);
    
    return 0;
}