#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void lengu(){

    char    str[100];
    int countL,countU;
    int counter;
 
    countL=countU=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++){
 
        if(str[counter]>='A' && str[counter]<='Z')
            countU++;
        else if(str[counter]>='a' && str[counter]<='z')
            countL++;   
    }
 
    printf("Total Upper case characters: %d, Lower Case characters: %d",countU,countL);
 
    
}
int main (){
  lengu();
  return 0;
}