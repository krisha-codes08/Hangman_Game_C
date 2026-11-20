// Hangman C simple
#include <stdio.h>
#include <string.h>

int main() {
    char sword[] = "codex";
    int l = strlen(sword);
    char word[6] = "_____"; // Get the length of the word
    int lives = 5;
    char guess;
    int found;

    printf("Let's play Hangman!\n");
    while (lives > 0 && strcmp(word, sword) != 0) {
        printf("Word: %s\n", word);
        printf("Lives left: %d\n", lives);
        printf("Guess a letter of the secreat word:\n");
        scanf(" %c", &guess);
        found = 0; // like a flag... keeps track of whether the single letter guess was correct or not

        for (int i = 0; i < l; i++) {
            if (sword[i] == guess) {
                word[i] = guess;
                found = 1;
            }
        }

        if (found == 0) {
            printf("Wrong guess !\n");
            lives--;
        } else {
            printf("Correct guess !\n");
        }
    }

    if (strcmp(word, sword) == 0) {
        printf("Congratulations! You saved the hangman ! the word is %s\n", word);
    } else {
        printf("Game over... You lost!!\n");
    }
    return 0;
}