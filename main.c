#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define JUMP printf("\n");

void initDeck(int *ptr);
void print_Deck(int *deck, int *count, int *hand);
int pull(int *deck, int *count, int *hand, int *hand_flag);
int top(int *deck, int *count, int *hand, int *hand_flag);
int bottom(int *deck, int *count, int *hand, int *hand_flag);
int discard(int *hand, int *hand_flag);

int main(int argc, char *argv[]) {
    FILE *file;
    int deck[5] = {};
    int count = 4;
    int hand = 0;
    int hand_flag = 0;
    char choice;

    printf("Welcome. Have fun!!!");
    JUMP
    JUMP
    printf("Loading.......................................................................................\n");
    initDeck(deck);
    JUMP
    printf("Options: \n");
    printf("p -> pull\n");
    printf("t -> top\n");
    printf("b -> bottom\n");
    printf("d -> discard\n");
    printf("s -> save\n");
    printf("l -> load\n");
    printf("e -> exit\n");
    printf("o -> options\n");
    while(count >= 0 || hand != 0)
    {

        print_Deck(deck, &count, &hand);
        setbuf(stdin,NULL);
        printf("Choice >");
        choice = fgetc(stdin);
        switch (choice)
        {
            case 'p':
                hand = pull(deck, &count, &hand, &hand_flag);
                break;
            case 't':
                hand = top(deck, &count, &hand, &hand_flag);
                break;
            case 'b':
                hand = bottom(deck, &count, &hand, &hand_flag);
                break;
            case 'd':
                hand = discard(&hand, &hand_flag);
                break;
            case 'e':
                JUMP
                printf("Thank you for playing!!! Till next time. :P");
                return 0;
            case 'o':
                printf("Options: \n");
                printf("p -> pull\n");
                printf("t -> top\n");
                printf("b -> bottom\n");
                printf("d -> discard\n");
                printf("s -> save\n");
                printf("l -> load\n");
                printf("e -> exit\n");
                JUMP
                break;
            case 's':
                printf("Saving....");
                JUMP
                file = fopen("../save_log", "w");
                fwrite(deck, sizeof(deck),1, file);
                fwrite(&count, sizeof(count),1, file);
                fwrite(&hand, sizeof(hand),1, file);
                fwrite(&hand_flag, sizeof(hand_flag),1, file);
                fclose(file);
                break;
            case 'l':
                file = fopen("../save_log", "r");
                if (file != NULL)
                {
                    printf("Loading....");
                    JUMP
                    fread(deck, sizeof(deck),1, file);
                    fread(&count, sizeof(count),1, file);
                    fread(&hand, sizeof(hand),1, file);
                    fread(&hand_flag, sizeof(hand_flag),1, file);
                } else
                {
                    JUMP
                    printf("Nothing to load....");
                    JUMP
                }

                break;
            default:
                break;
        }
    }
    JUMP
    printf("Game Over!!!\n");
    printf("Thank you for playing!!! Till next time. :P");
    return 0;
}

void initDeck(int *ptr)
{
    time_t t;
    int num;
    int flags[13] = {};

    for (int i = 0; i < 5; ++i)
    {
        srand((unsigned) time(&t));
        num = rand() % 13;
        num += 1;
        switch (num)
        {
            case 1:
                if(flags[0] == 0)
                {
                    *(ptr + i) = 65;
                    flags[0] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 2:
                if(flags[1] == 0)
                {
                    *(ptr + i) = 2;
                    flags[1] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 3:
                if(flags[2] == 0)
                {
                    *(ptr + i) = 3;
                    flags[2] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 4:
                if(flags[3] == 0)
                {
                    *(ptr + i) = 4;
                    flags[3] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 5:
                if(flags[4] == 0)
                {
                    *(ptr + i) = 5;
                    flags[4] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 6:
                if(flags[5] == 0)
                {
                    *(ptr + i) = 6;
                    flags[5] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 7:
                if(flags[6] == 0)
                {
                    *(ptr + i) = 7;
                    flags[6] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 8:
                if(flags[7] == 0)
                {
                    *(ptr + i) = 8;
                    flags[7] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 9:
                if(flags[8] == 0)
                {
                    *(ptr + i) = 9;
                    flags[8] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 10:
                if(flags[9] == 0)
                {
                    *(ptr + i) = 10;
                    flags[9] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 11:
                if(flags[10] == 0)
                {
                    *(ptr + i) = 74;
                    flags[10] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 12:
                if(flags[11] == 0)
                {
                    *(ptr + i) = 81;
                    flags[11] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            case 13:
                if(flags[12] == 0)
                {
                    *(ptr + i) = 75;
                    flags[12] = 1;
                    break;
                }else
                {
                    i--;
                    break;
                }
            default:
                break;
        }
    }
}

void print_Deck(int *deck, int *count, int *hand)
{
    JUMP
    printf("Deck: ");
    for (int i = 0; i <= *count; ++i)
    {
        if(deck[i] == 65 || deck[i] == 81 || deck[i] == 74 || deck[i] == 75)
        {
            printf("%c, ", deck[i]);
        }
        else if(deck[i] != 0)
            printf("%d, ", deck[i]);
    }
    JUMP
    if(*hand == 65 || *hand == 81 || *hand == 74 || *hand == 75)
    {
        printf("Hand: <%c> ", *hand);
    }
    else if(*hand != 0)
        printf("Hand: <%d> ", *hand);
    else
        printf("Hand: <> ");
    JUMP
}

int pull(int *deck, int *count, int *hand, int *hand_flag)
{
    if(*hand_flag == 0)
    {
        *hand = deck[*count];
        deck[*count] = 0;
        *count = *count - 1;
        *hand_flag = 1;
        return *hand;
    }
    else
    {
        JUMP
        printf("Wrong choice, you cannot grab a card\n");
        printf("if you already have one in your hand.\n");
        return *hand;
    }
}

int top(int *deck, int *count, int *hand, int *hand_flag)
{
    if(*hand_flag == 1)
    {
        *count = *count + 1;
        deck[*count] = *hand;
        *hand = 0;
        *hand_flag = 0;
        return *hand;
    } else
    {
        JUMP
        printf("Wrong choice, you cannot place a card\n");
        printf("on top of the deck without pulling it out first.\n");
        return *hand;
    }
}

int bottom(int *deck, int *count, int *hand, int *hand_flag)
{
    if(*hand_flag == 1)
    {
        *count = *count + 1;
        for (int i = *count; i >= 1; i--)
        {
            deck[i] = deck[i-1];
        }
        deck[0] = *hand;
        *hand = 0;
        *hand_flag = 0;
        return *hand;
    } else
    {
        JUMP
        printf("Wrong choice, you cannot place a card\n");
        printf("on the bottom of the deck without pulling it out first.\n");
        return *hand;
    }
}

int discard(int *hand, int *hand_flag)
{
    if(*hand_flag == 1)
    {
        *hand = 0;
        *hand_flag = 0;
        return *hand;
    }else
    {
        JUMP
        printf("Wrong choice, you cannot discard a card\n");
        printf("if you don't have one in your hand.\n");
        return *hand;
    }
}