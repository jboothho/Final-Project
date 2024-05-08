#include "SVI.h"
#include "UrbanHeat.h"
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<SVI> svi_vec;
    vector<UrbanHeat> urban_vec;
    UrbanHeat::readDataFromFile(urban_vec);
    SVI::readDataFromFile(svi_vec);
}
