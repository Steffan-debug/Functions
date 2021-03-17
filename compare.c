#include <stdio.h>
#include<string.h>

void Compare (char user1[50], char user2[50]){
	int i;
	int largo = strlen(user1);
	for(i=0; i<=largo; i++){
		if((user1[i] =! user2[i])){
			printf("%c", user2[i]);
		}else
			printf("%i", 0);
	}
}
	
	int main(void) {
		char user1[50];
		char user2[50];
		scanf("%s", user1);
		scanf("%s", user2);
		Compare(user1, user2);
		return 0;
	}