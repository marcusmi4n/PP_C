#include <stdio.h>

int main(){
    char name[20];
    int age;
    char anime[15];
    char games[3];

    //Input User info
    printf("ENTER NAME: ");
    scanf("%s", &name);

    printf("\nENTER AGE: ");
    scanf("%d", &age);

    printf("\nFAVOURITE ANIME: ");
    scanf("%s", &anime);

    printf("\nDO YOU PLAY GAMES: ");
    scanf("%s", &games);

    //Output User info
    printf("\n\n\nNAME: %s", name);
    printf("\nAGE : %d", age);
    printf("\nANIME : %s", anime);
    printf("\nGAMES : %s", games);

    return 0;
}