#ifndef DATA_ANALYSIS_H
#define DATA_ANALYSIS_H
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using std::ifstream, std::string, std::vector, std::cout, std::endl;
#include "SVI.h"
#include "UrbanHeat.h"


/* DataAnalysis super class that will have the capacity to perform three different statistical analyses on its subclasses datasets*/
class DataAnalysis {
public:
    //TODO: fill out comments for each function
    /* Requires:
     Modifies:
     Effects: */
    DataAnalysis();
    
    /* Requires:
     Modifies:
     Effects: */
    virtual ~DataAnalysis() = default;

    static void intro();
    static int SVI_variable();
    static int UrbanHeat_variable();

    // Function to remove elements from vec2 that do not have the specified common ID
// Function to filter svi_vec based on unique IDs present in urban_vec
    static void filterUrbanHeat(std::vector<SVI>& svi_vec, const std::vector<UrbanHeat>& urban_vec);

// Function to filter urban_vec based on unique IDs present in svi_vec
    static void filterSVI(std::vector<UrbanHeat>& urban_vec, const std::vector<SVI>& svi_vec);


    static void dataToCSV(vector<UrbanHeat>& urban_vec, vector<SVI>& svi_vec, int urban_choice, int svi_choice);



};

#endif