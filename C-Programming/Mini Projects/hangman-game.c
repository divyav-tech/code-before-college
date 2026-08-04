#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int print_word();
    int checkWin(int len, char guessed[], char word[]);

    printf("\n=============== HANGMAN GAME ==================\n");
    printf("Rules of game_:\n");
    printf("1. You have to guess a word\n2. U can only guess  one letter at a time\n3. You have 8 tries to get it right\n4. If you take more than 8 tries , you will lose\n");

    int wrong_counter = 0;
    srand(time(NULL));
    char *words[] = {
        "mango",
        "table",
        "banana",
        "mouse",
        "friend"};

    char *word = words[rand() % 5];
    int len = strlen(word);
    char guessed[20];

    for (int i = 0; i < len; i++)
    {
        guessed[i] = '_';
    }
    guessed[len] = '\0';
    print_word(len, guessed);

    char triedLetters[26];
    int triedCount = 0;

    while (1)
    {
        char letter;
        printf("Guess a letter: ");
        scanf(" %c", &letter);

        letter = tolower(letter);

        int alreadyTried = 0;
        for (int i = 0; i < triedCount; i++)
        {
            if (triedLetters[i] == letter)
            {
                alreadyTried = 1;
            }
        }

        if (alreadyTried == 1)
        {
            printf("You already guessed that letter! Try a different one.\n");
            continue;
        }
        triedLetters[triedCount] = letter;
        triedCount++;

        int found = 0;
        for (int i = 0; i < len; i++)
        {
            if (letter == word[i])
            {
                guessed[i] = letter;
                found = 1;
            }
        }
        if (found == 1)
        {
            printf("Correct guess\n");
        }
        else
        {
            printf("Oops try again!\n");
            wrong_counter++;
        }

        if (wrong_counter == 8)
        {
            printf("You have used all your 8 chances!\n");
            printf("The word was: %s\n", word);
            return 1;
        }

        print_word(len, guessed);

        if (checkWin(len, guessed, word) == 1)
        {
            return 1;
        }
    }

    return 0;
}

int print_word(int len, char guessed[len])
{
    for (int i = 0; i < len; i++)
    {
        printf("%c", guessed[i]);
    }
    printf("\n");
    return 0;
}

int checkWin(int len, char guessed[len], char word[len])
{
    int check = 0;
    for (int i = 0; i < len; i++)
    {
        if (guessed[i] == word[i])
        {
            check++;
        }
        if (check == len)
        {
            printf("U won!!!\n");
            return 1;
        }
    }
    return 0;
}