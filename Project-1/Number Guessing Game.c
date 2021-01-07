#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    // genrearting random number
    int n;
    srand(time(0));
    n = rand()%100+1; //random number generation between 1-100
    printf("%d\n", n);

    
    int guess, NumGuess=1;
    // keep running the loop until correct preidiction
    do {
        printf("Enter the value between 1 and 100. ");
        scanf("%d", &guess);

        if (guess > n){
            printf("Lower number please!\n\n");
        }
        else if (guess < n){
            printf("Higher number please!\n\n");
        }
        else{
            printf("You guessed the number (%d) in %d attempts.\n", n, NumGuess);
        }

        NumGuess++;
    }
    while (guess != n);
    return 0;
}