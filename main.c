/*
 * made by: Shanshe Gundishvili
 * Name: Battleship
 * description: classic battleship in C Programming
 * version: 0.1
 * */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

struct top5 {       //using structure for scores
    char name[16];
    int score;
};

int gameplay() {


    struct top5 news;
    int c;
    int k;
    int j;                  //declaration for multiuse functions
    int i;
    int shipNB = 17;          //counter for game ending
    int pts = 100;            //counter for points
    int choiceX;            //variable for asking coordinates
    int choiceY;            //variable for asking coordinates
    int randomMap;
    int map[10][10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,        //table map for game use
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int mapN1[10][10] = {1, 1, 1, 1, 1, 0, 1, 0, 0, 0,        //table map for game use
                         0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                         0, 0, 1, 0, 0, 1, 0, 0, 0, 0};

    int mapN2[10][10] = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0,        //table map for game use
                         1, 1, 1, 1, 1, 0, 0, 1, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                         0, 1, 0, 0, 0, 0, 0, 1, 0, 0,
                         0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 1, 0};

    int mapN3[10][10] = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0,        //table map for game use
                         0, 0, 0, 0, 0, 1, 0, 1, 0, 0,
                         0, 0, 0, 0, 0, 1, 0, 1, 0, 0,
                         0, 0, 0, 0, 0, 1, 0, 1, 0, 0,
                         0, 0, 1, 0, 0, 1, 0, 0, 0, 1,
                         0, 0, 1, 0, 0, 1, 0, 0, 0, 1,
                         0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    srand((unsigned) time(NULL));
    randomMap=1+rand()%2;           //random number generator
    switch (randomMap) {
        case 1:
            for (k = 0; k < 10; ++k) {          //map copying
                for (c = 0; c < 10; ++c) {
                    map[k][c] = mapN1[k][c];
                }
            }
            break;
        case 2:
            for (k = 0; k < 10; ++k) {
                for (c = 0; c < 10; ++c) {
                    map[k][c] = mapN2[k][c];        //map copying
                }
            }
            break;
        case 3:
            for (k = 0; k < 10; ++k) {
                for (c = 0; c < 10; ++c) {
                    map[k][c] = mapN3[k][c];        //map copying
                }
            }
            break;
    }

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
                if (map[i][j] < 2) {
                    printf("%2c%d", 65 + i, j + 1); //print natural coordinates
                } else if (map[i][j] == 2) {   //print missed coordinates in red
                    printf("\033[0;31m");
                    printf("%2c%d", 65 + i, j + 1);
                    printf("\033[0m");
                } else if (map[i][j] == 3) {    //print coordinates with ship and already shot in yellow
                    printf("\033[0;33m");
                    printf("%2c%d", 65 + i, j + 1);
                    printf("\033[0m");
                } else if (map[i][j] == 5) {    //print sunk ships in color green
                    printf("\033[0;32m");
                    printf("%2c%d", 65 + i, j + 1);
                    printf("\033[0m");
                }
            }

        }
        printf("\n\ncoordinates with ships on left: %d\n",
               shipNB);      //indicator for player to know how many he shot and hast to shot
        do {
            printf("input X:");             //scan for coordinates on X
            scanf("%d", &choiceX);
            if (choiceX == 0)return 0;        //if X and Y equal to 0 quit the game
        } while ((choiceX > 10) || (choiceX <= 0));//repeat if not satisfactory number
        do {
            printf("input Y:");             //scan for coordinates on Y
            scanf("%d", &choiceY);
            if (choiceY == 0)return 0;        //if X and Y equal to 0 quit the game
        } while ((choiceY > 10) || (choiceY < 0));//repeat if not satisfactory number
        system("cls");

        choiceX--;          //balancing out entered and usage variables
        choiceY--;


        if (map[choiceY][choiceX] == 1) {
            printf("you hit something!!!");//to indicate players moves
            map[choiceY][choiceX] = 3;
            shipNB--;           //counting shot coordinates with ship
            //1 = there is a ship   //2 = shot and miss  //3 = shot ship already
        } else if (map[choiceY][choiceX] == 0) {//to indicate players moves
            printf("you miss them");
            map[choiceY][choiceX] = 2;
            pts -= 1;                           //counting points
        } else if (map[choiceY][choiceX] == 2) {//to indicate players moves
            printf("already shot there, there was nothing");
            pts -= 2;                           //counting points
        } else if (map[choiceY][choiceX] == 3) {
            printf("already shot there, there was a battleship");//to indicate players moves
            pts -= 1;                           //counting points
        }

        switch (randomMap) {            //to get random map
            case 1:
                if (map[0][0] == 3 && map[0][1] == 3 && map[0][2] == 3 && map[0][3] == 3 && map[0][4] == 3) {
                    map[0][0] = 5;
                    map[0][1] = 5;              //easy way to check if ship is sink or not
                    map[0][2] = 5;
                    map[0][3] = 5;
                    map[0][4] = 5;
                }
                if (map[0][6] == 3 && map[1][6] == 3 && map[2][6] == 3 && map[3][6] == 3) {
                    map[0][6] = 5;
                    map[1][6] = 5;              //easy way to check if ship is sink or not
                    map[2][6] = 5;
                    map[3][6] = 5;
                }
                if (map[5][4] == 3 && map[5][5] == 3 && map[5][6] == 3) {
                    map[0][0] = 5;
                    map[1][0] = 5;              //easy way to check if ship is sink or not
                    map[2][0] = 5;
                }
                if (map[7][2] == 3 && map[8][2] == 3 && map[9][2] == 3) {
                    map[7][2] = 5;
                    map[8][2] = 5;              //easy way to check if ship is sink or not
                    map[9][2] = 5;
                }
                if (map[5][8] == 3 && map[5][9] == 3) {
                    map[5][9] = 5;
                    map[5][9] = 5;
                }              //easy way to check if ship is sink or not
                break;
            case 2:
                if (map[1][0] == 3 && map[1][1] == 3 && map[1][2] == 3 && map[1][3] == 3 && map[1][4] == 3) {
                    map[1][0] = 5;
                    map[1][1] = 5;              //easy way to check if ship is sink or not
                    map[1][2] = 5;
                    map[1][3] = 5;
                    map[1][4] = 5;
                }
                if (map[0][7] == 3 && map[1][7] == 3 && map[2][7] == 3 && map[3][7] == 3) {
                    map[0][6] = 5;
                    map[1][6] = 5;              //easy way to check if ship is sink or not
                    map[2][6] = 5;
                    map[3][6] = 5;
                }
                if (map[6][4] == 3 && map[6][5] == 3 && map[6][6] == 3) {
                    map[6][4] = 5;
                    map[6][5] = 5;              //easy way to check if ship is sink or not
                    map[6][6] = 5;
                }
                if (map[3][3] == 3 && map[4][3] == 3 && map[5][3] == 3) {
                    map[3][3] = 5;
                    map[4][3] = 5;              //easy way to check if ship is sink or not
                    map[5][3] = 5;
                }
                if (map[8][8] == 3 && map[9][8] == 3) {
                    map[8][8] = 5;
                    map[9][8] = 5;
                }              //easy way to check if ship is sink or not
                break;
            case 3:
                if (map[1][5] == 3 && map[2][5] == 3 && map[3][5] == 3 && map[4][5] == 3 && map[5][5] == 3) {
                    map[1][5] = 5;
                    map[2][5] = 5;              //easy way to check if ship is sink or not
                    map[3][5] = 5;
                    map[4][5] = 5;
                    map[5][5] = 5;
                }
                if (map[0][7] == 3 && map[1][7] == 3 && map[2][7] == 3 && map[3][7] == 3) {
                    map[0][6] = 5;
                    map[1][6] = 5;              //easy way to check if ship is sink or not
                    map[2][6] = 5;
                    map[3][6] = 5;
                }
                if (map[8][4] == 3 && map[8][5] == 3 && map[8][6] == 3) {
                    map[0][0] = 5;
                    map[1][0] = 5;              //easy way to check if ship is sink or not
                    map[2][0] = 5;
                }
                if (map[4][2] == 3 && map[5][2] == 3 && map[6][2] == 3) {
                    map[4][2] = 5;
                    map[5][2] = 5;              //easy way to check if ship is sink or not
                    map[6][2] = 5;
                }
                if (map[4][8] == 3 && map[5][8] == 3) {
                    map[5][9] = 5;
                    map[5][9] = 5;
                }              //easy way to check if ship is sink or not
                break;
        }
    } while (shipNB > 0);
    printf("you win with : %d pts", pts);//for ending to show the points that are left
    printf("please enter your name: ");
    scanf("%d", &news.name);
    FILE *fp;                //declaring filepinter
    news.score=pts;          //getting points
    fp = fopen("top1.txt", "a");        //opening file to add new score
    fprintf(fp, "\n%s %d", news.name, news.score);      //saving new score
    fclose(fp);         //closing file pointer

    system("cls");
    return pts;

}
void leaderboard(){

    struct top5 t1;
    struct top5 t2;             //declaring new variables using structure
    struct top5 t3;
    struct top5 t4;
    struct top5 t5;
    struct top5 new;

    int k=0;
    int i;                  //multiuse variables
    int place = 0;

    FILE *fPointer;                 //declaring filepinter
    fPointer = fopen("top1.txt", "r");              //opening file to add new score
    while (fscanf(fPointer, "%s %d\n%s %d\n%s %d\n%s %d\n%s %d\n", &t1.name, &t1.score, &t2.name, &t2.score, &t3.name, &t3.score,
                  &t4.name, &t4.score, &t5.name, &t5.score, &new.name, &new.score)!=EOF);               //getting the saved information
    fclose(fPointer);           //closing the pointer

    FILE *write;                    //declaring filepinter
    write = fopen("top1.txt", "w");         //opening file to add new score
    for (i = 100; i > 0 && k < 5; --i) {        //limiting to only five top scores
        if (t1.score == i) {
            printf("Top%d  ", place+1);         //peinting top...
            printf("%s\t\t\t%d\n", t1.name, t1.score);      //printing name and score
            place++;
            fprintf(write, "%s %d\n", t1.name, t1.score);   //printing one more time tops
            k++;        //to limit to only 5
        }
        if (t2.score == i) {
            printf("Top%d  ", place+1);
            printf("%s\t\t\t%d\n", t2.name, t2.score);
            place++;
            fprintf(write, "%s %d\n", t2.name, t2.score);
            k++;
        }
        if (t3.score == i) {
            printf("Top%d  ", place+1);
            printf("%s\t\t\t%d\n", t3.name, t3.score);
            place++;
            fprintf(write, "%s %d\n", t3.name, t3.score);
            k++;
        }
        if (t4.score == i) {
            printf("Top%d  ", place+1);
            printf("%s\t\t\t%d\n", t4.name, t4.score);
            place++;
            fprintf(write, "%s %d\n", t4.name, t4.score);
            k++;
        }
        if (t5.score == i) {
            printf("Top%d  ", place+1);
            printf("%s\t\t\t%d\n", t5.name, t5.score);
            place++;
            fprintf(write, "%s %d\n", t5.name, t5.score);
            k++;
        }
    }
    fclose(write);      //closing pointer
    system("pause");
    system("cls");
}




