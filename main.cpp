#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

using namespace std;
int main() {
    
    Reverse R;
    Truckloads T;
    //cout <<R.reverseDigit(12) <<endl;
    //cout << R.reverseString("abc") <<endl;
    cout << T.numTrucks(18,4) <<endl;
    EfficientTruckloads E;
    
    cout << E.numTrucks(18,4) <<endl;
    return 0;
}