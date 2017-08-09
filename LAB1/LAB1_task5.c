#include <stdio.h>
#include <ctype.h>

char c2p(char c,char k);


int main(){
	
	char input[100];
	gets(input);
	char result[100];
	char *key="Vigenere";

	int i=0;
	while(input[i] != '\0'){
	  result[i]=isalpha(input[i])?c2p(input[i],key[i%8]):input[i];
	  //if input is alpha, cipher it;else ,keep ir unchanged
	  printf("%c",result[i]);
	  i++;
	}
	printf("\n");
	return 0;
          }



char c2p(char c,char k){
	//cipher to password
	c=toupper(c);
	k=toupper(k);
	char p=(c-k+26)%26+'A';
	return p; 
}