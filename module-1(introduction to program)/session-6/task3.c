#include<stdio.h>

main()
{
    int song, guess;

    song = 2;

    do
    {
        printf("\n1 = Kesariya");
        printf("\n2 = Apna Bana Le");
        printf("\n3 = Tum Hi Ho");

        printf("\nGuess the song: ");
        scanf("%d", &guess);

        if(guess == song)
        {
            printf("\nCorrect! You guessed the song.");
        }
        else
        {
            printf("\nWrong! Try Again.");
        }

    }while(guess != song);


}
