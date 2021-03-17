#include<stdio.h>
#include<string.h>

void InvertString (char(userInput[50])){
	int i;
	int largo = strlen(userInput)-1;
	for(i=largo; i>=0; i--){
		printf("%c %c", userInput[i],userInput[largo-i]);
		if(userInput[i]==userInput[largo-i]){
			printf("%i\n",1);
		}else printf("%i\n",0);
	}
}
	
	int main(void) {
		char userInput[70];
		scanf("%s", userInput);
		InvertString(userInput);
		return 0;
	}

