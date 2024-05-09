#include "SVI.h"
#include "UrbanHeat.h"
#include "MergeSort.h"
#include "DataAnalysis.h"
#include <vector>
#include <iostream>
using namespace std;


int main(){
    vector<SVI> svi_vec;
    vector<UrbanHeat> urban_vec;
    int SVI_choice;
    int UrbanHeat_choice;

    UrbanHeat::readDataFromFile(urban_vec);
    SVI::readDataFromFile(svi_vec);

    // Remove non unique IDs
    DataAnalysis::filterUrbanHeat(svi_vec, urban_vec);
    DataAnalysis::filterSVI(urban_vec, svi_vec);

    // Sort both by ID
    urban_vec = mergeSort(urban_vec);
    svi_vec = mergeSort(svi_vec);

    DataAnalysis::intro();
    SVI_choice = DataAnalysis::SVI_variable();
    UrbanHeat_choice = DataAnalysis::UrbanHeat_variable();

    DataAnalysis::dataToCSV(urban_vec, svi_vec, UrbanHeat_choice, SVI_choice);

    return 0;
}



