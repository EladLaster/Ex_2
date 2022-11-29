
#include <stdio.h>
#include "my_mat.h"

int main()
{
    char c;
    while (scanf("%c", &c) != EOF && c != 'D')
    {
        switch (c)
        {
        case 'A':
            scan_matriza();
            break;

        case 'B':
            path_exist();
            break;

        case 'C':
            shortest_path();
            break;
        }
    }

    return 0;
}