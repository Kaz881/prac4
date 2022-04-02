#include <iostream>
#include <math.h>
#include <string>
#include "Reverse.h"

Reverse::Reverse() {
    
}

int Reverse::reverseDigit(int value) {

    if (value<0) {
        return -1;
    }
    if (value==0) {
        return 0;
    }
    int lastvalue=value%10;
    int length=log10(value);
    int range=pow(10,length);

    return (lastvalue*range)+reverseDigit(value/10);
   
}

std::string Reverse::reverseString(std::string letters) {
    
    
    
    int length=letters.length();
    
    if (length==1) {
        return letters;
    }
    if (length<=0) {
        return "ERROR";
    }
    std::string nextLetters=letters;
    nextLetters.erase (length-1,1);
    return letters.back () + reverseString(nextLetters);
}