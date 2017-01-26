// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <stdio.h>
#include <string.h>

// This function uses recursion to reverse a word in C.
void reversedWord (char input [], int size) {
  if (size >= 0) {
    printf("%c", input[size]);
    reversedWord(input, size - 1);
  }
  else {
    printf("\n");
  }
}

// This is our main method that is responsible for running our program.
int main () {
  char repeat[3];
  char word[100];
  int wordLen;

  // Gets user input
  printf("Enter word to be reversed: ");
  scanf("%s", word);

  // Get length of word and reverse it
  wordLen = strlen(word) - 1;
  printf("Here is your word reversed: ");
  reversedWord(word, wordLen);

  // Repeat?
  printf("Would you like to reverse another word? (Y/N) ");
  scanf("%s", repeat);

  if (repeat[0] == 'y') {
    main();
  }
  else {
    printf("\nSolid, have a nice day\n");
    return 0;
  }

    /*
      create int variable and put the input length - 1

      print the array reversed but now it has things in it

      call reversedWord() - send the user inputted string and the length of it
      ask for repeat (input)
      if repeat yes, call main
      if repeat no, then nothing
    */

  return 0;
}
