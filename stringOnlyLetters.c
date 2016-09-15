/*////////////////////////////////////////
		by DJM
/*////////////////////////////////////////

#include <stdio.h>

void onlyLetters(char *input, int n);

int main(){
	
	int n = 100;
	char input[n];
	
	onlyLetters(input, n);
	
	printf("String (only letters) - %s", input);
	
	return 0;
}

void onlyLetters(char *input, int n){
	
	int i = 0;
	char letter;
	
	while(i < n){
		letter = getchar();
		
		if (letter == '\n'){
			input[i] = '\0';
			return;
		} else if ((letter >= 65) && (letter <= 90) || (letter >= 97) && (letter <= 122) || (letter == 32)){
			input[i] = letter;
			i++;
		}
	}
	
}
