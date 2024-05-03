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
    
    int getID();
    
    int getPop();
    
    int getHouse();
    
    int getTotDis();
    
    int getTotChild();
    
    int getOlderAdult();
    
    int getLow_to_no();
    
    int getLEP();
    
    int getPOC();
    
    double getMed_ill();
    
    void readDataFromFile(vector<SVI>) override;
    
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
    
}

