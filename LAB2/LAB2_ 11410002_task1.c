#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int judgeInArray(int item,int *items,int length);
int processFile(char sep,int ignore,int *columns,int length);


//how to use getopt.
//Reference link:http://blog.csdn.net/zwj0403/article/details/8767140
int main(int argc, char * argv[])
{
   char sep;
   int ignore;
   int *columns;
   int ch;

   sep=' ';
   ignore=0;
    
       while ((ch = getopt(argc, argv, "i:s:h")) != -1)
       {
        
           switch (ch) 
        {
               case 'h':
                       printf("Usage: ./extract [-s sep][-i int][-h] arg\nOptions and arguments :\n -s:\tsep in file\n-i:\tignore which row\n-h:\thelp\narg:to print which column(s)\n");
                       break;
               case 's':
                       sep=*optarg;
                       break;
               case 'i':
                       ignore=atoi(optarg);
                       break;
               case '?':
                       printf("Opps!Unknown option: %c\n",(char)optopt);
                       printf("========================================" );
                       break;
               
               }

       }
       int count=argc-optind;//para count
       if(count==0){
         perror("dir to check should be given" );
         printf("Usage: ./extract [-s sep][-i int][-h] arg\nOptions and arguments :\n-s:\tsep in file\n-i:\tignore which row\n-h:\thelp\narg:to print which column(s)\n");
         return 1;
       }
       else i
       int para[count];//array to store those
       int init;//iter
       for(init=optind;init<argc;init++){
         para[init-optind]=atoi(argv[init]);
       }
       
       processFile(sep,ignore,para,sizeof(para)/sizeof(int));

}



int processFile(char sep,int ignore,int *columns,int length)
{
   char c;//char we are processing on
   int row;//record which row this char is in  
   int column;//record which column this char is in 
   int flag;//record whether the char is in a pair of quotes

   row=1;
   column=1;
   flag=1;
   while(EOF != (c = getchar())){//process by chars

      if((row > ignore)&&judgeInArray(column,columns,length)){
            putchar(c);         
      }

      if(c=='\n'){
         if (row>ignore)
             printf("\n");
         column=1;
         row++;
      }else if(c=='"'){
         flag=!flag;
      }
      if(flag&&c==sep){
         column++;
      }

            
   }

}
int judgeInArray(int item,int *items,int length){
   int i;
   for(i=0;i<length;i++){
      if(item==items[i]){
         return 1;
      }
   }
   return 0;
}
