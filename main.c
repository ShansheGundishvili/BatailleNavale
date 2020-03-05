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
