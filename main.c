/*
 * made by: Shanshe Gundishvili
 * Name: Battleship
 * description: classic battleship in C Programming
 * version: 0.1
 * */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int gameplay() {
    int j;                  //declaration for multiuse functions
    int i;
    int shipNB=17;          //counter for game ending
    int pts=100;            //counter for points
    int choiceX;            //variable for asking coordinates
    int choiceY;            //variable for asking coordinates
    int mapN1[10][10]={1, 1, 1, 1, 1, 0, 1, 0, 0, 0,        //table map for game use
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
        printf("\033[0;31m");
        printf("\nthere was nothing          ");//for color indication
        printf("\033[0m");
        printf("\033[0;33m");
        printf("there was something          ");//for color indication
        printf("\033[0m");
        printf("\033[0;32m");
        printf("sink a ship");                  //for color indication
        printf("\033[0m");
        printf("\n\nyour points: %d", pts);
        for (i = 0; i < 10; ++i) {//to switch the lane every 10 coordinate
            printf("\n");
            for (j = 0; j < 10; ++j) {
                if(mapN1[i][j]<2){
                    printf("%2c%d", 65+i, j+1); //print natural coordinates
                }else if(mapN1[i][j]==2){   //print missed coordinates in red
                    printf("\033[0;31m");
                    printf("%2c%d", 65+i, j+1);
                    printf("\033[0m");
                }
                else if(mapN1[i][j]==3){    //print coordinates with ship and already shot in yellow
                    printf("\033[0;33m");
                    printf("%2c%d", 65+i, j+1);
                    printf("\033[0m");
                }
                else if(mapN1[i][j]==5){    //print sunk ships in color green
                    printf("\033[0;32m");
                    printf("%2c%d", 65+i, j+1);
                    printf("\033[0m");
                }
            }

        }
        printf("\n\ncoordinates with ships on left: %d\n",shipNB);      //indicator for player to know how many he shot and hast to shot
        do {
            printf("input X:");             //scan for coordinates on X
            scanf("%d", &choiceX);
        }while((choiceX>10) || (choiceX<0));//repeat if not satisfactory number
        do {
            printf("input Y:");             //scan for coordinates on Y
            scanf("%d", &choiceY);
        }while((choiceY>10) || (choiceY<0));//repeat if not satisfactory number
        system("cls");
        if(choiceX==0&&choiceY==0)return 0;//if X and Y equal to 0 quit the game
        choiceX--;          //balancing out entered and usage variables
        choiceY--;


        if (mapN1[choiceY][choiceX] == 1) {
            printf("you hit something!!!");//to indicate players moves
            mapN1[choiceY][choiceX] = 3;
            shipNB--;           //counting shot coordinates with ship
            //1 = there is a ship   //2 = shot and miss  //3 = shot ship already
        } else if (mapN1[choiceY][choiceX] == 0) {//to indicate players moves
            printf("you miss them");
            mapN1[choiceY][choiceX] = 2;
            pts -= 1;                           //counting points
        } else if (mapN1[choiceY][choiceX] == 2) {//to indicate players moves
            printf("already shot there, there was nothing");
            pts -= 2;                           //counting points
        } else if (mapN1[choiceY][choiceX] == 3) {
            printf("already shot there, there was a battleship");//to indicate players moves
            pts -= 1;                           //counting points
        }
        if(mapN1[0][0]==3&&mapN1[0][1]==3&&mapN1[0][2]==3&&mapN1[0][3]==3&&mapN1[0][4]==3){
            mapN1[0][0]=5;
            mapN1[0][1]=5;              //easy way to check if ship is sink or not
            mapN1[0][2]=5;
            mapN1[0][3]=5;
            mapN1[0][4]=5;}
        if(mapN1[0][6]==3&&mapN1[1][6]==3&&mapN1[2][6]==3&&mapN1[3][6]==3){
            mapN1[0][6]=5;
            mapN1[1][6]=5;              //easy way to check if ship is sink or not
            mapN1[2][6]=5;
            mapN1[3][6]=5;}
        if(mapN1[5][4]==3&&mapN1[5][5]==3&&mapN1[5][6]==3){
            mapN1[0][0]=5;
            mapN1[1][0]=5;              //easy way to check if ship is sink or not
            mapN1[2][0]=5;}
        if(mapN1[7][2]==3&&mapN1[8][2]==3&&mapN1[9][2]==3){
            mapN1[7][2]=5;
            mapN1[8][2]=5;              //easy way to check if ship is sink or not
            mapN1[9][2]=5;}
        if(mapN1[5][8]==3&&mapN1[5][9]==3){
            mapN1[5][9]=5;
            mapN1[5][9]=5;}              //easy way to check if ship is sink or not
    }while (shipNB>0);
    printf("you win with : %d pts", pts);//for ending to show the points that are left

    return pts;

}
void newNameF() {
    char newNameNN;
    printf("1. the new name has to be unique than others that have been already created\n"
           "2. this name will be saved and you can use it again\n"
           "3. scores will be saved if its bigger than top 5 with the name you play with");
    printf("\n\nEnter your new name");
    scanf("%s", &newNameNN);
}



void rules(){
    printf("Rules\n\n");
    printf("1) to win sink all pre-placed ships ");
    printf("\n2) the game will ask for coordinates");
    printf("\n3) the game will show/tell you if you hit miss or sink a ship");
    printf("\n4) enter 0 in x and Y to leave game");
    printf("\n5) in game there is 5 ship");
    printf("\n        1. Carrier, taking 5 spaces");
    printf("\n        2. Battleship, taking 4 spaces");
    printf("\n        3. Cruiser, taking 3 spaces");
    printf("\n        4. Submarine, taking 3 spaces");
    printf("\n        5. Destroyer, taking 2 spaces");
    printf("\n6) the score will be counted and saved if good enough");
    printf("\n        1. you start with 100pts and go down");
    printf("\n        2. if you miss -1");
    printf("\n        3. if you already shot there and there was nothing -2");
    printf("\n        4. already shot there and there was a battleship -1");
    printf("\n        5. Destroyer, taking 2 spaces");
    system("pause");


}


int main() {
    int points;                         //declaration of variable points for 1.0
    int choiceOneM;                     //declaration for switch for menu
    do {
        printf("Menu\n\n");
        printf("\n1. Play");
        printf("\n2. Get new name");
        printf("\n3. Scoreboard");
        printf("\n4. Rules & Help");    //easy menu to understand
        printf("\n5. Credit & Code");
        printf("\n6. quit the game");
        printf("\nYour choice : ");
        scanf("%d", &choiceOneM);
        system("cls");
        switch (choiceOneM) {
            case 1:
                points = gameplay();    //calling gameplay function
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                rules();
                break;
            case 5:
                break;
            case 6:
                return 0;


        }
    }while (1);
}
