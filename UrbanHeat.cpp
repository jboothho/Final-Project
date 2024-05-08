#include "UrbanHeat.h"

UrbanHeat::UrbanHeat() : ID(0), lst(0), can(0), alb(0), isa(0) {}

UrbanHeat::UrbanHeat(long ID, double lst, double can, double alb, double isa)
        : ID(ID), lst(lst), can(can), alb(alb), isa(isa) {}

// Getters
long UrbanHeat::getID() const { return ID; }
double UrbanHeat::getLST() const { return lst; }
double UrbanHeat::getCanopy() const { return can; }
double UrbanHeat::getAlbedo() const { return alb; }
double UrbanHeat::getISA() const { return isa; }

// Setters
void UrbanHeat::setID(long newID) { ID = newID; }
void UrbanHeat::setLST(double newLST) { lst = newLST; }
void UrbanHeat::setCanopy(double newCanopy) { can = newCanopy; }
void UrbanHeat::setAlbedo(double newAlbedo) { alb = newAlbedo; }
void UrbanHeat::setISA(double newISA) { isa = newISA; }

// overload < operator
bool UrbanHeat::operator<(const UrbanHeat &s) const {
    return this->ID < s.ID;
}

//overload > operator
bool UrbanHeat::operator>(const UrbanHeat &s) const {
    if (this->ID > s.ID) {
        return true;
    }
    return false;
}

//overload <= operator
bool UrbanHeat::operator<=(const UrbanHeat &s) const {
    if (this->ID <= s.ID) {
        return true;
    }
    return false;
}

//overload >= operator
bool UrbanHeat::operator>=(const UrbanHeat &s) const {
    if (this->ID >= s.ID) {
        return true;
    }
    return false;
}

//overload == operator
bool UrbanHeat::operator==(const UrbanHeat &s) const {
    if (this->ID == s.ID) {
        return true;
    }
    return false;


void UrbanHeat::readDataFromFile(vector<UrbanHeat> &data){
    std::ifstream inFile;
    UrbanHeat obj;
    inFile.open("/Users/jboothhowe/Documents/CS2300/Final-Project/UrbanLCH.csv");

    // Check if the file failed to open
    if (!inFile.is_open()) {
        cout << "Error: Unable to open file." << endl;
    }
    std::string header;
    if (inFile){
        inFile >> header;
    }
    long new_ID = 0;
    long double new_lst = 1;
    long double new_canopy = 2;
    long double new_albedo = 3;
    long double new_isa = 4;
    char comma = ',';
    while (inFile && inFile.peek() != EOF){
        // get ID
        inFile >> new_ID >> comma;
        // get Land Surface Temperature
        inFile >> new_lst >> comma;
        // get Tree Canopy fraction
        inFile >> new_canopy >> comma;
        // get Albedo
        inFile >> new_albedo >> comma;
        // get Impervious surface fraction
        inFile >>new_isa;

        obj = UrbanHeat(new_ID, new_lst, new_canopy, new_albedo, new_isa);
        // Putting data from this line of file into
        // an UrbanHeat object and adding object to the vector
        data.emplace_back(obj);
    }
    inFile.close();
}


    
