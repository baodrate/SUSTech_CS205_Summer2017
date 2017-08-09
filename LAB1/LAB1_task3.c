#include <stdio.h>
#include <ctype.h>

char table[26][26];
char p2c(char p,char k);
int generate_table();

int main(){
	generate_table();//the Vigenere Cipher table
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
	return 0;
          }

char p2c(char p,char k){
	//password to cipher
	p=toupper(p);
	k=toupper(k);
	int line=k-'A';
	int column=p-'A';
	char c=table[line][column];
	return c; 
}



int generate_table(){
	char alpha[26];
    for (int i = 0; i < 26; ++i)
    {
        	alpha[i]='A'+i;
    }
    for(int i = 0; i < 26; ++i)
       {
   			for(int j = 0; j < 26; ++j)
   			{
   				table[i][j]=alpha[(i+j)%26];
   			}
   			
        }
    return 0;
}