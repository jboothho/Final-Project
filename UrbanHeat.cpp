#include "UrbanHeat.h"

class UrbanHeat : public DataAnalysis {
public:
    
    UrbanHeat:: UrbanHeat(){
        this -> ID = 0;
        this -> lst = 0;
        this -> can = 0;
        this -> alb = 0;
        this -> isa = 0;
    }
    
    UrbanHeat::UrbanHeat(int ID, double lst, double can, double alb, double isa)
        : ID(ID), lst(lst), canopy(can), albedo(alb), isa(isa) {}
    
    // Getters
        int getID() const { return ID; }
        double getLST() const { return lst; }
        double getCanopy() const { return canopy; }
        double getAlbedo() const { return albedo; }
        double getISA() const { return isa; }

    // Setters
        void setID(int newID) { ID = newID; }
        void setLST(double newLST) { lst = newLST; }
        void setCanopy(double newCanopy) { canopy = newCanopy; }
        void setAlbedo(double newAlbedo) { albedo = newAlbedo; }
        void setISA(double newISA) { isa = newISA; }
    
    void readDataFromFile(vector <UrbanHeat> &data){
        ifstream inFile;
        inFile.open("/Users/jboothhowe/Documents/CS2300/Final-Project/UrbanLCH.csv");
        string header;
        
        if (inFile){
            inFile >> header;
        }
        int ID = 0;
        double lst = 0;
        double canopy = 0;
        double albedo = 0;
        double isa = 0;
        char comma = ',';
        
        while (inFile && inFile.peek() != EOF){
            // get ID
            inFile >> ID >> comma;
            
            // get Land Surface Temperature
            inFile >> lst >> comma;
            
            // get Tree Canopy fraction
            inFile >> canopy >> comma;
            
            // get Albedo
            inFile >> albedo >> comma;
            
            // get Impervious surface fraction
            inFile >> isa >> comma;
            
            // Putting data from this line of file into
            // an UrbanHeat object and adding object to the vecotr
            data.push_back(UrbanHeat(ID, canopy, albedo, isa));
        }
        inFile.close();
    }
    
    private:
        int ID;
        double lst;
        double canopy;
        double albedo;
        double isa;
    
}
