#include "DataAnalysis.h"

class SVI : public DataAnalysis {
public:
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    SVI:: SVI(){
        this->ID = 0;
        this->pop = 0;
        this->house = 0;
        this->totDis = 0;
        this->totChild = 0;
        this->olderAdult = 0;
        this->low_to_no = 0;
        this->lep = 0;
        this->poc = 0;
        this->med_ill = 0;
    }
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    SVI:: SVI(int ID, int pop, int house, int totDis, int totChild, int olderAdult, int low_to_no, int lep, int poc, double med_ill): ID(ID), pop(pop), house(house), totDis(totDis), totChild(totChild), olderAdult(olderAdult), low_to_no(low_to_no), lep(lep), poc(poc), med_ill(med_ill){}
        
    // Getters
    int getID() {
        return ID;
    }

    int getPop() {
        return pop;
    }

    int getHouse() {
        return house;
    }

    int getTotDis() {
        return totDis;
    }

    int getTotChild() {
        return totChild;
    }

    int getOlderAdult() {
        return olderAdult;
    }

    int getLow_to_no() {
        return low_to_no;
    }

    int getLEP() {
        return lep;
    }

    int getPOC() {
        return poc;
    }

    double getMed_ill() {
        return med_ill;
    }
    
    void readDataFromFile(vector<SVI>){
        ifstream inFile;
        inFile.open("/Users/jboothhowe/Documents/CS2300/Final-Project/BostonSVI.csv");
        string header;
        
        if(inFile){
            
        }
    }
    
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

