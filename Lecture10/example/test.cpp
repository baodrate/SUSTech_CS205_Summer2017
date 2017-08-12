#include <iostream>
#include "Dummy.hpp"

using namespace std;

void f(Dummy dum){
	cerr<<"in function f()"<<endl;
}

int main(){
	Dummy dum(10);
	f(dum);
	cerr << "Leaving main()" << endl;
	return 0;

// 	Constructor called
// in function f()
// Destructor called
// Leaving main()
// Destructor called
// test(16583,0x7fff73950000) malloc: *** error for object 0x7fb438500000: pointer being freed was not allocated
// *** set a breakpoint in malloc_error_break to debug
// /bin/bash: line 1: 16583 Abort trap: 6           "/Users/chendong/Downloads/CS205_summer2017/LAB3/HashTable/test"
// [Finished in 0.4s with exit code 134]
// [shell_cmd: g++ "/Users/chendong/Downloads/CS205_summer2017/LAB3/HashTable/test.cpp" -o "/Users/chendong/Downloads/CS205_summer2017/LAB3/HashTable/test" && "/Users/chendong/Downloads/CS205_summer2017/LAB3/HashTable/test"]
}