#include <stdio.h>
#include <stdlib.h>

int gamePhase(), menuPhase();

int main()
{
    menuPhase();
}

int gamePhase()
{
    int answer, random = rand() % 10 - 5;

    printf("Rock [1], Paper [2], or Scissors [3] ? ");
    scanf("%d", &answer);

    if (answer == abs(random)) {
        printf("Nice tie!\n");
    }
    else if (answer > abs(random)) {
        printf("Nice win!\n");
    }
    else {
        printf("Haha, what a looser!\n");
    }
    
    menuPhase();
}

int menuPhase()
{
    int answer;

    printf("Do you want to play? ");
    scanf("%d", &answer);

    if (answer == 1) {
        gamePhase();
    }
    else {
        printf("yikes\n");
        return 0;
    }
}