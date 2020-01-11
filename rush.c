#include <stdio.h>
#include <unistd.h>

void    rush(int x, int y)
{
    // Counter variables
    int i;
    int j;

    // Character variables
    char hyph;
    char pipe;
    char o;

    // Initialize variables
    hyph = '-';
    pipe = '|';
    o = 'o';
    i = 0;
    j = 0;
    
    if (x != 0 || y != 0)
    {
        write(1, &o, 1);
        
        // while loops
        while (i < x)
        {
			write(1, &hyph, 1);
			i++;
			y = x + 1;
            while (j < y)
            {
                write(1, &pipe, 1);
                write(1, "\n", 1);
				j++;
            }
        }
        write(1, &o, 1);
    }
}

int     main()
{
    rush(3,1);
    return (0);
}