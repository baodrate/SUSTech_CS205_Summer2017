#include"Hash.h"
#include"HashTable.h"
#include"Tdir.h"
#include <unistd.h>
#include <cstring>
extern HashTable table;
int pathsize,tot=0;
void usage();
//how to use getopt.
//Reference link:http://blog.csdn.net/zwj0403/article/details/8767140
int main(int argc, char * argv[])
{

int ch,flag=0;

while ((ch = getopt(argc, argv, "hdn")) != -1)
       {
        
           switch (ch) 
        {
               case 'h':
                       usage();
                       break;
               case 'd':
                       cerr<<("-DEBUG MODE-\n");
                      flag=1;
                       break;
               case 'n':
                       cerr<<("hide the rate of progress\n");
                      tot=-1;
                       break;
               
               case '?':
                       cerr<<("Opps!Unknown option: ");
                       cerr<<((char)optopt);
              
                       return 1;
                       break;
               
               }

       }

int count=argc-optind;//para count
       if(count==0){
         cerr<<("ERROR:Dir to check should be given\n" );
         usage();
         return 1;
       }
       else if(count>1){
         cerr<<("ERROR:Too many parameters are given\n" );
         usage();
         return 1;
       }
       char dir_name[50];
       strcpy(dir_name,argv[optind]);
       //cout<<dir_name<<endl;
       pathsize=strlen(dir_name);
       //cout<<"+"<<pathsize<<endl;
       listDir(dir_name);
      if(flag)table.printTable();
}

void usage(){
cerr<<("Usage: ./compare [-d][-h] arg\nOptions and arguments :\n-d:\tprint debug message\n-h:\thelp\n-n:\thide the rate of progress\narg:\tthe dir to check\n ");
}

