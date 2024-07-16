//Develop a program that writes even & odd numbers from 50 to 70 into two separate files.

#include <stdio.h>
#include <conio.h>

int main() 
{
	int i;
    FILE *evenFile, *oddFile;
    int start = 50, end = 70;

    evenFile = fopen("even_numbers.txt", "w");
    if (evenFile == NULL) 
	{
        printf("Could not open even_numbers.txt for writing.\n");
        return 1;
    }

    oddFile = fopen("odd_numbers.txt", "w");
    if (oddFile == NULL) 
	{
        printf("Could not open odd_numbers.txt for writing.\n");
        fclose(evenFile);
        return 1;
    }

    for ( i = start; i <= end; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(evenFile, "%d\n", i);
        } 
		else 
		{
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers from %d to %d have been written to even_numbers.txt and odd_numbers.txt respectively.\n", start,
	end);

    return 0;
}
