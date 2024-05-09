#include "DataAnalysis.h"

    DataAnalysis::DataAnalysis(){}

    void DataAnalysis::intro(){
        cout << "Welcome to the Boston Environmental Health Mapping Tool!" << endl;
        cout << "You have access to variables from two datasets:\n1. Climate Ready Boston Social Vulnerability" << endl;
        cout << "2. Urban Land Cover and Urban Heat Island Effect Database" << endl;
        cout << "You may pick one variable from each for comparison by census tract neighborhood" << endl;
    }

    int DataAnalysis::SVI_variable() {
        int choice;
        cout << "\nHere is the list of social vulnerability variables:" << endl;
        cout << "1. Population\n2. Number of Houses\n3. Population with a Disability\n4. Number of Children" << endl;
        cout << "5. Number of Older Adults\n6. Population with low to no income\n7. Population with little English Language Proficiency" << endl;
        cout << "8. People of Color Population\n9. Population with a medical illness" << endl;
        cout <<"\nWhich variable (1-9) would you like to compare?" << endl;
        std::cin >> choice;
        return choice;
    }


    int DataAnalysis::UrbanHeat_variable() {
        int choice;
        cout << "Here is the list of urban heat variables:" << endl;
        cout << "1. Land Surface Temperature (Celcius)\n2. Tree Canopy Fraction\n3. Albedo (Surface Reflectivity)\n4. Impervious Surface Fraction" << endl;
        cout << "\nWhich variable (1-4) would you like to compare?" << endl;
        std::cin >> choice;
        return choice;
    }

void DataAnalysis::filterUrbanHeat(std::vector<SVI> &svi_vec, const std::vector<UrbanHeat> &urban_vec) {
    // Step 1: Collect all unique IDs from urban_vec
    std::vector<long> urbanIDs;
    for (const auto& urban : urban_vec) {
        urbanIDs.push_back(urban.getID());
    }

    // Step 2: Filter svi_vec based on urbanIDs
    svi_vec.erase(std::remove_if(svi_vec.begin(), svi_vec.end(),
                                 [&urbanIDs](const SVI& svi) {
                                     return std::find(urbanIDs.begin(), urbanIDs.end(), svi.getID()) == urbanIDs.end();
                                 }),
                  svi_vec.end());
}

void DataAnalysis::filterSVI(std::vector<UrbanHeat>& urban_vec, const std::vector<SVI>& svi_vec) {
    // Step 1: Collect all unique IDs from svi_vec
    std::vector<long> sviIDs;
    for (const auto& svi : svi_vec) {
        sviIDs.push_back(svi.getID());
    }

    // Step 2: Filter urban_vec based on sviIDs
    urban_vec.erase(std::remove_if(urban_vec.begin(), urban_vec.end(),
                                   [&sviIDs](const UrbanHeat& urban) {
                                       return std::find(sviIDs.begin(), sviIDs.end(), urban.getID()) == sviIDs.end();
                                   }),
                    urban_vec.end());
}

void DataAnalysis::dataToCSV(vector<UrbanHeat> &urban_vec, vector<SVI> &svi_vec, int urban_choice,
                                    int svi_choice) {
    std::ofstream outfile("DataToMap.csv");
    vector<long double>myVar1;
    vector<long>myVar2;
    vector<long double> myVar3;
    if (!outfile.is_open()) {
        std::cerr << "Error: Unable to open output file." << endl;
        return; }
    outfile << "GeoID,UrbanHeat_Variable,SVI_Variable" << "\n";
    myVar1.reserve(urban_vec.size()-1);
    myVar2.reserve(svi_vec.size()-1);
    // Make a vector of just the variable
    if (urban_choice == 1){
    for (int i = 0; i < urban_vec.size()-1; ++i){
            myVar1.push_back(urban_vec[i].getLST());
        }
    }
    else if (urban_choice == 2){
        for (int i = 0; i < urban_vec.size()-1; ++i){
            myVar1.push_back(urban_vec[i].getCanopy());
        }
    }
    else if (urban_choice == 3){
    for (int i = 0; i < urban_vec.size()-1; ++i){
    myVar1.push_back(urban_vec[i].getAlbedo());
        }
    }
    else if (urban_choice == 4){
        for (int i = 0; i < urban_vec.size()-1; ++i){
            myVar1.push_back(urban_vec[i].getISA());
        }
    }

    // Make a vector of just the variable
    if (svi_choice == 1) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getPop());
        }
    }
    else if (svi_choice == 2) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getHouse());
        }
    }
    else if (svi_choice == 3) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getTotDis());
        }
    }
    else if (svi_choice == 4) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getTotChild());
        }
    }
    else if (svi_choice == 5) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getOlderAdult());
        }
    }
    else if (svi_choice ==6) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getLow_to_no());
        }
    }
    else if (svi_choice ==7) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getLEP());
        }
    }
    else if (svi_choice ==8) {
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar2.push_back(svi_vec[i].getPOC());
        }
    }
    else if (svi_choice == 9) {
        myVar3.reserve(svi_vec.size()-1);
        for (int i = 0; i < svi_vec.size()-1; ++i){
            myVar3.push_back(svi_vec[i].getMed_ill());
        }
    }
    // Write data to CSV
    if (svi_choice!=9){
        for (int i = 0; i<svi_vec.size()-1; ++i){
            outfile << svi_vec[i].getID() << "," << myVar1[i] << "," << myVar2[i] << "\n";
        }
    }
    else{
        for (int i = 0; i<svi_vec.size()-1; ++i){
            outfile << svi_vec[i].getID() << "," << myVar1[i] << "," << myVar3[i] << "\n";
        }
    }
    outfile.close();
}





