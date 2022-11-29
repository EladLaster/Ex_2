#include <stdio.h>
#include <math.h>

#define SIZE 4

int a[SIZE][SIZE];

void floyd_warshall()
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                 if (i != j)
                {
                    if (a[i][j] == 0)
                    {
                        if (a[i][k] != 0 && a[k][j] != 0)
                            a[i][j] = a[i][k] + a[k][j];
                        else
                            a[i][j] = 0;
                    }
                    else
                    {
                        if (a[i][k] != 0 && a[k][j] != 0)
                            a[i][j] = fmin(a[i][j], a[i][k] + a[k][j]);
                        else
                            a[i][j] = a[i][j];
                    }
                }
            }
        }
    }
}

void printMat()
{

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void scan_matriza()
{

    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printMat();
    floyd_warshall();
    printMat();
}

void path_exist()
{
    int i, j;
    scanf("%d %d", &i, &j);
    if (a[i][j] == 0)
        printf("false\n");
    else
        printf("true\n");
}

void shortest_path()
{
    int i, j;
    scanf("%d %d", &i, &j);
    if (a[i][j] == 0)
        printf("%d\n", -1);
    else
        printf("%d\n", a[i][j]);
}