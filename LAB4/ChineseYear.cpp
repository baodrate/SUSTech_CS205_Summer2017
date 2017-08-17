#include <iostream>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <string>

#include "ChineseYear.hpp"

#define CYCLE_YEARS    12

using namespace std;

// Casts to silence compilation warnings
static char *G_animals[CYCLE_YEARS + 1] = 
                    {(char *)"Rat",
                     (char *)"Ox",
                     (char *)"Tiger",
                     (char *)"Rabbit",
                     (char *)"Dragon",
                     (char *)"Snake",
                     (char *)"Horse",
                     (char *)"Goat",
                     (char *)"Monkey",
                     (char *)"Rooster",
                     (char *)"Dog",
                     (char *)"Pig",
                     NULL};

//
// --   Utility functions
//
static int animal_pos(string animal) {
    int         i = 0;
    const char *a = animal.c_str();

    G_animals[CYCLE_YEARS] = (char *)a;
    while (strcasecmp(G_animals[i], (char *)a)) {
      i++;
    }
    if (i == CYCLE_YEARS) {
      return -1;
    }
    return i;
}

static bool valid_animal(string animal) {
    return (animal_pos(animal) == -1 ? false : true);
}

static string animal(int pos) {
    if ((pos >= 0) && (pos < CYCLE_YEARS)) {
      return string(G_animals[pos]);
    }
    return NULL;
}


// 
// From now on, it’s you turn to write the code for constructors,
// operators and friend functions …`
//

ChineseYear::ChineseYear(){
    _animal=animal(2017-2008);
    _greg=2017;
}

ChineseYear::ChineseYear(std::string animal){
    if(!valid_animal(animal)){
        throw WrongChineseYear();
    }
    _animal=animal;
    _greg=2008+animal_pos(animal);
}

ChineseYear::ChineseYear(int year){
    if(year<1900){
        throw WrongGregorianYear();
    }
    _animal=animal((year-1900)%12);
    _greg=year;
}



ChineseYear ChineseYear:: operator+ (const int &a){
        ChineseYear tmp = *this;
         tmp._animal=animal((animal_pos(_animal)+a%12+12)%12);
         tmp._greg+=a;
         if (tmp._greg<1900)
         {
             throw WrongGregorianYear();
         }
         return tmp;
}
ChineseYear operator+ (const int &a,const ChineseYear &cy){
    ChineseYear tmp = cy;
    tmp._animal=animal((animal_pos(cy._animal)+a%12+12)%12);
    tmp._greg+=a;
    if (tmp._greg<1900)
    {
        throw ChineseYear::WrongGregorianYear();
    }
    return tmp;

}


ChineseYear ChineseYear:: operator+=(const int &a){
    *this=*this+a;
    return *this;
}

std::ostream &operator<<(std::ostream &os,
                                        const ChineseYear &cy) {
    os<<cy._animal<<" "<<cy._greg<<"-"<<(cy._greg+1);
    //Rooster 2017-2018
return os;
}


