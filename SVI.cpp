#include "SVI.h"

 SVI::SVI() : ID(0), pop(0), house(0), totDis(0), totChild(0), olderAdult(0), low_to_no(0), lep(0), poc(0), med_ill(0) {}

 SVI::SVI(long  ID, long  pop, long  house, long  totDis, long  totChild, long  olderAdult, long  low_to_no, long  lep, long  poc, long double med_ill): ID(ID), pop(pop), house(house), totDis(totDis), totChild(totChild), olderAdult(olderAdult), low_to_no(low_to_no), lep(lep), poc(poc), med_ill(med_ill){}
        
 // Getters
 long  SVI::getID()const {return ID;}

 long  SVI::getPop()const {return pop;}

 long  SVI::getHouse()const {return house;}

 long  SVI::getTotDis()const {return totDis;}

 long  SVI::getTotChild()const {return totChild;}

 long  SVI::getOlderAdult()const {return olderAdult;}

 long  SVI::getLow_to_no()const {return low_to_no;}

 long  SVI::getLEP()const {return lep;}

 long  SVI::getPOC()const {return poc;}

 long double SVI::getMed_ill()const {return med_ill;}
    
 void SVI::readDataFromFile(vector<SVI> &data){
    ifstream inFile;
    SVI obj;
    inFile.open("/Users/jboothhowe/Documents/CS2300/Final-Project/BostonSVI.csv");
    string header;

    // Check if the file failed to open
    if (!inFile.is_open()) {
        cout << "Error: Unable to open file." << endl;
    }

    if(inFile){
        inFile >> header;
    }
    long ID_file, pop_file, house_file, totDis_file, totChild_file, olderAdult_file, low_to_no_file, lep_file, poc_file;
    long double med_ill_file;
    char comma = ',';
    long double filler;
    string nothing;
        
    while (inFile && inFile.peek() != EOF){
        // filler num for first column of csv
        inFile >> filler >> comma;

        // get ID
        inFile >> ID_file >> comma;

        // filler for area sqft and acres
        inFile >> filler >> comma;
        inFile >> filler >> comma;
            
        // get Population
        inFile >> pop_file >> comma;

        // get Housing Unit count
        inFile >> house_file >> comma;
            
        //get total disability
        inFile >> totDis_file >> comma;
            
        // get total children
        inFile >> totChild_file >> comma;
            
        // get older adult count
        inFile >> olderAdult_file >> comma;
            
        // get low to no income
        inFile >> low_to_no_file >> comma;

        // get english language proficiency count
        inFile >> lep_file >> comma;
            
        // get people of color count
        inFile >> poc_file >> comma;
            
        // get medical illness count
        inFile >> med_ill_file >> comma;

        // filler for name
        getline(inFile, nothing, comma);
            
        // filler for shape_area and shape_length
        inFile >> filler >> comma;
        inFile >> filler;

        obj = SVI(ID_file, pop_file, house_file, totDis_file, totChild_file, olderAdult_file,
                   low_to_no_file, lep_file, poc_file, med_ill_file);

        // putting data from this line of file long o
        // an SVI object and adding object to the vector
        data.push_back(obj);
    }
    inFile.close();
        
}


