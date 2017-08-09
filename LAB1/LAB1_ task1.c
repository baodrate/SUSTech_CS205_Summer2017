#include <stdio.h>
int main(){
        char id[100];
        char name[100];
        fprintf( stderr, "Your id ? \n");//remind to input id.
        scanf("%s",&id);
        fprintf( stderr, "Your name ? \n"); //remind to input name.
        gets("%s",&name);
        printf("Welcome %s %s to the C and C++ world\n",id,name);//stdout 
        return 0; 
      }