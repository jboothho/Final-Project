#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>

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
    
    /* Requires:
     Modifies:
     Effects: */
    virtual void ReadDataFromFile(vector<DataAnalysis> &data, string filename);
    
    // Getter
    getTitle();
        
    
    /* PerformAnalysis1 function that will perform the first analysis on the data
     and load all of the outcomes into a vector*/
        /* I'm thinking that one of them could perform a basic analysis and get the mean of each area*/
    void PerformAnalysis1(vector<DataAnalysis> & data);
    
    /* PerformAnalysis2 function that will perform the second analysis on the data*/
        /* This one could do a linear regression*/
    void PerformAnalysis2(vector<DataAnalysis> & data);

    /* PerformAnalysis3 function that will perform the third analysis on the data*/
        /* And this one could do a correlation assessment between two variables*/
    void PerformAnalysis3(vector<DataAnalysis> & data);

    /* SendData function that will send the data to Python to add to maps*/
    void SendData();
    
private:
    std::string title;
}

