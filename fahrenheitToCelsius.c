#include <stdio.h>
#include <stdlib.h>

#define START 100.0
#define END 400.0


// int sent;

int main()
{
float f  = START;
float c;
int step;
int *ptr;
    printf("Enter step value:");
    scanf("%i", &step);

    while (f < END ){
        // sent++;
        // printf("%3.2f\n", step);
        if (step > 0 || step < 0)
        {
            while (f<END){
            printf("-----------------\n");
            printf("|    F   |    C  |\n");
            printf("-----------------\n");

            f = f + step;
            c = (f -32.0)*5.0/9.0;

            printf("|%3.2f   |   %3.2f    |\n", f, c);
            printf("-----------------");
            }
        }

        else
        {

            step == 20;

            while (f<END){
            printf("-----------------\n");
            printf("|    F   |    C  |\n");
            printf("-----------------\n");

            f = f + step;
            c = (f -32.0)*5.0/9.0;

            printf("|%3.2f   |   %3.2f    |\n", f, c);
            printf("-----------------");
            }
            
        }
        return step;
    }
                        
    
}

