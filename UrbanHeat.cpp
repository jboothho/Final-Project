#include "UrbanHeat.h"

UrbanHeat::UrbanHeat() : ID(0), lst(0), can(0), alb(0), isa(0) {}

UrbanHeat::UrbanHeat(int ID, double lst, double can, double alb, double isa)
        : ID(ID), lst(lst), can(can), alb(alb), isa(isa) {}

// Getters
int UrbanHeat::getID() const { return ID; }
double UrbanHeat::getLST() const { return lst; }
double UrbanHeat::getCanopy() const { return can; }
double UrbanHeat::getAlbedo() const { return alb; }
double UrbanHeat::getISA() const { return isa; }

// Setters
void UrbanHeat::setID(int newID) { ID = newID; }
void UrbanHeat::setLST(double newLST) { lst = newLST; }
void UrbanHeat::setCanopy(double newCanopy) { can = newCanopy; }
void UrbanHeat::setAlbedo(double newAlbedo) { alb = newAlbedo; }
void UrbanHeat::setISA(double newISA) { isa = newISA; }

void UrbanHeat::readDataFromFile(std::vector<UrbanHeat> &data){
    std::ifstream inFile;
    inFile.open("/Users/jboothhowe/Documents/CS2300/Final-Project/UrbanLCH.csv");
    std::string header;
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
        // an UrbanHeat object and adding object to the vector
        data.push_back(UrbanHeat(ID, lst, canopy, albedo, isa));
    }
    inFile.close();
}


    
