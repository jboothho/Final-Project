#ifndef SVI_H
#define SVI_H
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using std::ifstream, std::string, std::vector, std::cout, std::endl;

class SVI {
public:
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    SVI();
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    SVI(long ID, long pop, long house, long totDis, long totChild, long olderAdult, long low_to_no, long lep, long poc, long double med_ill);
    
    // Getters
    
    long getID()const;
    
    long getPop()const;
    
    long getHouse()const;
    
    long getTotDis()const;
    
    long getTotChild()const;
    
    long getOlderAdult()const;
    
    long getLow_to_no()const;
    
    long getLEP()const;
    
    long getPOC()const;
    
    long double getMed_ill()const;

    static void readDataFromFile(vector<SVI>& data);
    
private:
    long ID;
    long pop;
    long house;
    long totDis;
    long totChild;
    long olderAdult;
    long low_to_no;
    long lep;
    long poc;
    long double med_ill;
    
};

#endif