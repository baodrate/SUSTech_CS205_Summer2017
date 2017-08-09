#include <stdio.h>
#include <ctype.h>

char p2c(char p,char k);


int main(){
	char input[100];
	gets(input);
	char result[100];
	char *key="Vigenere";

	int i=0;
	while(input[i] != '\0'){
	  result[i]=isalpha(input[i])?p2c(input[i],key[i%8]):input[i];
	  //if input is alpha, cipher it;else ,keep ir unchanged
	  printf("%c",result[i]);
	  i++;
	}
          }

char p2c(char p,char k){
	//password to cipher
	p=toupper(p);
	k=toupper(k);
	char c =(p-'A'+k-'A')%26+'A';
	return c; 
}

