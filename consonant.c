#include <stdio.h>
#include<string.h>

void Consonant (char userInput[30]){
	int i;
	int largo = strlen(userInput);
	for(i=0; i<=largo; i++){
		if (userInput[i]!= 'a' && userInput[i]!= 'e' && userInput[i]!= 'i' && userInput[i]!= 'o' && userInput[i]!= 'u' && userInput[i]!= 'A' && userInput[i]!= 'E' && userInput[i]!= 'I' && userInput[i]!= 'O' && userInput[i]!= 'U' ){
			printf("%c",userInput[i]);
		} 
		}
	}

int main(void) {
	char userInput[30];
	scanf("%s", &userInput);
	Consonant(userInput);
	return 0;
}