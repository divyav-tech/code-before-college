#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int attempts = 0;
    int guess;

    while (1)
    {
        printf("Guess a number between 1 to 100: ");
        scanf("%d", &guess);
        attempts++;

        if (guess != number)
        {
            if (guess < number){
                printf("Too Low Enter Higher Number!\n");
            }
            else{
                printf("Too High Enter Lower Number!\n");
            }
        }else
        {
            printf("You cracked it!! in %d attempts\n", attempts);
            break;
        }

        if(attempts == 10){
            printf("Oops you lost! (10 tries limit is up)\n");
            break;
        }
    }

    return 0;
}