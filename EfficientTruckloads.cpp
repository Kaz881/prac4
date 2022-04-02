#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads() {

}



int EfficientTruckloads::numTrucks(int numCrates , int loadSize){

     if (table.size() == 0) {
         for (int i=0;i<=numCrates;i++) {
             table.push_back(-1);
         }
     }

    if (numCrates<=loadSize) {
        table.at(numCrates)=1;
        return 1;
    }

    if (table.at(numCrates)!=-1) {
        return table.at(numCrates);
    }

    int value1;
    int value2;

    if (numCrates%2==0) {
        value1=numCrates/2;
        value2=value1;
    }
    else {
        value1=(numCrates-1)/2;
        value2=(numCrates+1)/2;
    }

   int value=numTrucks(value1,loadSize) + numTrucks(value2,loadSize);

   //int value=table.at(value1) + table.at(value2);

   table.at(numCrates)=value;

   //table.pushback(value);

    return value;
}