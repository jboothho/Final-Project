#include "SVI.h"
#include "UrbanHeat.h"
#include <vector>
#include <iostream>
using namespace std;

int main(){
    SVI svi;
    UrbanHeat urbanHeat;
    std::vector<SVI> svi_vec;
    std::vector<UrbanHeat> urbanHeat_vec;
    svi.readDataFromFile(svi_vec);
    urbanHeat.readDataFromFile(urbanHeat_vec);
}
