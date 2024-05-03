#include "DataAnalysis.h"

class SVI : public DataAnalysis {
public:
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    SVI:: SVI() : ID(0), pop(0), house(0), totDis(0), totChild(0), olderAdult(0), low_to_no(0), lep(0), poc(0), med_ill(0) {}

    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    SVI:: SVI(int ID, int pop, int house, int totDis, int totChild, int olderAdult, int low_to_no, int lep, int poc, double med_ill): ID(ID), pop(pop), house(house), totDis(totDis), totChild(totChild), olderAdult(olderAdult), low_to_no(low_to_no), lep(lep), poc(poc), med_ill(med_ill){}
        
    // Getters
    int getID()const {return ID;}

    int getPop()const {return pop;}

    int getHouse()const {return house;}

    int getTotDis()const {return totDis;}

    int getTotChild()const {return totChild;}

    int getOlderAdult()const {return olderAdult;}

    int getLow_to_no()const {return low_to_no;}

    int getLEP()const {return lep;}

    int getPOC()const {return poc;}

    double getMed_ill()const {return med_ill;}
    
    void readDataFromFile(vector<SVI>& data){
        ifstream inFile;
        inFile.open("/Users/jboothhowe/Documents/CS2300/Final-Project/BostonSVI.csv");
        string header;
        
        if(inFile){
            inFile >> header;
        }
        int ID = 0;
        int pop = 0;
        int house = 0;
        int totDis = 0;
        int totChild = 0;
        int olderAdult = 0;
        int low_to_no = 0;
        int lep = 0;
        int poc = 0;
        double med_ill = 0;
        char comma = ',';
        double filler;
        std::string nothing;

        
        while (inFile && inFile.peek() != EOF){
            // filler num for first column of csv
            inFile >> filler >> comma;
            
            // get ID
            inFile >> ID >> comma;
            
            // filler for area sqft and acres
            inFile >> filler >> comma;
            inFile >> filler >> comma;
            
            // get Population
            inFile >> pop >> comma;
            
            // get Housing Unit count
            inFile >> house >> comma;
            
            //get total disability
            inFile >> totDis >> comma;
            
            // get total children
            inFile >> totChild >> comma;
            
            // get older adult count
            inFile >> olderAdult >> comma;
            
            // get low to no income
            inFile >> low_to_no >> comma;
            
            // get english language proficiency count
            inFile >> lep >> comma;
            
            // get people of color count
            inFile >> poc >> comma;
            
            // get medical illness count
            inFile >> med_ill >> comma;
            
            // filler for name
            inFile >> nothing >> comma;
            
            // filler for shape_area and shape_length
            inFile >> filler >> comma;
            inFile >> filler >> comma;
            
            // putting data from this line of file into
            // an SVI object and adding object to the vector
            data.push_back(SVI(ID, pop, house, totDis, totChild, olderAdult, low_to_no, lep, poc, med_ill));
            
        }
        inFile.close();
        
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

