#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int gameplay() {
    int j;
    int i;
    int shipNB=17;
    int pts=100;
    int choiceX;
    int choiceY;
    int mapN1[10][10]={1, 1, 1, 1, 1, 0, 1, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                       0, 0, 1, 0, 0, 1, 0, 0, 0, 0};
    system("cls");
    do {
        printf("\n\nyour points: %d", pts);
        for (i = 0; i < 10; ++i) {
            printf("\n");
            for (j = 0; j < 10; ++j) {
                if(mapN1[i][j]<2){
                    printf("%2c%d", 65+i, j+1);
                }else if(mapN1[i][j]==2){
                    printf("\033[1;35m");
                    printf("%2c%d", 65+i, j+1);
                    printf("\033[0m");
                }
                else if(mapN1[i][j]==3){
                    printf("\033[1;31m");
                    printf("%2c%d", 65+i, j+1);
                    printf("\033[0m");
                }
            }

        }
        printf("\n\nships left: %d\n",shipNB);
        do {
            printf("input X:");
            scanf("%d", &choiceX);
        }while((choiceX>10) || (choiceX<1));
        do {
            printf("input Y:");
            scanf("%d", &choiceY);
        }while((choiceY>10) || (choiceY<1));
        system("cls");
        choiceX--;
        choiceY--;

        if (mapN1[choiceY][choiceX] == 1) {
            printf("you hit something!!!");
            mapN1[choiceY][choiceX] = 3;
            shipNB--;
            //1 = there is a ship   //2 = shot and miss  //3 = shot ship already
        } else if (mapN1[choiceY][choiceX] == 0) {
            printf("you miss them");
            mapN1[choiceY][choiceX] = 2;
            pts -= 1;
        } else if (mapN1[choiceY][choiceX] == 2) {
            printf("already shot there, there was nothing");
            pts -= 2;
        } else if (mapN1[choiceY][choiceX] == 3) {
            printf("already shot there, there was a battleship");
            pts -= 1;
        }
    }while (shipNB>0);

    return 0;

}
void newNameF(){
    char newNameNN;
    printf("1. the new name has to be unique than others that have been already created\n"
           "2. this name will be saved and you can use it again\n"
           "3. scores will be saved if its bigger than top 5 with the name you play with");
    printf("\n\nEnter your new name");
    scanf("%s", &newNameNN);



    void rules(){
        printf("Rules\n\n");
        printf("hello lost player!");
        printf("\nto escape from sea you have to defeat K the 11th");
        printf("The SS level MAP");
        printf("You have to find the ships this Map is hiding and destroy them with your artillery");
        printf("But be careful chance to escape goes down if you miss the shot by one ");
        printf("");
        printf("");
        printf("");



    }



}
int main() {
    int points;
    int choiceOneM;

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
            system("cls");
            points=gameplay();
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
