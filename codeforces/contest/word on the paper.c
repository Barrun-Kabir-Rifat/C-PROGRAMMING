

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int j=1; j<=t; j++)
    {
        char grid[8][8];
        for (int i = 0; i < 8; i++)
        {
            scanf("%s", grid[i]);
        }

        for (int col = 0; col < 8; col++)
        {
            for (int row = 0; row < 8; row++)
            {
                if (grid[row][col] != '.')
                {
                    printf("%c",grid[row][col]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
