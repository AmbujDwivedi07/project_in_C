#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
int random, guess;
int no_of_guess =0;
srand(time(NULL));

    printf("welcome to the world of guessing numbers");
    random = rand()%100 + 1; // genrating between 0 to 100
    
    do {
        printf("Please enter your guess between(1 to 100)\n");
        scanf("%d",&guess);
        no_of_guess++;
        if (guess < random){
            printf("guess larger numbere\n");
        }
        else if (guess > random){
            printf("guess smaller number\n");
        }
        else  {
            printf("Congratulations !!! You have successfully guess the number in %d attempts",no_of_guess);
        }


    } while ( guess!=random);
    printf("\nBye Bye, Thanks for Playing.");
    printf("\nDeveloped by: Ambuj Dwivedi");

}