#include <stdio.h>
void newNameF(){
    char newNameNN;
    printf("1. the new name has to be unique than others that have been already created\n"
           "2. this name will be saved and you can use it again\n"
           "3. scores will be saved if its bigger than top 5 with the name you play with");
    printf("\n\nEnter your new name");
    scanf("%s", &newNameNN);



}
int main() {
    int choiceOneM;
    int userNumberX=0;
    char userLetterY[1];
    int userNumberY=0;
    int mapN1[10][10]={1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char nameM;
    printf("Menu\n\n");
    printf("\n1. Play");
    printf("\n2. Get new name");
    printf("\n3. Scoreboard");
    printf("\n4. Rules & Help");
    printf("\n5. Credit & Code");
    printf("\n6. quit the game");
    printf("\nYour choice : ");
    scanf("%d", &choiceOneM);
    switch (choiceOneM)
    {
        case 1:

            printf("enter X coordinates to attack (max 10): ");
            scanf("%d", &userNumberX);
            printf("enter X coordinates to attack (A to J(UPPER LETTERS)): ");
            scanf("%s", &userLetterY);
            do {
                if (userLetterY == "A") {
                    userNumberY = 1;
                } else if (userLetterY == "B") {
                    userNumberY = 2;
                } else if (userLetterY == "C") {
                    userNumberY = 3;
                } else if (userLetterY == "D") {
                    userNumberY = 4;
                } else if (userLetterY == "E") {
                    userNumberY = 5;
                } else if (userLetterY == "F") {
                    userNumberY = 6;
                } else if (userLetterY == "G") {
                    userNumberY = 7;
                } else if (userLetterY == "H") {
                    userNumberY = 8;
                } else if (userLetterY == "I") {
                    userNumberY = 9;
                } else if (userLetterY == "J") {
                    userNumberY = 10;
                } else {
                    printf("invalid answer");
                    printf("enter X coordinates to attack (A to J(UPPER LETTERS))");
                }
            }while (userNumberX);
            if (mapN1[userNumberX][userNumberY]==1)
            {
                mapN1[userNumberX][userNumberY]=3;
                printf("you hit them!!!");
            }
            else{
                mapN1[userNumberX][userNumberY]=2;
                printf("you miss them, aim better");
            }

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            return 0;



    }
return 0;
}
