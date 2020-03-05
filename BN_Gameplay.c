//
// Created by shanshe.gundishvili on 05.03.2020.
//
#include <stdio.h>

int lego() {
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

    return 0;
}

