#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
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
    do {
        for (i = 0; i < 10; ++i) {
            printf("\n");
            for (j = 0; j < 10; ++j) {
                if(mapN1[i][j]<2){
                    printf("%2c%d", 65+i, j+1);
                }else if(mapN1[i][j]==2){
                    printf("\033[1;35m");
                    printf("%2c%d", 65+i, j+1);
                    printf("\033[0m;");
                }
                else if(mapN1[i][j]==3){
                printf("\033[1;31m");
                printf("%2c%d", 65+i, j+1);
                printf("\033[0m;");
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
