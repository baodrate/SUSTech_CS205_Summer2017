#include <stdio.h>
int main(){
        char alpha[26];//26 alphas
        for (int i = 0; i < 26; ++i)
        {
        	alpha[i]='A'+i;
        }

        for(int i = 0; i < 26; ++i)
       {// line i
   			for(int j = 0; j < 26; ++j)
   			{// column j
   				printf("%c\t",alpha[(i+j)%26]);
   			}
   			printf("\n");
        }
        

        return 0; 
      }