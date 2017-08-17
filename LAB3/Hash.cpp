//*****************************************************************
//  Hash.cpp
//  Created by Sigmund Scarlet on Aug. 13, 2017.
//*****************************************************************
#include<openssl/md5.h>//it is a library look at read txt for more details 
#include"Hash.h"
string hashMd5(FILE *fp)
{   string str="";
	MD5_CTX ctx;  
        int len = 0;  
        unsigned char buffer[1024] = {0};  
        unsigned char digest[16] = {0};  
          
          
        MD5_Init (&ctx);  
      
        while ((len = fread (buffer, 1, 1024, fp)) > 0)  
        {  
            MD5_Update (&ctx, buffer, len);  
        }  
      
        MD5_Final (digest, &ctx);  
          
        fclose(fp);  
          
      
        int i = 0;  
        char tmp[3] = {0};  
        for(i = 0; i < 16; i++ )  
        {  
            sprintf(tmp,"%02X", digest[i]); 
           str+=tmp; 
        }  
        
         return str;
}




//*****************************************************************
// End of File
//*****************************************************************



