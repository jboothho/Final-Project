#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>

/* DataAnalysis class that will take in a file, sort it, and perform three different
 statistical analyses */

class DataAnalysis {
public:
    // Constructors
    DataAnalysis();
    // Getters
    
    // Setters
    
    /* ReadDataFromFile function that will take in data from the .csv file */
    void ReadDataFromFile(vector<DataAnalysis> &data, string filepath){
       
        ifstream inFile;
        inFile.open(filepath);
        
        string header;
        
        if (inFile){
            inFile >> header;
        }
        //else-- file open error
        
    
    }
    
    /* PerformAnalysis1 function that will perform the first analysis on the data*/
        /* I'm thinking that one of them could perform a basic analysis and get the mean of each area*/
    
    /* PerformAnalysis2 function that will perform the second analysis on the data*/
        /* This one could do a linear regression*/
    
    /* PerformAnalysis3 function that will perform the third analysis on the data*/
        /* And this one could do a correlation assessment between two variables*/
    
    /* SendData function that will send the data to Python to add to maps*/
    
    
    
private:
    // vector holding dataset
}

