#ifndef SVI_H
#define SVI_H
#include "DataAnalysis.h"

class SVI : public DataAnalysis {
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
    SVI(int ID, int pop, int house, int totDis, int totChild, int olderAdult, int low_to_no, int lep, int poc, double med_ill);
    
    // Getters
    
    int getID()const;
    
    int getPop()const;
    
    int getHouse()const;
    
    int getTotDis()const;
    
    int getTotChild()const;
    
    int getOlderAdult()const;
    
    int getLow_to_no()const;
    
    int getLEP()const;
    
    int getPOC()const;
    
    double getMed_ill()const;
    
    void readDataFromFile(std::vector<SVI>& data);
    
private:
    int ID;
    int pop;
    int house;
    int totDis;
    int totChild;
    int olderAdult;
    int low_to_no;
    int lep;
    int poc;
    double med_ill;
    
};

#endif