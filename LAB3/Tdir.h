 #ifndef Tdir_h
 #define Tdir_h
 #include <stdio.h>  
 #include <string.h> 
 #include <cstdlib>  
 #include <dirent.h>  
 #include <iostream>
 #include"HashTable.h"
long getFileSize(const char* strFileName);

char *join(char *a, char *b);

void listDir(char *path); 
#endif