void rules() {
    printf("Rules\n\n");            //rules
    printf("1) to win sink all pre-placed ships ");
    printf("\n2) the game will ask for coordinates");
    printf("\n3) the game will show/tell you if you hit miss or sink a ship");
    printf("\n4) enter 0 in x or Y to leave game");
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
    printf("\n        5. Destroyer, taking 2 spaces\n");
    system("pause");
    system("cls");


}



void credits(){
    printf("I Shanshe Gundishvili am author of this project,\n but there was many people helping me,\n"
           "from geeksforgeeks community, from stackoverflow's community,\n"
           "and lastly discord server for coders <Better C++> ");
}




int main() {
    int points;                         //declaration of variable points for 1.0
    int choiceOneM;                     //declaration for switch for menu
    FILE * pointer;
    pointer = fopen("LOG.txt", "a");
    fprintf(pointer, "Entered the game\n");
    do {
        printf("Menu\n\n");
        printf("\n1. Play");
        printf("\n2. Rules & Help");
        printf("\n3. Scoreboard");
        printf("\n4. Credits");    //easy menu to understand
        printf("\nto quit the game type any other number");
        printf("\nYour choice : ");
        scanf("%d", &choiceOneM);
        system("cls");
        switch (choiceOneM) {
            case 1:
                fprintf(pointer, "started playing\n");
                points = gameplay();    //calling gameplay function
                fprintf(pointer, "Quit playing\n");
                break;
            case 2:
                fprintf(pointer, "Entered section <rules>\n");
                rules();        //calling rules function
                fprintf(pointer, "Quit the section <rules>\n");
                break;
            case 3:
                fprintf(pointer, "Entered section <Leaderboard>\n");
                leaderboard();        //calling leaderboard function
                fprintf(pointer, "Quit the section <Leaderboard>\n");
                break;

            case 4:
                fprintf(pointer, "Entered the section <Credits>\n");
                credits();        //calling Credits function
                fprintf(pointer, "Quit the section <Credits>\n");
                break;
            default:
                fprintf(pointer, "Quit the game\n");
                fclose(pointer);
                return 0;
        }
    } while (1);
}