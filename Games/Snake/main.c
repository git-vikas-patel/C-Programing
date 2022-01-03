#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ground_height = 20, ground_width = 20;
int head_x, head_y, fruit_x, fruit_y;
int flag, game_end = 0, score = 0;
int tailX[100], tailY[100];
int piece;

void controllogic();
void playercontroller();
void draw_plaground();

void controllogic()
{
    int i, prvX, prvY, prv2X, prv2Y;
    prvX = tailX[0];
    prvY = tailY[0];
    tailX[0] = head_x;
    tailY[0] = head_y;
    for (i = 0; i <= piece; i++)
    {
        prv2X = tailX[i];
        prv2Y = tailY[i];
        tailX[i] = prvX;
        tailY[i] = prvY;
        prvX = prv2X;
        prvY = prv2Y;
    }

    switch (flag)
    {
    case 1:
        head_x--;
        break;

    case 2:
        head_x++;
        break;

    case 3:
        head_y--;
        break;

    case 4:
        head_y++;
        break;
    }
    if (head_x == 0 || head_x == ground_height || head_y == 0 || head_y == ground_width)
    {
        game_end = 1;
    }
    if (head_x == fruit_x && head_y == fruit_y)
    {
    label3:
        fruit_x = rand() % 20;
        if (fruit_x == 0)
        {
            goto label3;
        }

    label4:
        fruit_y = rand() % 20;
        if (fruit_y == 0)
        {
            goto label4;
            // score++;
            // piece++;
        }
    }
}

void playercontroller()
{

    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
            flag = 1;
            break;

        case 's':
            flag = 2;
            break;

        case 'a':
            flag = 3;
            break;

        case 'd':
            flag = 4;
            break;
        }
    }
}

void set_Up()
{

    head_x = ground_height / 2;
    head_y = ground_width / 2;

label1:
    fruit_x = rand() % 20;
    if (fruit_x == 0)
    {
        goto label1;
    }

label2:
    fruit_y = rand() % 20;
    if (fruit_y == 0)
    {
        goto label2;
        game_end = 0;
        score = 0;
        // piece++;
    }
}

void draw_plaground()
{
    system("cls");

    int row, col, k, ch;
    for (row = 0; row <= ground_height; row++)
    {
        for (col = 0; col <= ground_width; col++)
        {
            if (row == 0 || col == 0 || row == ground_height || col == ground_width)
            {
                printf("*");
            }
            else
            {
                if (row == head_x && col == head_y)
                {
                    printf("0");
                }
                else if (row == fruit_x && col == fruit_y)
                {
                    printf("@");
                }
                else
                {
                    for (k = 0; k < piece; k++)
                    {
                        ch = 0;
                        if (row == tailX[k] && col == tailY[k])
                        {
                            printf("o");
                            ch = 1;
                        }
                    }
                    if (ch == 0)
                    {

                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    set_Up();
    while (game_end!= 1)
    {
        playercontroller();
        draw_plaground();
        controllogic();
    }

    return 0;
}
