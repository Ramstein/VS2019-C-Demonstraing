

#include "pch.h"
#include <iostream>
# include <stdio.h>
# include<string.h> 


void checkRepeats(char sentence[], char text[]);

int main(){
	while (1){
		char sentence[500], x, text[10];

		printf("Enter the sentence >");
		fgets(sentence, sizeof(sentence), stdin);
		printf("please enter the search word >");
		fgets(text, sizeof(text), stdin);

		checkRepeats(sentence, text);

		printf("\n\nPress ENTER to try again, '0' to quit : ");
		x = getchar();
		if (x == '0')
			break;
	}
}

void checkRepeats(char sentence[], char text[])
{
	int i = 0, len, words = 0, again = 0;
	char wrd[10];
	len = strlen(sentence);

	while (sentence[i] != '\0'){
		if (sentence[i] == ' '){
			words++;
			i++;
			wrd[i] = sentence[i];
		}
		if (strcmp(wrd, text) == 1){
			again++;
		}
		else
			printf("The search word does not exist in the sentence");
	}
	if (len == 0){
		printf("\nRESULTS:  Number of words in the text: %d", words);
		printf("\nCharacters:%d ", len);
	}
	else{
		printf("\nRESULTS:  Number of words: %d", words + 1);
		printf("\nCharacters:%d ", len - 1);
	}
	printf("The search word repeats %d times in the sentence\n", again);

}